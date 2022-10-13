**PROGRAM DESCRIPTION**

**PROJECT: 0x0F. C - Function pointers**

**This project treats::**


What are function pointers and how to use them
What does a function pointer exactly hold
Where does a function pointer point to in the virtual memory

**Requirements**
**General**
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called function_pointers.h
* Don’t forget to push your header file
* All your header files should be include guarded


**TASKS**

* function_pointers.h - header file for 0-print_name.c, 1-array_iterator.c, and 2-int_index.c.

* 0-print_name.c - function that prints a name using a function given as a parameter.

* 1-array_iterator.c - function that executes a function given as a parameter on each element of an array.

* 2-int_index.c - function that searches for an integer using a comparative function given as a parameter.

* 3-calc.h - header file for 3-main.c, 3-op_functions.c, and 3-get_op_func.c.

* 3-main.c - performs simple operations passed in as parameters.

* 3-op_functions.c - contains the following 5 functions:

int op_add(int a, int b) - returns the sum of a and b.
int op_sub(int a, int b) - returns the difference of a and b.
int op_mul(int a, int b) - returns the product of a and b.
int op_div(int a, int b) - returns the result of the division of a by b.
int op_mod(int a, int b) - returns the remainder of the division of a by b.
3-get_op_func.c - selects the correct function from 3-op_functions.c to perform the operation asked by the user.

**Advanced**
100-main_opcodes.c - prints the opcodes of its own main function up to a specified number of bytes.
