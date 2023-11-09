#inclued "3-calc.H"
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*p)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	p = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = p(num1, num2);

	printf("%d\n", result);
	return (0);
}
