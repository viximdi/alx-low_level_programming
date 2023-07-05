/**
 * _sqrt_recursion_helper - Helper function to calculate the square root recursively
 * @n: The number to calculate the square root of
 * @guess: The current number to check if it is the square root
 *
 * Return: The square root of the number if found, otherwise -1
 */
int _sqrt_recursion_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (_sqrt_recursion_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The square root of the number if found, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_recursion_helper(n, 0));
}

