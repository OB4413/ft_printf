# 📟 ft_printf

> A custom implementation of the standard C `printf` function. Built as part of the 1337 School core curriculum.

## 📌 Description

The **ft_printf** project replicates the behavior of the standard C `printf` function, handling formatted output for different data types. The goal is to understand variadic functions and format string parsing without using the original `printf`.

## ✅ Supported Conversions

| Specifier | Description             |
|----------:|-------------------------|
| `%c`      | Character               |
| `%s`      | String                  |
| `%p`      | Pointer address         |
| `%d`      | Signed decimal integer  |
| `%i`      | Signed decimal integer  |
| `%u`      | Unsigned decimal        |
| `%x`      | Lowercase hexadecimal   |
| `%X`      | Uppercase hexadecimal   |
| `%%`      | Print a literal `%`     |

## 🧠 What I Learned

- Variadic functions using `stdarg.h`
- Manual parsing of format strings
- Type casting and handling edge cases
- Creating modular and reusable utility functions

## 🗂️ Project Structure


## 🚀 How to Use

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, the number is %d\n", "world", 42);
    return (0);
}
make
gcc -Wall -Wextra -Werror main.c libftprintf.a
ft_printf("Char: %c\n", 'A');
ft_printf("String: %s\n", "1337");
ft_printf("Pointer: %p\n", ptr);
ft_printf("Decimal: %d\n", 1234);
ft_printf("Hex: %x\n", 255);
