#include "main.h"
/**
 * _printf - a function that produces output according to a format.
 * @format: format string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
va_list countargs;
int i = 0;

if (format == NULL)
{
return (-1);
}
va_start(countargs, format);

for (; *format != '\0'; format++)
{
if (*format == '%')
{
format++;
if (*format == 'c')
{
char c = va_arg(countargs, int);
putchar(c);
i++;
}
else if (*format == 's')
{
char *str = va_arg(countargs, char*);
for (; *str != '\0'; str++)
{
putchar(*str);
i++;
}
}
else if (*format == '%')
{
putchar('%');
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
