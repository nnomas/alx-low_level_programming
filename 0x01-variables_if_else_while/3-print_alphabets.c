#include <stdio.h>
/**
 main - prince alphabet in lowercase and uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
	putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
