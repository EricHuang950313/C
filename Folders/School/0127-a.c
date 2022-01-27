#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b); 
	printf("%d + %d = %f\n", a, b, (float)a+b);
	printf("%d - %d = %f\n", a, b, (float)a-b);
	printf("%d * %d = %f\n", a, b, (float)a*b);
	printf("%d / %d = %f\n", a, b, (float)a/b);
	printf("%d %% %d = %d\n", a, b, a%b);
	printf("%d ** 2 = %d\n", a, a*a);
	system("PAUSE");
	return 0;
}
