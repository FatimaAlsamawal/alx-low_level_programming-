#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 *
 * File: 2-strlen_recursion.c
 * Auth: Zuhair Ahmed
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
