# ⚡ C++ Core Optimization & Logic

My collection of C++ solutions built to run as fast as possible. I focus on smart math shortcuts, mastering how recursive functions use computer memory behind the scenes, and writing clean code that doesn't waste system resources.

## 📂 Repository Structure & Challenges Map

This repository is organized cleanly by logical categories. Below is the layout of the challenges solved so far:

### 1. 📂 functions / recursion+state_variables
Deep dive into structural recursion patterns, tracking values across memory call stacks using parameters and state tracking:
*   **`gcd.cpp` & `lcm.cpp`:** Efficient Euclidean algorithms for greatest common divisor and least common multiple.
*   **`count_digits.cpp` & `sum_of_digits.cpp`:** Recursive digit isolation and computational arithmetic.
*   **`dec_to_binary.cpp` & `dec_to_octal.cpp`:** Recursive base conversion layouts.
*   **`collaz_seq.cpp` & `fibonacci_seq.cpp`:** Simulating complex mathematical series progressions.
*   **`factorial.cpp`, `power.cpp`, `reverse.cpp`, `palindrome.cpp`:** Core mathematical recursive foundations.

### 2. 📂 functions / recursive_strings
*   **`length.cpp`:** Tracking string sizing and indexing boundaries utilizing raw pointer drift tracking (`str + 1`).

### 3. 📂 functions / number_theory_logic
Optimized algorithmic logic and checks for advanced number theory properties and positional numeric properties:
*   **`prime_no.cpp` & `checkfactor.cpp`:** Fast factor searching and primality testing.
*   **`goldbach_pair.cpp`:** Finding prime combinations based on Goldbach's conjecture.
*   **`duck_number.cpp` & `special_number.cpp`:** Positional digit logic parsing.
*   **`1.cpp`, `2.cpp`, `3.cpp`, `concept.cpp`:** Structural logical logic challenges.

---

## 📊 Core Performance Metrics Tracking

Every solution uploaded to this repository is analyzed for structural efficiency:

| Category | Challenge | Key Concept Applied | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- | :--- |
| Recursion | String Length | Pointer Drift Tracking | $O(N)$ | $O(N)$ stack space |
| Mathematics | GCD | Euclidean Progression | $O(\log(\min(a, b)))$ | $O(1)$ loop / $O(\log N)$ recursive |
| Number Theory | Primality Test | $\sqrt{N}$ Boundary Limit Check | $O(\sqrt{N})$ | $O(1)$ |

---
*Part of a long-term dedicated roadmap to high-performance systems and algorithm mastery.*