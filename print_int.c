/**
 *print_number - print string
 *@num : The number we want to convert to strig
 *Return: number character printed
 */
#include "main.h"

int print_number(int num)
{
int i = 0;
int counter = 0;
char str_int [10];
int index = 0;
if (num == 0)
{
putchar('0');
return (1);
}
else if (num == INT_MIN)
{
putchar('-');
counter++;
num = -(num + 1);
}
while (num != 0)
{
str_int[index++] = (char)('0' + num % 10);
num /= 10;
}
for (i = index - 1; i >= 0; i--)
{
putchar(str_int[i]);
counter++;
}
return (counter);
}
