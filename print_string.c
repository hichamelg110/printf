/**
 *print_string - function print string
 *@str : string
 *Return: number character
 */


#include "main.h"
int print_string(char *str)
{
int i = 0;
if (str == NULL)
{
str = "(null)";
}
for (; *str != '\0'; str++)
{
putchar(*str);
i++;
}
return (i);
}
