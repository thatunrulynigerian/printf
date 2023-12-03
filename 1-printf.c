#include <stdarg.h>
#include "main.h"

/**
 * _printf - function that prints a formated string
 * @format: string of formatted characters
 * Return:Number of character printed
 **/

int _printf(const char *format, ...)
{
	int countC;
	va_list arg_lists;

	va_start(arg_lists, format);

	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			countC++;
		}
		else
		{
			if (*format == 'd')
			{
				int integer = va_arg(arg_lists, int);
				
				write(1, integer, 1);
				countC++;
			}

			if ( *format == 'i')
			{
				int ...;
				write(...);
				countC++;
			}
			format++;
		}
		va_end(arg_lists);
		return (0);
	}
