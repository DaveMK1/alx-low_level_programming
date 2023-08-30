#include "main.h"

#include "main.h"
#include <stdio.h>

int check_prime(int n, int x);

/**
  * is_prime_number - the integer a prime number
  * @n: number to be tested
  *
  * Return: integer value
  */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
  * check_prime - Check if number is prime
  * @n: number to be tested
  * @x: the iteration times
  *
  * Return: integer value
  */

int check_prime(int n, int x)
{
	if (n <= 1)
		return (0);

	if (n % x == 0 && x > 1)
		return (0);

	if ((n / x) < x)
		return (1);

	return (check_prime(n, x + 1));
}
