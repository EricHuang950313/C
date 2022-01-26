#include <stdio.h>
#include <stdlib.h>

// Literal/Constant
#define C_A "A"
const char C_B = 'a';
int main(int argc, char *argv[]) {
	// Data Type
	char data_char = 'A';  // Can be unsigned 
	char data_string[] = "ABCDEF";  // {'A', 'B', 'C', 'D', 'E', 'F', '\0'} '\0' is null
	int data_int = 1;  // Can be unsigned
	short data_shortint = 1;  // Can be unsigned
	long data_longint = 1;  // Can be unsigned
	long long data_longlongint = 1; 
	float data_float = 1.1;
	double data_double = 1.1;
	long double data_longdouble = 1.1;
	printf("data_char: %d \n", sizeof(data_char));
	printf("data_string: %d \n", sizeof(data_string));
	printf("data_int: %d \n", sizeof(data_int));
	printf("data_shortint: %d \n", sizeof(data_shortint));
	printf("data_longint: %d \n", sizeof(data_longint));
	printf("data_longlongint: %d \n", sizeof(data_longlongint));
	printf("data_float: %d \n", sizeof(data_float));
	printf("data_double: %d \n", sizeof(data_double));
	printf("data_longdouble: %d \n", sizeof(data_longdouble));
	
	// Variable
	int a;  // value: random
	int b, c;  // value: random
	int d = 1;
	int e = 2, f = 3;
	
	// Operator
	/*  1. Assignment: =
	    2. Arithmetic: + - * / % >> <<(2 squared if 1<<anumber)
	    3. Shorthand Assignment: += -= *= /= %=
	    4. Increment: ++
	    5. Decrement: --
	    6. Relational: == != >= <= > <
	    7. Boolean Logical: &&(and) ||(or) !(not)
	*/
	
	// Type Conversion
	/*
		e.g. int g = (int)h;
	*/
	
	// Print Format
	// %c %s %d  %f 
	printf("%c %s %d %f %1.2f %d%% \n", 'B', "ABC", 1000000000, 0.000001, 123.456, 5);
	long double k = 6.123456789;
	printf("k: %.16Lf\n", k);
	
	// Escape Sequence
	/*
		1. \a(alert) \n \0(null)(the end of a string)
	*/
	
	// Scanf
	// %c %s %d %ld %f %lf
	// int n1, n2, n3, n4;
	// int n5;
	// float n6;
	// scanf("%d %d", &n1, &n2);
	// printf("%d %d\n", n1, n2);
	// scanf("%d-%d", &n3, &n4);
	// printf("%d %d\n", n3, n4);
	// scanf("%4d", &n5);
	// scanf("%3f", &n6);
	// printf("%d %f\n", n5, n6);
	
	// String
	// char s[10];
	// gets(s);
	// puts(s);
	
	system("PAUSE");
	return 0;
}
