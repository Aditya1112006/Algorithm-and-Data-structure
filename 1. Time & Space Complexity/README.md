# Time & Space Complexity

## Time Complexity
Time taken by an algorithm as a function of input size ($n$).

For example: If we have a loop starting from $0$ to $n$ on an array and we print each element, the Time Complexity will be $O(n)$.

## Constant Time Complexity
Where time taken by an algorithm is constant $O(1)$, independent of input size.
For example: Accessing an element inside an array at a specific index (`arr[2]`).

---

## Asymptotic Notations

### 1. Big O Notation (O) - Loose Upper Bound
* Represents the **worst-case** growth rate ($f(n) \le g(n)$).
* Describes the maximum time an algorithm can take.
* **Calculation Rules**:
  * Step 1: Ignore constants (e.g., $3n^2 + 4n + 1 \rightarrow n^2 + n + 1$).
  * Step 2: Remove smaller terms and pick the largest (e.g., $n^2 + n + 1 \rightarrow O(n^2)$).

### 2. Small o Notation (o) - Strict Upper Bound
* Represents a **strict upper bound** ($f(n) < g(n)$).
* Algorithm grows **strictly slower** than the given function.
* Example: $2n = o(n^2)$ is valid, but $2n = o(n)$ is **invalid**.

### 3. Big Omega Notation (Ω) - Loose Lower Bound
* Represents the **best-case** growth rate ($f(n) \ge g(n)$).
* Describes the minimum time an algorithm will take.

### 4. Small Omega Notation (ω) - Strict Lower Bound
* Represents a **strict lower bound** ($f(n) > g(n)$).
* Algorithm grows **strictly faster** than the given function.
* Example: $2n^2 = \omega(n)$ is valid, but $2n^2 = \omega(n^2)$ is **invalid**.

### 5. Big Theta (Θ) / Small Theta (θ) - Tight Bound
* Represents an **exact / tight bound** ($f(n) = g(n)$).
* Bound from both above and below (upper bound = lower bound).
* Example: $2n = \Theta(n)$ or $\theta(n)$.

---

### Quick Comparison Table

| Notation | Bound Type | Relation | Growth Rate | Example ($f(n) = 2n$) |
|---|---|---|---|---|
| **Big O ($O$)** | Loose Upper Bound | $f(n) \le g(n)$ | At most as fast as $g(n)$ | $O(n)$, $O(n^2)$ |
| **Small o ($o$)** | Strict Upper Bound | $f(n) < g(n)$ | Strictly slower than $g(n)$ | $o(n^2)$ |
| **Big Omega ($\Omega$)** | Loose Lower Bound | $f(n) \ge g(n)$ | At least as fast as $g(n)$ | $\Omega(n)$, $\Omega(1)$ |
| **Small Omega ($\omega$)** | Strict Lower Bound | $f(n) > g(n)$ | Strictly faster than $g(n)$ | $\omega(1)$ |
| **Big Theta ($\Theta$) / Small Theta ($\theta$)** | Tight Bound | $f(n) = g(n)$ | Exact same rate as $g(n)$ | $\Theta(n)$ / $\theta(n)$ |

---

## Master Theorem for Recurrences

The **Master Theorem** provides a direct way to solve recurrence relations of the form used in divide-and-conquer algorithms:

$$T(n) = a T\left(\frac{n}{b}\right) + f(n)$$

Where:
* $n$ = size of the problem.
* $a \ge 1$ = number of subproblems in the recursion.
* $b > 1$ = factor by which the subproblem size is divided.
* $f(n)$ = cost of work done outside recursive calls (dividing and combining step).

### Formula / Cases

We compare $f(n)$ with $n^{\log_b a}$:

1. **Case 1: $f(n) = O(n^{\log_b a - \epsilon})$** (for some constant $\epsilon > 0$)
   * **Condition**: Work done at leaves dominates.
   * **Result**: $T(n) = \Theta(n^{\log_b a})$

2. **Case 2: $f(n) = \Theta(n^{\log_b a} \cdot \log^k n)$** (for $k \ge 0$)
   * **Condition**: Work is evenly distributed across levels.
   * **Result**: $T(n) = \Theta(n^{\log_b a} \cdot \log^{k+1} n)$
   * *(Note: When $k = 0$, $f(n) = \Theta(n^{\log_b a})$, so $T(n) = \Theta(n^{\log_b a} \log n)$)*

3. **Case 3: $f(n) = \Omega(n^{\log_b a + \epsilon})$** (for some constant $\epsilon > 0$)
   * **Condition**: Work done at root dominates, provided regularity condition holds ($a f(n/b) \le c f(n)$ for $c < 1$).
   * **Result**: $T(n) = \Theta(f(n))$

---

### Examples

* **Merge Sort**: $T(n) = 2T(n/2) + \Theta(n)$
  * $a = 2, b = 2, f(n) = n$
  * $n^{\log_b a} = n^{\log_2 2} = n^1 = n$
  * Since $f(n) = \Theta(n)$, it falls in **Case 2** ($k=0$) $\rightarrow \mathbf{T(n) = \Theta(n \log n)}$

* **Binary Search**: $T(n) = T(n/2) + \Theta(1)$
  * $a = 1, b = 2, f(n) = 1$
  * $n^{\log_b a} = n^{\log_2 1} = n^0 = 1$
  * Since $f(n) = \Theta(1)$, it falls in **Case 2** ($k=0$) $\rightarrow \mathbf{T(n) = \Theta(\log n)}$

* **Strassen's Matrix Multiplication**: $T(n) = 7T(n/2) + \Theta(n^2)$
  * $a = 7, b = 2, f(n) = n^2$
  * $n^{\log_b a} = n^{\log_2 7} \approx n^{2.807}$
  * Since $f(n) = O(n^{2.807 - \epsilon})$, it falls in **Case 1** $\rightarrow \mathbf{T(n) = \Theta(n^{\log_2 7})}$

---

## Space Complexity
Amount of memory space taken by an algorithm as a function of input size ($n$).

* **Auxiliary Space**: Extra space or temporary space used by the algorithm.
* **Total Space Complexity**: Auxiliary space + Input space.
* Example: Declaring a single variable takes $O(1)$ space, while creating an array of size $n$ takes $O(n)$ space.

---

### Common Time complexity
* O(1) :- Also known as Constant Time complexity.
* O(logn) :- Also known as Logarithmic Time complexity
* O(n) :- Also known as Linear Time complexity.
* O(n^2) :- Also known as Qudratic Time complexity.
* O(2^n) :- Also known as exponential Time complexity.

