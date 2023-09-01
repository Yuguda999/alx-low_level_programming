# libmy - Custom C Static Library

## Description

`libmy` is a custom C static library containing various utility functions that can be used in C programs. These functions provide common operations such as string manipulation, character checks, and more.

## Table of Contents

- [Getting Started](#getting-started)
- [Usage](#usage)
- [Functions](#functions)
- [Contributing](#contributing)
- [License](#license)

## Getting Started

To use `libmy` in your C programs, follow these steps:

1. Clone or download the repository to your local machine.
2. Link your C program with `libmy.a` during the compilation process.
3. Include the necessary header files in your C program.

## Usage

Here's an example of how to compile and use `libmy` in your C program:

```bash
gcc -o my_program my_program.c -L/path/to/libmy -lmy
