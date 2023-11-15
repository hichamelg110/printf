#include "main.h"
/**
 *print_string - a function that print string
 *@str : string
 *Return: number character
 */

int print_string(char *str)
{
int i = 0;

if (str == NULL)
{
return (-1);
}
while (*str != '\0')
{
putchar(*str);
str++;
i++;
}
return (i);
}
