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
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
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
