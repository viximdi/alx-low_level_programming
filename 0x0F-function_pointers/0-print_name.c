#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function.
 * @name: The name to be printed.
 * @name_printer: Function pointer to the name printer.
 */
void print_name(char *name, void (*name_printer)(char *))
{
	if (name && name_printer)
		name_printer(name);
}
