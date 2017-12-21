#include <stdio.h>
int fun_test();
int a;
int main()
{
	printf("hello \n");
	fun_test();
	return 0;
}
int fun_test()
{
	printf("world\n");
	return 0;
}