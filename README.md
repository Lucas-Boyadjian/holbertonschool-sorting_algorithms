# Holberton School Sorting Algorithms

This repository contains C implementations of various sorting algorithms as part of the Holberton School curriculum. The objective is to understand how different sorting algorithms work, analyze their time and space complexity, and learn when to use each one.

## Table of Contents

- [Description](#description)
- [Implemented Algorithms](#implemented-algorithms)
- [File Structure](#file-structure)
- [Requirements](#requirements)
- [Usage](#usage)
- [Data Structures](#data-structures)
- [Authors](#authors)
- [License](#license)

## Description

This project explores and implements several classic sorting algorithms. Each algorithm is written in C, with a focus on memory management, efficiency, and code documentation. The project also includes complexity analysis for each algorithm.

## Implemented Algorithms

- Bubble Sort
- Insertion Sort (for arrays and doubly linked lists)
- Selection Sort
- Quick Sort

## File Structure

| File                      | Description                                               |
|---------------------------|-----------------------------------------------------------|
| `0-bubble_sort.c`         | Bubble Sort algorithm implementation                      |
| `0-O`                     | Big O notations for Bubble Sort (best, average, worst)    |
| `1-insertion_sort_list.c` | Insertion Sort for doubly linked lists                    |
| `1-O`                     | Big O notations for Insertion Sort                       |
| `2-selection_sort.c`      | Selection Sort algorithm implementation                   |
| `2-O`                     | Big O notations for Selection Sort                       |
| `3-quick_sort.c`          | Quick Sort algorithm implementation                       |
| `3-O`                     | Big O notations for Quick Sort                           |
| `sort.h`                  | Header file with function prototypes and data structures  |
| `print_array.c`           | Utility to print arrays                                   |
| `print_list.c`            | Utility to print doubly linked lists                      |
| `README.md`               | Project documentation                                     |

## Requirements

- Ubuntu 20.04 LTS
- GCC compiler with the following flags: `-Wall -Werror -Wextra -pedantic`
- Code follows the Betty coding style
- All functions are documented

## Usage

To compile and run a sorting algorithm, use the following command:

```bash
gcc -Wall -Wextra -Werror -pedantic <main_file.c> <algorithm_file.c> print_array.c print_list.c -o <output_file>
```

Example for Bubble Sort:

```bash
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-bubble_sort.c print_array.c -o bubble
./bubble
```

## Data Structures

```c
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

## Author

Lucas - Holberton School Student