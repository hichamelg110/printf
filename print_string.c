/**
 *print_string - function print string
 *@str : string
 *Return: number character
 */
#include <stdio.h>
#include <string.h>
#include "main.h"
int print_string(char *str)
{
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
