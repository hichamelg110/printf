#include "main.h"
/**
 * _printf - a function that produces output according to a format.
 * @format: format string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
int i = 0;

if (format == NULL)
{
putchar('(');
putchar('n');
putchar('u');
putchar('l');
putchar('l');
putchar(')');
putchar('\n');
int count;
for (i = 0; i < 7; i++)
return (i);
}
va_list countargs;
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
}
}
else
{
putchar(*format);
}
}
va_end(countargs);
return (i);
}
