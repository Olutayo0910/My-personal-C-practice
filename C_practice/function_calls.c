#!/bin/bash#!/bin/bash

/* This function adds two integers */

#include <stdio.h>

int add_int(int x, int y)
{
	int result;
	result = x + y;
	return result;
}

int main()

{
	int sum;
	sum = add_int(5, 7);
	printf("The sum is %d\n", sum);
	return 0;
}	
