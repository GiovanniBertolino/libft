# Libft — Custom C Library

> A reimplementation of essential C standard library functions, built from scratch as part of the **42 School** curriculum.

---

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Project Structure](#project-structure)
- [Installation](#installation)
- [Function Reference](#function-reference)
  - [Character Functions](#character-functions)
  - [String Functions](#string-functions)
  - [Memory Functions](#memory-functions)
  - [Conversion Functions](#conversion-functions)
  - [File Descriptor Functions](#file-descriptor-functions)
  - [Linked List Functions (Bonus)](#linked-list-functions-bonus)
- [Compilation](#compilation)
- [Testing](#testing)
- [Requirements](#requirements)
- [Author](#author)

---

## Overview

**Libft** is a custom C library created as part of the 42 School curriculum. The goal is to reimplement fundamental C library functions from scratch — gaining a deep understanding of how they work at a low level, while building a reusable foundation for future 42 projects.

---

## Features

50+ functions organized across several categories:

- ✅ **Character validation** — `isalpha`, `isdigit`, `isalnum`, etc.
- ✅ **String manipulation** — `strlen`, `strcpy`, `strjoin`, `split`, etc.
- ✅ **Memory management** — `memset`, `memcpy`, `calloc`, etc.
- ✅ **File descriptor output** — `putchar_fd`, `putstr_fd`, etc.
- ✅ **Conversion utilities** — `atoi`, `itoa`
- ✅ **Linked list operations** *(bonus)*

---

## Project Structure

```
libft/
├── Makefile
├── libft.h
├── ft_is*.c         # Character validation
├── ft_str*.c        # String manipulation
├── ft_mem*.c        # Memory functions
├── ft_put*_fd.c     # File descriptor output
├── ft_atoi.c
├── ft_itoa.c
├── ft_split.c
└── ft_lst*.c        # Linked list (bonus)
```

---

## Installation

**Prerequisites:** GCC, Make, Unix-like OS (Linux or macOS)

```bash
# Clone the repository
git clone https://github.com/gbertoli/libft_42.git
cd libft_42

# Compile the library
make

# Compile with bonus (linked list) functions
make bonus
```

This produces a `libft.a` static library file ready to link against your projects.

---

## Function Reference

### Character Functions

| Function | Description |
|---|---|
| `ft_isalpha` | Check if character is alphabetic |
| `ft_isdigit` | Check if character is a digit |
| `ft_isalnum` | Check if character is alphanumeric |
| `ft_isascii` | Check if character is ASCII |
| `ft_isprint` | Check if character is printable |
| `ft_toupper` | Convert character to uppercase |
| `ft_tolower` | Convert character to lowercase |

### String Functions

| Function | Description |
|---|---|
| `ft_strlen` | Calculate string length |
| `ft_strlcpy` | Safe string copy |
| `ft_strlcat` | Safe string concatenation |
| `ft_strchr` | Find first occurrence of character |
| `ft_strrchr` | Find last occurrence of character |
| `ft_strncmp` | Compare strings up to n characters |
| `ft_strnstr` | Find a substring in a string |
| `ft_strdup` | Duplicate a string |
| `ft_substr` | Extract a substring |
| `ft_strjoin` | Join two strings |
| `ft_strtrim` | Trim characters from both ends |
| `ft_split` | Split string by delimiter |
| `ft_strmapi` | Apply function to each character |
| `ft_striteri` | Apply function to each character with index |

### Memory Functions

| Function | Description |
|---|---|
| `ft_memset` | Fill memory with a byte value |
| `ft_bzero` | Zero out a memory area |
| `ft_memcpy` | Copy memory area |
| `ft_memmove` | Move memory area (handles overlap) |
| `ft_memchr` | Find a byte in memory |
| `ft_memcmp` | Compare two memory areas |
| `ft_calloc` | Allocate and zero-initialize memory |

### Conversion Functions

| Function | Description |
|---|---|
| `ft_atoi` | Convert string to integer |
| `ft_itoa` | Convert integer to string |

### File Descriptor Functions

| Function | Description |
|---|---|
| `ft_putchar_fd` | Output a character to a file descriptor |
| `ft_putstr_fd` | Output a string to a file descriptor |
| `ft_putendl_fd` | Output a string + newline to a file descriptor |
| `ft_putnbr_fd` | Output an integer to a file descriptor |

### Linked List Functions (Bonus)

| Function | Description |
|---|---|
| `ft_lstnew` | Create a new list element |
| `ft_lstadd_front` | Add element at the front of the list |
| `ft_lstadd_back` | Add element at the back of the list |
| `ft_lstsize` | Count the number of elements |
| `ft_lstlast` | Get the last element |
| `ft_lstdelone` | Delete a single element |
| `ft_lstclear` | Delete the entire list |
| `ft_lstiter` | Apply a function to each element |
| `ft_lstmap` | Create a new list by applying a function |

---

## Compilation

```bash
make          # Compile the library → libft.a
make bonus    # Include linked list functions
make clean    # Remove object files
make fclean   # Remove object files + libft.a
make re       # fclean + make
```

**Compilation flags used:**

```
-Wall -Wextra -Werror
```

**Linking against your project:**

```bash
gcc main.c -L. -lft -o my_program
```

---

## Testing

You can use community-built testers to validate the library:

- [libft-unit-test](https://github.com/alelievr/libft-unit-test)
- [Tripouille/libftTester](https://github.com/Tripouille/libftTester)
- [francinette](https://github.com/xicodomingues/francinette)

---

## Requirements

| Requirement | Details |
|---|---|
| Compiler | GCC or Clang |
| OS | Unix-like (Linux, macOS) |
| Build tool | Make |
| C Standard | C99 or later |

---

## Author

**gbertoli** — 42 Nice Student

📧 [gbertoli@student.42nice.fr](mailto:gbertoli@student.42nice.fr)

---

> *This project is part of the 42 School curriculum. Created for educational purposes to solidify understanding of C fundamentals.*