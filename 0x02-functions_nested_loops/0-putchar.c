#include <stdio.h>
#include "main.h"

void printword(char word[]);
/**
 * main - Entry Point
 *
 * Objective: print(_putchar)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printword("_putchar\n");
	return (0);
}

/**
 * printword - print string
 *
 * @word: String word that want to print
 */
void printword(char word[])
{
	int i;

	for (i = 0; word[i] != '\0'; i++)
	{
		_putchar(word[i]);
	}
}
