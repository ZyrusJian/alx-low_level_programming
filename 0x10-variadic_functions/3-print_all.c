#include "variadic_functions.h"
#include <stdarg.h>

/**
 * format_count - counts the number of format
 * @format: format identifier
 *
 * Return: count of format number
 */

int format_count(const char * const format)
{
	int count, i;
	/* Count number of formats*/
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's')
		{
			count++;
		}
		i++;
	}
	return (count);
}

/**
 * print_all - prints args identified by format
 * @format: format identifier
 *
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int fcount, num, argi;
	char c, *str;
	float ft;

	va_start(list, format);
	fcount = format_count(format);
	argi = 0;
	while (argi < fcount)
	{
		switch (format[argi])
		{
			case 'c':
				c = (char) va_arg(list, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(list, int);
				printf("%d", num);
				break;
			case 'f':
				ft = (float) va_arg(list, double);
				printf("%f", ft);
				break;
			case 's':
				str = va_arg(list, char*);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		(argi != (fcount - 1)) && (printf(", "), 1);
		argi++;
	}
	va_end(list);
	printf("\n");
}
