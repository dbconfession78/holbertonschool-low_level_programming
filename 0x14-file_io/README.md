## Description

### Project Purpose
This project assists in understanding and using:
- I/O system calls open, close, read and write
- file descriptors
- 3 standard file descriptors, what their purposes are and what their POSIX names are
- flags O_RDONLY, O_WRONLY, O_RDWR
- file permissions, and how to set them when creating a file with the open system call
- system calls
- difference between a function and a system call

### Project requirements
- Code compliance with [Betty](https://github.com/holbertonschool/Betty) style and document guidelines.
- Code compuled on Ubuntu 14.04 LTS
- Code compiled using flags: `-Wall`, `-Werror`, `-Wextra`, `-pedantic
- Cannot use global variables.
- Restricted to no more than 5 functions per file.
- Function prototypes should be included in header file `holberton.h`
- Header files should be include guarded.
- Authorized functions and macros:
..* `malloc` (`man 3 malloc`)
..* `free` (`man 3 free`)
..* `exit` (`man 3 exit`)
..* `dprintf` (`man 3 dprintf`)
..* any custom programmed functions (_putchar etc)
- Prohibited functions:
..* `standard library functions`

## File Descriptions
- `holberton.h`: contains the prototypes for each corresponding .c function file
- `0-read_textfile.c`: reads a text file and prints it to the POSIX standard output
- `1-create_file.c`: creates a new file with optional text written to it
- `2-append_text_to_file.c`: adds text to the end of an already existing file
- `3-cp.c`: copies the content of a file to another file

## Author

*Stuart Kuredjian* - [Github](https://github.com/dbconfession78) || [Twitter](https://twitter.com/StueyGK)
