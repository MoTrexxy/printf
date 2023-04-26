#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf- main function.
 * @format: identifier.
 * Return: the length of the string.
 */
int _printf(const char *format, ...)
{
	va_list arguments;

	va_start(arguments, format);
	int count = 0;
	int c;
	char *s
	
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(arguments, int);
				putchar(c);
				count++;			
			}
			else if (*format == 's')
			{
				*s = va_arg(arguments, char *);
				while (*s != '0')
				{
					putchar(*s);
					s++;
					count++;
				}
				else if (*format == '%')
				{
					putchar('%');
					count++;
				}
			}
			else 
			{
				putchar(*format);
				count++;
			}
		}

	format++;
	}
	va_end(arguments);
	return (count);
}
	
