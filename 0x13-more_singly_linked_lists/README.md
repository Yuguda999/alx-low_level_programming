# C Functions for Manipulating a listint_t Linked List

This repository contains a set of C functions for manipulating a singly-linked list of integers (`listint_t`). The functions include:

1. `print_listint` - Prints all elements of a `listint_t` list.
2. `listint_len` - Returns the number of elements in a `listint_t` list.
3. `add_nodeint` - Adds a new node at the beginning of a `listint_t` list.
4. `add_nodeint_end` - Adds a new node at the end of a `listint_t` list.
5. `free_listint` - Frees a `listint_t` list.
6. `free_listint2` - Frees a `listint_t` list and sets the head to NULL.
7. `pop_listint` - Deletes the head node of a `listint_t` list and returns its data.
8. `get_nodeint_at_index` - Returns the nth node of a `listint_t` list.
9. `sum_listint` - Returns the sum of all data (n) in a `listint_t` list.
10. `insert_nodeint_at_index` - Inserts a new node at a specified index in a `listint_t` list.
11. `delete_nodeint_at_index` - Deletes a node at a specified index in a `listint_t` list.

Each function is thoroughly documented and formatted following the Betty coding style guidelines. You can find the implementation details and usage examples in the corresponding C source files.

## How to Use

1. Clone this repository to your local machine:

   ```
   git clone https://github.com/yourusername/your-repo-name.git
   ```

2. Navigate to the repository's directory:

   ```
   cd your-repo-name
   ```

3. Compile the C files with your preferred compiler (e.g., `gcc`):

   ```
   gcc -Wall -Werror -Wextra -pedantic *.c -o list_functions
   ```

4. Run the compiled program:

   ```
   ./list_functions
   ```

You can also include the header file `lists.h` in your own C projects and use these functions as  eeded
