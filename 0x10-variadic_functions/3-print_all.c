#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * _strlen - string's size
 *
 * @format: string parameter
 *
 * Return: unsigned integer
 */
unsigned int _strlen(const char * const format)
{
	unsigned int size = 0;

	while (format[size])
	{
		size++;
	}

	return (size);
}

/**
 * print_all - prints anything
 *
 * @format: variable's format to display
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
