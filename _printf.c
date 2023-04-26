#include "main.h"

/**
 * _printf- main function.
 * @format: identifier.
 * Return: the length of the string.
 */
int _printf(const char *format, ...)
{
	va_list arguments;

	va_start(arguments, format);
	int count = printf(format, arguments);

	va_end(arguments);

	return (count);
}
