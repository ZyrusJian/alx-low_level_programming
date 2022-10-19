#include "variadic_functions.h"

/**
 * print_all - prints args identified by format
 * @format: format identifier
 *
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int len, count, num;
	char c, *str;
	char *fmt;
	float ft;

	count = 0;
	len = strlen(format);
	*fmt =strcpy(format);
	if (format != NULL)
	{
		while (*fmt != '\0')
		{
			va_start(list, format);
			switch (*fmt)
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
			if (count != (len - 1))
				printf(", ");
			fmt++;
			count++;
		}
		printf("\n");
	}
}
