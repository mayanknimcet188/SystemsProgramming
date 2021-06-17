int g = 100; // initialized global variable
int h; // uninitialized global variable
static int s; // static global variable

main(int argc, char *argv[]) //main function
{
	int a = 1; int b; //automatic local variables
	static int c = 3; //static local variable
	b = 2;
	c = mysum(a,b); //call mysum(), passing a, b
	printf("sum=%d\n", c); //call printf()
}
