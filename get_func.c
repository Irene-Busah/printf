#include "holberton.h"

/**
 * get_func - look for the specifier
 * @x: variable to the function
 * Return: function
 */
int (*get_func(char x))(va_list)
{
	int i = 0;
	spec arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_i},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_oct},
		{'x', print_hex},
		{'X', print_HEX},
		{'S', print_S},
		{'R', print_rot13},
		{'p', print_hex},
		{'r', print_rev},
		{NULL, NULL}
	};
	while (arr[i].valid)
	{
		if (x == arr[i].valid[0])
			return (arr[i].f);
		i++;
	}
	return (arr[i].f);
}
