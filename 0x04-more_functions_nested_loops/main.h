#include <unistd.h>
/*putchar function*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/* rhis function checks if a char is uppercase*/
int _isupper(int c);

/* this function checks if an argument is a digit */
int _isdigit(int c);

/*this function multiplies two integers*/
int mul(int a, int b);

/*this function prints from 0-9*/
void print_numbers(void);

/*print numbers 0-9 except 2 and 4*/
void print_most_numbers(void);

/*print 0-14 10 types*/
void more_numbers(void);

/* print a line if arg is greater than 0*/
void print_line(int n);

/* for a triangle*/
void print_diagonal(int n);

/* print a square*/
void print_square(int size);

/*fizz buzz*/
void fizz_buzz(void);

/*print triangle*/
void print_triangle(int size);
