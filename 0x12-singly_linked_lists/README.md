# Singly linked lists

This repository contains C functions and a 64-bit assembly program, each demonstrating specific functionalities.

## C Functions

### `print_list`

- Prototype: `size_t print_list(const list_t *h);`
- Description: Prints all elements of a `list_t` list, including handling `NULL` strings.
- Implementation adheres to the Betty coding style and uses correct indentation.

### `list_len`

- Prototype: `size_t list_len(const list_t *h);`
- Description: Returns the number of elements in a `list_t` list.
- Implementation follows the Betty coding style and uses proper indentation.

### `add_node`

- Prototype: `list_t *add_node(list_t **head, const char *str);`
- Description: Adds a new node at the beginning of a `list_t` list, duplicating the input string.
- Code follows the Betty coding style and uses tabs for indentation.

### `add_node_end`

- Prototype: `list_t *add_node_end(list_t **head, const char *str);`
- Description: Adds a new node at the end of a `list_t` list, duplicating the input string.
- Implementation adheres to the Betty coding style with proper indentation.

### `free_list`

- Prototype: `void free_list(list_t *head);`
- Description: Frees memory used by a `list_t` list, including string duplication.
- Code follows the Betty coding style and uses tabs for indentation.

## Assembly Program

The 64-bit assembly program prints "Hello, Holberton" followed by a new line using the `printf` function. It adheres to the provided guidelines:

- No interrupts are used.
- The program is compatible with `nasm` and `gcc`.
m
