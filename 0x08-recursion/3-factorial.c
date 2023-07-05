/**
 * factorial - calculates the  factorial of a given number
 * @n: number to be calc.
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		fact = n * factorial(n-1);
	}
	return (fact);
}
