int add(int i, int j);
int sub(int i, int j);
int mul(int i, int j);
int div(int i, int j);
int mod(int i, int j);

/**
* add - adds two integers
* @i: first integer to add
* @j: second integer to add
* Return: the addition
*/

int add(int i, int j)
{
	return (i + j);
}

/**
* sub - subtracts two integers
* @i: first integer to add
* @j: second integer to add
* Return: the subtract
*/

int sub(int i, int j)
{
	return (i - j);
}

/**
* mul - multiplies two integers
* @i: first integer to add
* @j: the second integer to add
* Return: the multiple
*/

int mul(int i, int j)
{
	return (i * j);
}

/**
* div - divideds two integers
* @i: the first integer to add
* @j: second integer to add
* Return: dividend integer
*/

int div(int i, int j)
{
	return (i / j);
}

/**
  mod - finds modulus of two integers
  @i: first integer to add
  @j: second integer to add
  Return: modulus
*/

int mod(int i, int j)
{
	return (i % j);
}
