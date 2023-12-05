#ifndef LISTS_H
#define LISTS_H

/* Task 0: Print a list of integers */
void print_list_integer(int *my_list, int size);

/* Task 1: Secure access to an element in a list */
int element_at(int *my_list, int idx);

/* Task 2: Replace element */
void replace_in_list(int *my_list, int idx, int element);

/* Task 3: Print a list of integers in reverse */
void print_reversed_list_integer(int *my_list, int size);

/* Task 4: Replace in a copy */
int *new_in_list(int *my_list, int idx, int element);

/* Task 5: Remove characters 'c' and 'C' from a string */
char *no_c(char *my_string);

/* Task 6: Print a matrix of integers */
void print_matrix_integer(int **matrix, int rows, int cols);

/* Task 7: Add two tuples */
int *add_tuple(const int *tuple_a, int len_a, const int *tuple_b, int len_b);

/* Task 8: Return length and first character of a string */
struct Tuple multiple_returns(char *sentence);

/* Task 9: Find the max integer in a list */
int max_integer(int *my_list, int size);

/* Task 10: Check multiples of 2 in a list */
int *divisible_by_2(int *my_list, int size);

/* Task 11: Delete item at a specific position in a list */
int *delete_at(int *my_list, int idx, int *size);

/* Task 12: Switch values of a and b */
void switch_values(int *a, int *b);

/* Task 13: Check if a singly linked list is a palindrome */
int is_palindrome(listint_t **head);

/* Task 14: Print info about Python lists */
void print_python_list_info(PyObject *p);

#endif /* LISTS_H */

