#include "main.h"
#include <stdio.h>

int _check_if_prime(int n, int k);

/**
 * is_prime_number - Checks for prime number
 * @n: the number being checked
 *
 * Return: 1 if input integer value is prime number,
 * otherwise 0.
 */
int is_prime_number(int n)
{
	return (_check_if_prime(n, 1));
}

/**
 * _check_if_prime - Check if number is prime
 * @n: the number being checked
 * @k: the iteration times
 *
 * Return: 1 if input integer value is prime number,
 * otherwise 0.
 */
int _check_if_prime(int n, int k)
{
	if (n <= 1)
		return (0);

	if (n % k == 0 && k > 1)
		return (0);

	if ((n / k) < k)
		return (1);

	return (_check_if_prime(n, k + 1));
}
