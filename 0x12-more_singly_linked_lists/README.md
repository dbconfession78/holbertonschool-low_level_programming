## Description
This project repo contains more examples of how to build and use singly linked lists in the C programming language (see also 0x11-singly-linked-lists).
### Project requirements
- Code compliance with [Betty](https://github.com/holbertonschool/Betty) style and document guidelines.
- Code compuled on Ubuntu 14.04 LTS
- Code compiled using flags: `-Wall`, `-Werror`, `-Wextra`, `-pedantic
- Cannot use global variables.
- Restricted to no more than 5 functions per file.
- Function prototypes should be included in header file `lists.h`
- Header files should be include guarded.
- Authorized functions and macros:
..* `malloc` (`man 3 malloc`)
..* `free` (`man 3 free`)
..* `exit` (`man 3 exit`)
..* any custom programmed functions
- Prohibited functions:
..* `standard library functions`

## File Descriptions
- `lists.h`: Header file containing 1 stucture and the prototypes for the programs functions 
	- `lists_s`: a structure with one string, one unsigned int and a new struct pointing to the next structure in the link list
	- `_strlen`: counts the number of characters in a string
	- `print_list`: prints the character count and string from each structure in the linked list
	- `list_len`: returns the number of nodes in a linked list
	- `add_node`: adds a new structure node to the beginning of an existing linked list
	- `add_node_end`: adds a new structure node to the end of an existing linked list
	- `free_list`: frees memory allocated for an entire linked list
- 0-print_list.c: function for the print_list prototype
- 1-list_len.c: fucntion for the list_len prototype 
- 2-add_node.c: function for the add_node prototype
- 3-add_node_end.c: functionf for the add_node_end prototype
- 4-free_list
## Author

*Stuart Kuredjian* - [Github](https://github.com/dbconfession78) || [Twitter](https://twitter.com/StueyGK)
