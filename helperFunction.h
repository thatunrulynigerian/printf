#include "main.h"
/**
 * print_sc - putchar function
 * @sc: single character
 * print_str - print function
 * @strc: string character
 * Return: void
 **/

void print_sc(char sc)
{
	write(1, &sc, 1);
}

void print_str(const char *strc)
{
	while (*strc)
	{
		print_sc(*strc);
		strc++;
	}
}

/**
 * default_handler - handle default case
 * @format: string input.
 * @counC: counts character
 * Return: void
 **/

void default_handler(char *format, int *countC)
{
	print_sc(*(format-1));
	(*countC)++;
}
