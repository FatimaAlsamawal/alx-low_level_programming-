#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - that prints a struct do
 * @d: the dog to be print
 *
 * File: 2-print_dog.c
 * Auth: Zuhair Ahmed
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d.name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d.name);
		}
		if (d.age == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("Age: %s\n", d.age);
		}
		if (d.owner == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d.owner);
		}
	}
}
