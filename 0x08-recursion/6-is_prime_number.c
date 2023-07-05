/**
 * is_prime_number_helper - Helper function to check if a number is prime
 * @n: The number to check
 * @i: The divisor to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);
	else
		return (is_prime_number_helper(n, i - 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_number_helper(n, n - 1));
}
