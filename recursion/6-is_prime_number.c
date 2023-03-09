int primeNumber(int x, int y);
/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0.
 * @n: number checked
 * Return: 0 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
	return (primeNumber(2, n));
}

/**
 * primeNumber - function that returns 1
 * if the input integer is a primer number,
 * otherwise return 0.
 * @x: the number tested to divide y
 * @y: the number checked
 * Return: 1 if the the number is divisible
 * by x, 0 otherwise.
 */

int primeNumber(int x, int y)
{
	if (x == y)
		return (1);

	if (y % x == 0)
		return (0);

	return (primeNumber(x + 1, y));
}
