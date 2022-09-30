#include <unistd.h>
/*putchar function*/
int _putchar (char c);

int _putchar(char c)
{
return (write(1, &c, 1));
}

