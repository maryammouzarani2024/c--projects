const int a = 3; // I promisse i won't change a
	int *ptr;
	ptr = (int*)(&a);

	printf("A=%d\n", a);
	*ptr = 5; // I'm a liar, a is now 5
	printf("A=%d\n", a);

	*((int*)(&a)) = 6;
	printf("A=%d\n", a);