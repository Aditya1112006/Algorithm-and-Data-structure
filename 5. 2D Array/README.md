# 2D Array (Matrices)

A **2D Array** (or Matrix) is a two-dimensional grid of elements arranged in rows and columns. In C++, a 2D array is stored in **row-major order** in contiguous memory locations.

---

## Key Characteristics & Memory Representation

- **Row-Major Order:** Elements of row 0 are stored sequentially in memory, followed by row 1, row 2, and so on.
- **Contiguous Memory:** A 2D array of size $N \times M$ allocates $N \times M \times \text{sizeof(datatype)}$ contiguous bytes in memory.
- **Random Access:** Element at row index `i` and column index `j` (`arr[i][j]`) is accessed in $O(1)$ time.
- **Memory Address Formula:**
  $$\text{Address of } arr[i][j] = \text{Base Address} + (i \times M + j) \times \text{sizeof(datatype)}$$
  where $M$ is the total number of columns.

---

## Matrix Pointers (2D Array & Pointers)

Understanding pointers in 2D arrays is fundamental for memory manipulation, pointer arithmetic, and passing matrices to functions.

### 1. Pointer Decay in 2D Arrays
When a 2D array name `mat` is used in an expression, it decays into a pointer to its first row:
- `mat`: Pointer to an array of $M$ integers (type: `int (*)[M]`).
- `*mat` or `*(mat + i)`: Dereferences row $i$ to yield `int*` (pointer to the first element of row $i$, i.e., `&mat[i][0]`).
- `*(*(mat + i) + j)`: Accesses the actual element at row $i$ and column $j$, which is identical to `mat[i][j]`.

### 2. Pointer Arithmetic
- `mat + i`: Advances the pointer by $i$ **entire rows** ($i \times M \times \text{sizeof(datatype)}$ bytes).
- `*(mat + i) + j`: Advances the pointer by $j$ **columns** within row $i$ ($j \times \text{sizeof(datatype)}$ bytes).
- `*(*(mat + i) + j)`: Obtains the value at `mat[i][j]`.

### 3. Passing 2D Arrays to Functions
In C++, when passing a 2D array to a function, the column dimension $M$ **must be specified** in the parameter list (e.g., `void printArr(int arr[][4], int n, int m)`):
- **Reason:** The compiler requires the column size $M$ to compute the offset formula $(i \times M + j)$. Without $M$, row indexing cannot be resolved.

### 4. Dynamic 2D Array Allocation (Pointer-to-Pointer)
For matrices whose dimensions are determined dynamically at runtime:
```cpp
// Allocation
int** matrix = new int*[rows];
for (int i = 0; i < rows; i++) {
    matrix[i] = new int[cols];
}

// Accessing element: matrix[i][j] or *(*(matrix + i) + j)

// Deallocation
for (int i = 0; i < rows; i++) {
    delete[] matrix[i];
}
delete[] matrix;
```

---

## Core Topics & Implementations

### 1. Basic 2D Array Traversal ([2D_array.cpp](file:///d:/Career/Coding/DSA/DSA/5.%202D%20Array/2D_array.cpp))
- **Description:** Basic declaration, initialization, row-major traversal, and passing a 2D array to a function using fixed column parameters.
- **Time Complexity:** $O(n \times m)$
- **Space Complexity:** $O(1)$ auxiliary space

### 2. Diagonal Sum ([Diagonal_Sum.cpp](file:///d:/Career/Coding/DSA/DSA/5.%202D%20Array/Diagonal_Sum.cpp))
Calculates the sum of elements on both Primary Diagonal ($i == j$) and Secondary Diagonal ($j == n - i - 1$) of an $N \times N$ matrix.

- **Approach 1: Brute Force ($O(n^2)$)**
  - Uses nested loops to check every cell `[i][j]`. If $i == j$ or $j == n - i - 1$, adds `mat[i][j]` to `sum`.
  - **Time Complexity:** $O(n^2)$
  - **Space Complexity:** $O(1)$

- **Approach 2: Optimal ($O(n)$)**
  - Uses a single loop over row $i$. Adds `mat[i][i]` (primary diagonal) and `mat[i][n-i-1]` (secondary diagonal).
  - Handles odd $N$ by checking `i != n - i - 1` to prevent double-counting the center element.
  - **Time Complexity:** $O(n)$
  - **Space Complexity:** $O(1)$

