#include <stdio.h>
#include <stdlib.h>

int main(){
	char gender;
	int age;
	float height;
	printf("Gender: ");
	scanf("%c", &gender);
	printf("Age: ");
	scanf("%d", &age);
	printf("Height: ");
	scanf("%f", &height);
	printf("%c %d %f\n", gender, age, height);
	system("PAUSE");
}
