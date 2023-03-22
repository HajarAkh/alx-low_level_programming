#include <unistd.h>

/**
 * main - Determines if the number is positive , negative or zero
 *
 * Return: always 0 (Success)
 */
void x_putchar(char x)
{
	write(1,&x,1);
}
int main()
{
	int i=0;
	char txt[] = "_putchar";
	while(txt[i] != '\0')
	{
		x_putchar(txt[i]);
		i++;
	}
	return (0);
}
