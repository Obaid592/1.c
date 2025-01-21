/*
EXP NO : 7.2
TITLE :WAP to calculate sum of two matrix
NAME : SIDDIQUI OBAIDULLAH ABDUL QAYYUM
UIN : 241P025
DIV : C
*/
#include <stdio.h>
int main() {
int rows, cols; 
//Input dimensions
printf("Enter the number of rows and columns of the matrices: ");
 scanf("%d %d", &rows, &cols);
// Declare matrices based on user inputl
int matrix] [rows] [cols], matrix2 [rows] [cols], sum[rows] [cols]; 
// Input first matrix
printf("Enter elements of the first matrix:\n");
for (int i=0; i < rows; i++) {
for (int j=0; j < cols; j++) {
printf("Enter element [%d] [%d]:",
i + 1 j + 1);
scanf("%d", &matrix][i][j]);
1 // Input second matrix
printf("Enter elements of the second matrix:\n");
for (int i = 0; i < rows; i++) {
for (int j=0; j < cols; j++) {
printf("Enter element [%d] [%d]"', i + 1, j + 1);
scanf("%d", &matrix2[i][j]);
}
// Calculate the sum of the matrices for
(int i = 0; i < rows; i++) {
for (int j = 0; j<cols; j++) {
sum[i][j] = matrix[i][j] + matrix2[0];
// Display the sum matrix
printf("Sum of the matrices: \n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) { 
printf("%d ", sum[i][j]); 
printf("\n");
}
}
return 0;
}