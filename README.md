# CSES Problem Set Solutions 📚

This repository contains my personal solutions to the full **[CSES Problem Set](https://cses.fi/problemset/list/)**, neatly organised by topic.  
The aim is to keep every solution easy to browse, well-documented, and ready to compile/run offline when practising for contests.

---

## 📂 Directory Overview

| Category | Quick Link | Typical Techniques |
| -------- | --------- | ------------------ |
| Introductory Problems | [`introductory-problems/`](introductory-problems/) | brute force, prefix sums |
| Sorting and Searching | [`sorting-and-searching/`](sorting-and-searching/) | binary search, two-pointers, greedy |
| Dynamic Programming | [`dynamic-programming/`](dynamic-programming/) | 1-D & 2-D DP, state optimisation |
| Graph Algorithms | [`graph-algorithms/`](graph-algorithms/) | BFS/DFS, Dijkstra, SCC, MST |
| Advanced Graph Problems | [`advanced-graph-problems/`](advanced-graph-problems/) | flow, matching, cycle detection |
| Tree Algorithms | [`tree-algorithms/`](tree-algorithms/) | Euler tour, LCA, heavy-light |
| Range Queries | [`range-queries/`](range-queries/) | Fenwick, segment tree, sparse table |
| Geometry | [`geometry/`](geometry/) | line sweep, orientation tests |
| Mathematics | [`mathematics/`](mathematics/) | modular arith., combinatorics |
| Bitwise Operations | [`bitwise-operations/`](bitwise-operations/) | bit DP, masks |
| String Algorithms | [`string-algorithms/`](string-algorithms/) | KMP, Z-function, suffix array |
| Sliding-Window Problems | [`sliding-window-problems/`](sliding-window-problems/) | deque optimisation |
| Construction Problems | [`construction-problems/`](construction-problems/) | explicit output building |
| Counting Problems | [`counting-problems/`](counting-problems/) | inclusion–exclusion, DP |
| Interactive Problems | [`interactive-problems/`](interactive-problems/) | interactive I/O patterns |
| Advanced Techniques | [`advanced-techniques/`](advanced-techniques/) | Mo’s algo, divide & conquer DP |
| Additional Problems Ⅰ | [`additional_problems_1/`](additional_problems_1/) | extra tasks outside the main list |
| Additional Problems Ⅱ | [`additional_problems_2/`](additional_problems_2/) | more extras & experiments |

Feel free to explore any folder to see individual problems and their explanations.

---

## ⏩ Quick Links

> **Shortcut:** paste the following in the VS Code command palette (`⌘/Ctrl + P`) to open a category directly:  
> `./<folder-name>` &nbsp;→ e.g. `./dynamic-programming`

---

## 🛠 How to Run

```bash
# Example for C++ solutions
g++ -std=c++20 -O2 -Wall path/to/solution.cpp -o solution
./solution < input.txt