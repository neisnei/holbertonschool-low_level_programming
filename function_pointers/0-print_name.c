#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Write a function that prints a name
 * @name: char
 * @f: char
 * return nothing
 */

void print_name(char *name, void (*f)(char *));
{
	f(name);
}
