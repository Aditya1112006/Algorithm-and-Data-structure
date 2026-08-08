# Array

An **Array** is a linear data structure that stores a collection of elements of the same data type in contiguous memory locations.

---

## Key Characteristics

- **Fixed Size:** Array size is fixed at declaration time (for static array allocation).
- **Contiguous Memory:** Elements are stored in consecutive memory locations.
- **Random Access:** Direct access to any element using zero-based indexing (`arr[i]`) in $O(1)$ time.
- **Homogeneous Data:** All elements in an array are of the exact same data type.

---

## Core Concepts

### 1. Basic Declaration, Input & Output
- Elements can be read and printed using loops by iterating over valid indices $0$ to $n-1$.
- **Time Complexity:** $O(n)$ for traversing $n$ elements.
- **Space Complexity:** $O(1)$ auxiliary space.

### 2. Pass by Reference (Arrays in Functions)
- When an array is passed to a function, it **decays into a pointer** to its first element (base address).
- Changes made to array elements inside a function directly affect the original array.
- **Finding Array Length in Caller Function:**
  $$\text{Length } (n) = \frac{\text{sizeof}(arr)}{\text{sizeof}(arr[0])}$$

---

## Operations & Algorithms

### 1. Finding the Largest Element
Finds the maximum value in an array by scanning through elements.
- **Approach:** Initialize `max = arr[0]` and iterate through the array, updating `max` whenever `arr[i] > max`.
- **Time Complexity:** $O(n)$
- **Space Complexity:** $O(1)$

### 2. Linear Search
Searches for a target `key` by checking each element sequentially from start to end.
- **Time Complexity:** $O(n)$
- **Space Complexity:** $O(1)$

### 3. Binary Search
An efficient search algorithm for **sorted arrays** using the Divide and Conquer strategy.
- **Approach:**
  1. Initialize `start = 0` and `end = n - 1`.
  2. Compute `mid = start + (end - start) / 2` (prevents integer overflow).
  3. If `arr[mid] == key`, target is found at `mid`.
  4. If `arr[mid] > key`, search the left sub-array (`end = mid - 1`).
  5. If `arr[mid] < key`, search the right sub-array (`start = mid + 1`).
- **Time Complexity:** $O(\log n)$
- **Space Complexity:** $O(1)$

### 4. Reversing an Array
Reverses the sequence of elements in an array.

* **Approach 1: Using Extra Space**
  - Uses an auxiliary array of size $n$ to store elements in reverse order and copy back.
  - **Time Complexity:** $O(n)$
  - **Space Complexity:** $O(n)$

* **Approach 2: Two-Pointer Technique (In-Place)**
  - Uses two pointers (`start` at index $0$ and `end` at index $n-1$).
  - Swaps `arr[start]` and `arr[end]`, then increments `start` and decrements `end` until `start >= end`.
  - **Time Complexity:** $O(n)$
  - **Space Complexity:** $O(1)$

---

## Summary Table

| Operation / Algorithm | Time Complexity | Auxiliary Space | Technique / Key Feature |
| :--- | :--- | :--- | :--- |
| **Element Access** | $O(1)$ | $O(1)$ | Direct Indexing (`arr[i]`) |
| **Traversal / I/O** | $O(n)$ | $O(1)$ | Loop Iteration |
| **Largest Element** | $O(n)$ | $O(1)$ | Single Pass Scan |
| **Linear Search** | $O(n)$ | $O(1)$ | Sequential Search |
| **Binary Search** | $O(\log n)$ | $O(1)$ | Divide & Conquer (Requires Sorted Array) |
| **Array Reversal (Aux Array)** | $O(n)$ | $O(n)$ | Out-of-place Extra Array |
| **Array Reversal (Two Pointer)**| $O(n)$ | $O(1)$ | In-place Swapping |
