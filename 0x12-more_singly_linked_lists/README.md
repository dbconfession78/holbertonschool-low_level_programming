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
	- `print_listint`: returns the number of nodes
	- `listint_len` : returns the number of elements in a linked listint_t list
	- `add_nodeint`: adds a node at beginning of a listint_t list
	- `add_nodeint_end`: adds a new node at the end of a listint_t list
	- `free_listint`: frees memory allocated for an entire listint_t list
	- `free_listint2`: frees a listint_t list
	- `pop_listint` : deletes the head of a listint_t linked list and returns the head node's data (n)
	- `get_nodeint` : return a node at t aspecific index in the list
	- `sum_listint` : returns the sum of all data (n) of a listint_t linked list
	- `insert_nodeint` : inserts a node at a given position
	- `delete_nodeint` : deletes the node at index "index" of a listint_t linked list
- 0-print_listint.c: function for the print_list prototype
- 1-listint_len.c: fucntion for the list_len prototype 
- 2-add_nodinte.c: function for the add_node prototype
- 3-add_nodeint_end.c: function for the add_node_end prototype
- 4-free_listint.c: function for the free_listint prototype
- 5-free_listint2.c: function for the free_listint2 prototype
- 6-pop_listint.c: function for the pop_listint prototype
- 7-get_nodeint.c: function for the get_nodeint.c
- 8-sum_listint.c: function for the sum_listint prototype
- 9-insert_nodeint.c: function for the insert_nodeint prototype
- 10-delete_nodeint.c: function for the delete_nodeint prototype

## Author

*Stuart Kuredjian* - [Github](https://github.com/dbconfession78) || [Twitter](https://twitter.com/StueyGK)
