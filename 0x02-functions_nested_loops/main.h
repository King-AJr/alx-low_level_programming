/*this function is for printing out char*/
int _putchar (char c);
int _putchar (char c)
{
return (write(1, &c, 1));
}

/*print_alphabet: print alphabets*/
void print_alphabet (void);

/*print_alphabet_x10: print alphabet 10x*/
void print_alphabet_x10 (void);

/*_islower: checks if a char is lower case*/
int _islower(int c);

/* _isalpha: checks if an argument is an alphabet*/
int _isalpha(int c);

/*print_sign: prints the sign of a num*/
int print_sign(int n);

/*_abs: prints the absolute value of an argument*/int _abs(int);
