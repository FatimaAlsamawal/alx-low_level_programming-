#include <stdio.h>
#include <stdlib.h>
/**
* main - program that prints the opcodes of its own main function.
* @argc: the number of arguments
* @argv: the pointer array og arguments
*
* File: 100-main_opcodes.c
* Autjh: fatima-alsamawal
*
* Return: Always 0 (Successs)
*/
int main(int argc, char *argv[])
{
int i, n;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
n = atoi(argv[1]);
if (n < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < n; i++)
{
printf("%02hhx", *((char *)main + i));
if (i <  n - 1)
printf(" ");
else
printf("\n");
}
return (0);
}
