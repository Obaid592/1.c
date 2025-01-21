/*
EXP NO: 8.2
TITLE   :WAP to check enter string is palindrome or not
NAME : SIDDIQUI OBAIDULLAH ABDUL QAYYUM
UIN  : 241P025
DIV : C
*/
#include<stdio.h>
int main(){
char name[20],copy [20];
printf("Enter a String: ");
scanf("%s", name);
strcpy(copy, name); strrev(copy);
if(strcmp(name, copy)==0)
{
printf(" -* string is a PALIDROME *-");
}
else
{
printf(" -* string is not a PALIDROME*-");
}
return 0;
}