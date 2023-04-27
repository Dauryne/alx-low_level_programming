#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0
* @n: number of the times table
*/
void print_row(int n, int i)
{
int j, k;

for (j = 0; j <= n; j++)
{
k = j * i;
if (j == 0)
{
_putchar(k + '0');
}
else
{
_putchar(',');
_putchar(' ');

if (k < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
else if (k >= 10 && k < 100)
{
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(' ');
}

_putchar((k / 100) + '0');
_putchar(((k / 10) % 10) + '0');
_putchar((k % 10) + '0');
}
}
_putchar('\n');
}
void print_times_table(int n)
{
int i;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
print_row(n, i);
}
}
}

