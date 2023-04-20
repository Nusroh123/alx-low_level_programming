#include <stdio.h>

/**
 * op_add: addition
 * @a: ...
 * @b: ...
 * Return: add
 */
int op_add(int a, int b)
{
	int add;

	add = a + b;
	return (add);
}
/**
 * op_sub - subtraction
 * @a: ...
 * @b: ..
 * Return: subt
 */
int op_sub(int a, int b)
{
	int subt;

	subt = a - b;
	return (subt);
}
/**
 * op_mul - multiplication
 * @a: ...
 * @b: ...
 * Return: mul
 *
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}
/**
 * op_div - division
 * @a: ...
 * @b: ...
 * Return: div
 *
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}
/**
 * op_mod - modulus
 * @a: ...
 * @b: ...
 * Return: mod
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
