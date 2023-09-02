# argc, argv Project

This project includes C programs that demonstrate the use of `argc` and `argv`, command-line arguments, and basic argument parsing. Each program serves a specific purpose and is documented below.

## Table of Contents
1. [What's My Name](#whats-my-name)
2. [Silence is Argument Carried Out by Other Means](#silence-is-argument-carried-out-by-other-means)
3. [The Best Argument Against Democracy](#the-best-argument-against-democracy)
4. [Neither Irony Nor Sarcasm is Argument](#neither-irony-nor-sarcasm-is-argument)
5. [To Infinity and Beyond](#to-infinity-and-beyond)

## What's My Name

### Description
This program prints the name of the executable, allowing it to work with any program name. Even after renaming the executable, it will print the new name without requiring recompilation.

### Usage
Compile and run the program as follows:gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis ./mynameis## Silence is Argument Carried Out by Other Means

### Description
This program prints the number of arguments passed to it via the command line.

### Usage
Compile and run the program as follows:gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs ./nargs ./nargs hello ./nargs "hello, world" ./nargs hello, world## The Best Argument Against Democracy

### Description
This program prints all the arguments it receives, one argument per line, ending with a new line.

### Usage
Compile and run the program as follows:gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args ./args ./args "You can do anything, but not everything."## Neither Irony Nor Sarcasm is Argument

### Description
This program multiplies two numbers and prints the result followed by a new line. It handles positive and negative numbers and returns an error if it does not receive exactly two arguments.

### Usage
Compile and run the program as follows:gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul ./mul 2 3 ./mul 2 -3 ./mul 2 0 ./mul 245 3245342 ./mul## To Infinity and Beyond

### Description
This program adds positive numbers and prints the result followed by a new line. It handles various scenarios, such as adding multiple positive numbers, handling non-digit characters, and returning 0 when no arguments are provided.

### Usage
Compile and run the program as follows:gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add ./add 1 1 ./add 1 10 100 1000 ./add 1 2 3 e 4 5 ./add## Author
These programs were authored by Yuguda Muhammed.
