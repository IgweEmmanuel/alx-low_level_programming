/*
 * File: positive_or_negative
 * Auth: Emmanuel
 */
#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - function checks for positive or negative
 * @i: it checks for the number
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is a negative value\n", i);
	else
		printf("%d is a positive value\n", i);
}
