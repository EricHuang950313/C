#include<stdio.h>
#include<stdlib.h>
void main(){
    int n1, n2;
    char c1[30];
    scanf("%d %d\n", &n1, &n2);
    gets(c1);
    printf("n1=%d n2=%d\n", n1, n2);
    printf("c1=%s", c1);
}