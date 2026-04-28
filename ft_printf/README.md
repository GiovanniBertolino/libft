*This project has been created as part of the 42 curriculum by gbertoli.*

# ft_printf

## Description

`ft_printf` is a reimplementation of the standard C `printf` function from scratch, without using any of the original's source code. The goal is to understand how variadic functions work in C and how formatted output is constructed character by character.

The function parses a format string and, upon encountering a `%` specifier, dispatches to the appropriate handler to convert and print the corresponding argument. It returns the total number of characters written, mirroring the behavior of the real `printf`.

| Specifier | Description |
|-----------|-------------|
| `%c` | Print a single character |
| `%s` | Print a string |
| `%p` | Print a pointer address in hexadecimal |
| `%d` | Print a decimal integer |
| `%i` | Print an integer |
| `%u` | Print an unsigned decimal integer |
| `%x` | Print a number in hexadecimal (lowercase) |
| `%X` | Print a number in hexadecimal (uppercase) |
| `%%` | Print a literal percent sign |

---

## Instructions

A `Makefile` is provided with the following rules:

```bash
make        # Build the library (libftprintf.a)
make clean  # Remove object files
make fclean # Remove object files and the library
make re     # Rebuild everything from scratch
```

### Usage as a library

To use `ft_printf` in your own project, compile it and link against the generated static library:

```bash
make
gcc -Wall -Wextra -Werror your_file.c -L. -lftprintf -o your_program
```

Then include the header in your source file:

```c
#include "ft_printf.h"
```

### Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! You are %d years old.\n", "world", 21);
    ft_printf("Pointer: %p\n", (void *)&main);
    ft_printf("Hex: %x / %X\n", 255, 255);
    return (0);
}
```

### Edge cases handled

- `INT_MIN` (`-2147483648`) is printed as a literal string to avoid undefined behavior from negating it.
- A `NULL` string argument prints `(null)`.
- A `NULL` pointer argument prints `(nil)`.
- `0` correctly returns a length of `1` for both decimal and hexadecimal formatters.

## Resources

My main source for the success of this project was :

https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf