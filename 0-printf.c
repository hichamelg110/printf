#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
   
int i = 0;
va_list countargs;
va_start(countargs, format);
    
for (; *format != '\0'; format++)
{
if (*format == '%')
{
format++;
if(*format == 'c')
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
putchar('%')
i++;
}
}
else
{
putchar(*format);
}
}
va_end(countargs);
i++;
}