### 3. Spiral Matrix Traversal ([Spiral_Matrix.cpp](file:///d:/Career/Coding/DSA/DSA/5.%202D%20Array/Spiral_Matrix.cpp))
Traverses an $N \times M$ matrix in clockwise spiral order.
- **Approach:** Tracks four boundary boundaries: `srow` (start row), `erow` (end row), `scol` (start column), `ecol` (end column).
  1. Print top row (`scol` to `ecol`) at `srow`.
  2. Print right column (`srow + 1` to `erow`) at `ecol`.
  3. Print bottom row (`ecol - 1` down to `scol`) at `erow` (guarded by `srow != erow`).
  4. Print left column (`erow - 1` down to `srow + 1`) at `scol` (guarded by `scol != ecol`).
  5. Increment `srow`, `scol` and decrement `erow`, `ecol`.
- **Time Complexity:** $O(n \times m)$
- **Space Complexity:** $O(1)$

---

## Searching in a Sorted Matrix ([Search Matrix](file:///d:/Career/Coding/DSA/DSA/5.%202D%20Array/Search%20Matrix))

Algorithms to search for a target key in a matrix sorted row-wise and column-wise.

### 1. Brute Force Search ([Bruteforce_approach.cpp](file:///d:/Career/Coding/DSA/DSA/5.%202D%20Array/Search%20Matrix/Bruteforce_approach.cpp))
- **Approach:** Scans every element cell by cell using nested loops.
- **Time Complexity:** $O(n \times m)$
- **Space Complexity:** $O(1)$

### 2. Row-by-Row Binary Search ([Binary_search.cpp](file:///d:/Career/Coding/DSA/DSA/5.%202D%20Array/Search%20Matrix/Binary_search.cpp))
- **Approach:** Applies Binary Search on each of the $n$ rows independently.
- **Time Complexity:** $O(n \log m)$
- **Space Complexity:** $O(1)$

### 3. Staircase Search ([Staircase_search.cpp](file:///d:/Career/Coding/DSA/DSA/5.%202D%20Array/Search%20Matrix/Staircase_search.cpp))
- **Approach:** Starts at the top-right cell `(0, m - 1)` (or bottom-left cell `(n - 1, 0)`):
  - If `mat[row][col] == key`: Target found!
  - If `mat[row][col] > key`: Move left (`col--`), as all lower elements in current column are greater.
  - If `mat[row][col] < key`: Move down (`row++`), as all left elements in current row are smaller.
- **Time Complexity:** $O(n + m)$
- **Space Complexity:** $O(1)$

---

## Summary Table

| Problem / Algorithm | Time Complexity | Auxiliary Space | Key Technique | Source File |
| :--- | :--- | :--- | :--- | :--- |
| **2D Array Traversal** | $O(n \times m)$ | $O(1)$ | Row-Major Traversal | [2D_array.cpp](file:///d:/Career/Coding/DSA/DSA/5.%202D%20Array/2D_array.cpp) |
| **Diagonal Sum (Brute Force)** | $O(n^2)$ | $O(1)$ | Nested loops with diagonal checks | [Diagonal_Sum.cpp](file:///d:/Career/Coding/DSA/DSA/5.%202D%20Array/Diagonal_Sum.cpp) |
| **Diagonal Sum (Optimal)** | $O(n)$ | $O(1)$ | Single pass ($i == j$ & $j = n-i-1$) | [Diagonal_Sum.cpp](file:///d:/Career/Coding/DSA/DSA/5.%202D%20Array/Diagonal_Sum.cpp) |
| **Spiral Matrix** | $O(n \times m)$ | $O(1)$ | 4 Boundary shrinking loops | [Spiral_Matrix.cpp](file:///d:/Career/Coding/DSA/DSA/5.%202D%20Array/Spiral_Matrix.cpp) |
| **Search Matrix (Brute Force)** | $O(n \times m)$ | $O(1)$ | Linear Search over 2D grid | [Bruteforce_approach.cpp](file:///d:/Career/Coding/DSA/DSA/5.%202D%20Array/Search%20Matrix/Bruteforce_approach.cpp) |
| **Search Matrix (Binary Search)** | $O(n \log m)$ | $O(1)$ | Binary search applied per row | [Binary_search.cpp](file:///d:/Career/Coding/DSA/DSA/5.%202D%20Array/Search%20Matrix/Binary_search.cpp) |
| **Search Matrix (Staircase Search)** | $O(n + m)$ | $O(1)$ | Top-Right / Bottom-Left traversal | [Staircase_search.cpp](file:///d:/Career/Coding/DSA/DSA/5.%202D%20Array/Search%20Matrix/Staircase_search.cpp) |
