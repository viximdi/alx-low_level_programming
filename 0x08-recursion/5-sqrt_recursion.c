/**
 * _sqrt_recursion_helper - Helper function to calculate the square root
 *                          recursively
 * @n: The number to calculate the square root of
 * @start: The starting point of the search range
 * @end: The ending point of the search range
 *
 * Return: The square root of the number if found, otherwise -1
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
	if (start > end)
		return (-1);

	int mid = start + (end - start) / 2;
	int square = mid * mid;

	if (square == n)
		return (mid);
	else if (square > n)
		return (_sqrt_recursion_helper(n, start, mid - 1));
	else
		return (_sqrt_recursion_helper(n, mid + 1, end));
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

	return (_sqrt_recursion_helper(n, 0, n));
}
