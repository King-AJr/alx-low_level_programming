#include <stdio.h>
#include <string.h>

int main(void)
{
	char *b;
	char *c;
	char *d;
	c = "better than life";
	d = "sweeter than honey";
	b= strncat(c, d, 5);
	printf("%s\n", c);
	return (0);
}
