/*
 * File: positive_or_negative.c
 * Auth: Emmanuel
 */
#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - This checks wether the input is a positive or negative value
 * @c: This is used for holding the input
 */
void positive_or_negative(int c)
{
	if (c < 0)
		printf("%d is negative", c);
	else
		printf("%d is positive", c);
			
}
