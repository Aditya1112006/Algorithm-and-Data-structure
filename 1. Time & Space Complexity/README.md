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

## Space Complexity
Amount of memory space taken by an algorithm as a function of input size ($n$).

* **Auxiliary Space**: Extra space or temporary space used by the algorithm.
* **Total Space Complexity**: Auxiliary space + Input space.
* Example: Declaring a single variable takes $O(1)$ space, while creating an array of size $n$ takes $O(n)$ space.