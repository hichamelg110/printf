/**
 *_printf2 - a function that produces output according to a format.
 *@format: format string.
 *Return: the number of characters printed.
 */
#include "main.h"

int _printf2(const char *format, ...)
{
int i = 0;
int num = 0;
va_list countargs;
va_start(countargs, format);
for (; *format != '\0'; format++)
{
if (*format == '%')
{
format++;
if (*format == 'd' || *format == 'i')
{
num = va_arg(countargs, int);
i += print_number(num);
}
else
{
putchar(*format);
i++;
}
}
else
{
putchar(*format);
i++;
}
}
va_end(countargs);
return (i);
}
