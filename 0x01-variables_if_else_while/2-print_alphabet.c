#include <stdio.h>
/**
 *main- prince the alphabet in lowecase
 *
 *Return: 8 (Success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
	putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
