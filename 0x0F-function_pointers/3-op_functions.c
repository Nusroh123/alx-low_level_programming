#include <stdio.h>
#include "3-calc.h"

/**
 * op_add: addition
 * @a: value 1
 * @b: value 2
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction
 * @a: value 1
 * @b: value 2
 * Return: subt
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: value 1
 * @b: value 2
 * Return: mul
 *
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: value 1
 * @b: value 2
 * Return: div
 *
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulus
 * @a: value 1
 * @b: value 2
 * Return: mod
 */
int op_mod(int a, int b)
{
	return (a % b);
}
