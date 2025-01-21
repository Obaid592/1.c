/*
EXP NO: 10.1
TITLE : WAP to add two numbers using pointer
NAME : SIDDIQUI OBAIDULLAH ABDUL QAYYUM 
UIN : 241P025
DIV : C
*/
#include<stdio.h>
int main() {
int a, b, sum, *p1 = &amp;a, *p2 = &amp;b;
 printf("Enter two numbers: ");
scanf("%d %d", p1, p2);
sum = *pl + *p2;
printf("Sum: %d\n", sum); 
return 0;
}