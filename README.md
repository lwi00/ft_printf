# ft_printf

An implementation of the C `printf` function, created as part of a programming project. This project provides custom functionality for formatted output, similar to the standard `printf`.

## Features

- Supports various format specifiers:
  - `%c`: Character
  - `%s`: String
  - `%p`: Pointer
  - `%d`/`%i`: Integer
  - `%u`: Unsigned integer
  - `%x`/`%X`: Hexadecimal (lowercase/uppercase)
  - `%%`: Percent symbol
- Handles basic formatting requirements with optimized performance.

## Files and Structure

- `ft_printf.c`: Contains the main `ft_printf` function.
- `ft_printf.h`: Header file with function declarations and macros.
- `ft_hexptr.c`: Handles hexadecimal and pointer formatting.
- `ft_parsing.c`: Parses the format string and arguments.
- `ft_putnbr.c`: Prints numbers (signed and unsigned).
- `ft_putstr.c`: Handles string output.
- `Makefile`: Automates the build process.

## Getting Started

### Prerequisites
- A C compiler (e.g., `gcc`).
- `make` installed on your system.

### Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/lwi00/ft_printf.git
