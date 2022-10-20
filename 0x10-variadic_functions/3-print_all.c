#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - prints args identified by format
 * @format: format identifier
 *
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int len, count, num, i;
	char c, *str;
	float ft;

	len = strlen(format);
	if (format != NULL)
	{
		count = 0;
		i = 0;
		while (i < len)
		{
			va_start(list, format);
			switch (format[i])
			{
				case 'c':
					c = (char) va_arg(list + count, int);
					printf("%c", c);
					break;
				case 'i':
					num = va_arg(list + count, int);
					printf("%d", num);
					break;
				case 'f':
					ft = (float) va_arg(list + count, double);
					printf("%f", ft);
					break;
				case 's':
					str = va_arg(list + count, char*);
					printf("%s", str);
					break;
				default:
					break;
			}
			va_end(list);
			if (i != (len - 1))
				printf(", ");
			i++;
			count++;
		}
		printf("\n");
	}
}
