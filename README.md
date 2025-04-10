# Holberton School Sorting Algorithms

This project contains implementations of various sorting algorithms as part of the Holberton School curriculum. The goal is to understand how different sorting algorithms work, their time and space complexity, and when to use each one.

## Description

In this project, we implement the following sorting algorithms:
- Bubble Sort
- Insertion Sort
- Selection Sort
- Quick Sort

Each algorithm is implemented in C, with a focus on proper memory management, efficiency, and documentation.

## Files

| File | Description |
| --- | --- |
| `0-bubble_sort.c` | Implementation of the Bubble Sort algorithm |
| `0-O` | Big O notations for Bubble Sort (best, average, worst cases) |
| `1-insertion_sort_list.c` | Implementation of the Insertion Sort algorithm for doubly linked lists |
| `1-O` | Big O notations for Insertion Sort |
| `2-selection_sort.c` | Implementation of the Selection Sort algorithm |
| `2-O` | Big O notations for Selection Sort |
| `3-quick_sort.c` | Implementation of the Quick Sort algorithm |
| `3-O` | Big O notations for Quick Sort |
| `sort.h` | Header file with all function prototypes and data structures |

## Requirements

- All files are compiled on Ubuntu 20.04 LTS
- Programs and functions are compiled with gcc using the options -Wall -Werror -Wextra -pedantic
- All functions have documentation
- Code uses the Betty style

## Usage

To compile the programs:

```bash
gcc -Wall -Wextra -Werror -pedantic <main_file.c> <algorithm_file.c> print_array.c print_list.c -o <output_file>
