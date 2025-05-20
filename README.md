# 🖨️ ft_printf

> A custom implementation of the `printf` function in C. Project for 1337 curriculum.

## 📌 Description

The **ft_printf** project consists of recreating the standard C library function `printf`. It supports conversion specifiers, flags, width, precision, and length modifiers to format and print data to standard output.

## ⚙️ Function Prototype

```c
int ft_printf(const char *format, ...);
```

- Returns the number of characters printed (excluding the null byte).
- Supports the following conversion specifiers:  
  `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`.

## 📁 File Structure

```
ft_printf/
├── ft_printf.c
├── ft_printf_utils.c
├── ft_printf.h
├── main.c          # For testing (optional)
├── Makefile
└── README.md
```

## 🧪 Usage Example

```c
#include "ft_printf.h"

int main(void)
{
    int count;

    count = ft_printf("Hello %s! Number: %d\n", "world", 42);
    ft_printf("Printed %d characters.\n", count);
    return 0;
}
```

## 🔧 Compilation

```bash
make
gcc -Wall -Wextra -Werror ft_printf.c ft_printf_utils.c main.c
./a.out
```

## ✅ Features

- Supports multiple conversion specifiers.
- Handles flags like `-`, `0`, `.` (precision), and width.
- Prints formatted output to standard output.
- Memory-safe, with no leaks.
- Norm-compliant for 1337.

## 👨‍💻 Author

- GitHub: [OB4413](https://github.com/OB4413)
