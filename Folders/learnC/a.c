#include<stdio.h>
#include<stdlib.h>
void main() {
   char a = 'A';
   char* b = "ABC";
   int c = 123;
   short d = 123;
   long e = 123;
   unsigned int f = 123;
   unsigned short g = 123;
   unsigned long h = 123;
   float i = 1.23;
   double j = 1.23;
   long double k = 5.5767458458;
   printf("a: %c; %d\n", a, sizeof(a));
   printf("b: %s; %d\n", b, sizeof(b));
   printf("c: %d; %d\n", c, sizeof(c));
   printf("d: %d; %d\n", d, sizeof(d));
   printf("e: %d; %d\n", e, sizeof(e));
   printf("f: %d; %d\n", f, sizeof(f));
   printf("g: %d; %d\n", g, sizeof(g));
   printf("h: %d; %d\n", h, sizeof(h));
   printf("i: %f; %d\n", i, sizeof(i));
   printf("j: %f; %d\n", j, sizeof(j));
   printf("%Lf", k);
}