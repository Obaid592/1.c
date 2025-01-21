/*
EXP NO: 10.2
TITLE :WAP to print the elements of an array
            in reverse order using pointer
NAME : SIDDIQUI OBAIDULLAH ABDUL QAYYUM
UIN : 241P025
DIV : C
*/
#include<stdio.h>
void printReverse(int *arr, int n) {
for (int *ptr = arr + n - 1; ptr &gt;= arr; ptr--) {
 printf("%d ", *ptr);
}
}
int main() {
int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr) / sizeof(arr[0]);
printReverse(arr, n);
return 0;
}