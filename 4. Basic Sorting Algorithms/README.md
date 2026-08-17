# Basic Sorting Algorithms

Collection of basic sorting algorithm implementations in C++.

---

## 1. Bubble Sort ([Bubble_sort.cpp](file:///d:/Career/Coding/DSA/DSA/4.%20Basic%20Sorting%20Algorithms/Bubble_sort.cpp))
- **Description:** Repeatedly compares adjacent elements and swaps them if they are out of order. Includes an `isSwap` optimization to stop early if the array is already sorted.
- **Time Complexity:**
  - Best Case: $O(n)$ (already sorted)
  - Worst / Average Case: $O(n^2)$
- **Space Complexity:** $O(1)$ (In-place)

---

## 2. Selection Sort ([Selection_sort.cpp](file:///d:/Career/Coding/DSA/DSA/4.%20Basic%20Sorting%20Algorithms/Selection_sort.cpp))
- **Description:** Repeatedly finds the minimum element from the unsorted part of the array and puts it at the beginning.
- **Time Complexity:**
  - Best / Worst / Average Case: $O(n^2)$
- **Space Complexity:** $O(1)$ (In-place)

---

## 3. Insertion Sort ([Insertion_sort.cpp](file:///d:/Career/Coding/DSA/DSA/4.%20Basic%20Sorting%20Algorithms/Insertion_sort.cpp))
- **Description:** Takes an element from the unsorted section and inserts it into its correct position within the sorted section.
- **Time Complexity:**
  - Best Case: $O(n)$ (already sorted)
  - Worst / Average Case: $O(n^2)$
- **Space Complexity:** $O(1)$ (In-place)

---

## 4. Counting Sort ([Counting_sort.cpp](file:///d:/Career/Coding/DSA/DSA/4.%20Basic%20Sorting%20Algorithms/Counting_sort.cpp))
- **Description:** A non-comparison based algorithm that counts the frequency of each element in a given range and reconstructs the sorted array.
- **Time Complexity:** $O(n + K)$, where $n$ is the number of elements and $K$ is the range of input values.
- **Space Complexity:** $O(K)$ auxiliary space (for frequency array)

---

## Complexity Summary Table

| Algorithm | Best Case | Average Case | Worst Case | Space Complexity |
| :--- | :--- | :--- | :--- | :--- |
| **Bubble Sort** | $O(n)$ | $O(n^2)$ | $O(n^2)$ | $O(1)$ |
| **Selection Sort** | $O(n^2)$ | $O(n^2)$ | $O(n^2)$ | $O(1)$ |
| **Insertion Sort** | $O(n)$ | $O(n^2)$ | $O(n^2)$ | $O(1)$ |
| **Counting Sort** | $O(n + K)$ | $O(n + K)$ | $O(n + K)$ | $O(K)$ |
