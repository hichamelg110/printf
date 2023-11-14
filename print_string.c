#include "main.h"
/**
 *print_string - function print string
 *@str : string
 *Return: number character
 */

int print_string(char *str)
{
int i = 0;
char null_str = "(null)";
if (str == NULL)
{
str = null_str;
}
for (; *str != '\0'; str++)
{
putchar(*str);
i++;
}
return (i);
}
