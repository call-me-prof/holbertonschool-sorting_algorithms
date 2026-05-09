# C - Sorting Algorithms & Big O


## Description

This repository contains implementations of several sorting algorithms in C programming language as part of the Holberton School curriculum.

The purpose of this project is to understand how sorting algorithms work internally, how to manipulate arrays and linked lists efficiently, and how to analyze algorithm performance using Big O notation.

-----------------------------------------------------------------

## Learning Objectives

At the end of this project, you should be able to explain:

- At least four different sorting algorithms
- What is the Big O notation
- The time complexity of an algorithm
- How to select the best sorting algorithm for a specific problem
- The difference between stable and unstable sorting algorithms

----------------------------------------------------------------

## Requirements

- Ubuntu 
- GCC Compiler
- Betty coding style

Allowed editors:

- `vi`
- `vim`
- `emacs`

Compilation:

```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o sort
```
## Project Files

| File | Description |
| --- | --- |
| `sort.h` | Header file containing all function prototypes |
| `print_array.c` | Function that prints arrays |
| `print_list.c` | Function that prints doubly linked lists |
| `0-bubble_sort.c` | Bubble sort algorithm |
| `1-insertion_sort_list.c` | Insertion sort for doubly linked list |
| `2-selection_sort.c` | Selection sort algorithm |
| `3-quick_sort.c` | Quick sort algorithm |

Implemented Algorithms

Bubble Sort

Bubble Sort repeatedly swaps adjacent elements if they are in the wrong order.

Complexity:

* Best Case: O(n)
* Average Case: O(n²)
* Worst Case: O(n²)

⸻----------------------------------------------------------------


Insertion Sort

Insertion Sort builds the final sorted array one item at a time.

Complexity:

* Best Case: O(n)
* Average Case: O(n²)
* Worst Case: O(n²)

⸻----------------------------------------------------------------


Selection Sort

Selection Sort repeatedly selects the minimum element and places it at the beginning.

Complexity:

* Best Case: O(n²)
* Average Case: O(n²)
* Worst Case: O(n²)

⸻----------------------------------------------------------------


Quick Sort

Quick Sort uses divide-and-conquer strategy with a pivot element.

Complexity:

* Best Case: O(n log n)
* Average Case: O(n log n)
* Worst Case: O(n²)

⸻----------------------------------------------------------------


Example Usage

Compile Bubble Sort: 
```bash
 gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c print_array.c main.c -o bubble 
```
Run: 
```bash
./bubble
```
Project Structure
```bash
holbertonschool-sorting_algorithms/
│
├── 0-0
├── 0-bubble_sort.c
├── 1-0
├── 1-insertion_sort_list.c
├── 2-0
├── 2-selection_sort.c
├── 3-0
├── 3-quick_sort.c
├── print_array.c
├── print_list.c
├── README.md
└── sort.h
```
Authors

* Faisal Alshahrani - (call-me-prof)
* Saad Alatar - (SaadTAr)
