0x0F: Variadic Functions

0-sum_them_all.c: returns sum of all function arguments.
	-first argument is number of variadic arguments.

	Example: sum_them_all(2, 98, 1024) returns 1122.

1-print_numbers.c: prints each input integer argument, each followed by a separator.  
	- last number printed is followed by a new line. 
	- first argument is separator of choice
	- second argument is number of arguments.

	Example: print_numbers(", ", 4, 5, 6, 12, -1028) prints "5, 6, 12, -1028"

2-print_strings.c: Prints each input string argument followed by a separator to stdout.
	- ends with a newline.
	- first argument is can be any type of separator
	- second argument is number of arguments.

	Example: print_strings(", ", 3, "Tim", "Steve", "Dave") prints "Tim, Steve, Dave"

3-print_all.c: Prints any input followed by a new line.
	- first argument is a list of argument types:
	  		c (char), i (integer), f (float), s (string)
	- ignores input not of types above

	Example: print_all("ceis", 'T', 1, "mothy") prints "T1mothy"

100-hello_holberton.asm: A 64-bit program written in assembly that uses a syscall to write "Hello Holberton" followed by a new line to the standard output.
		- compiled with nasm (in elf64 format) and gcc.