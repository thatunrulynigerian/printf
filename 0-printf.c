#include <stdarg.h>
#include "main.h"

/**
 * _printf - function that prints a formated string
 * @format: string of formatted characters
 * Return:Number of character printed
 **/

int _printf(const char *format, ...)
{
	int countC = 0;
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
			format++;
			if (*format == 'c')
			{
				char sc = va_arg(arg_lists, int);

				write(1, &sc, 1);
				countC++;
			}
			else if (*format == 's')
			{
				char *strc = va_arg(arg_lists, char*);

				if (strc == NULL)
					return (-1);
				while (*strc)
				{
					write(1, strc, 1);
					strc++;
					countC++;
				}
			}
			else
			{
				write(1, format - 1, 1);
				countC++;
			}
		}
		format++;
	}
	va_end(arg_lists);
	return (countC);
}
