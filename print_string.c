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
for (; *str != '\0'; str++)
{
putchar(*str);
i++;
}
return (i);
}
