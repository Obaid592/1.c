/*
Exp NO: 2.1
Title: WAP to find if entered number is even or odd
Name: Siddiqui Obaidullah Abdul Qayyum
UIN: 241P025
Div: C
*/
int main() {
    int num;
    printf("\t\t\tEven or odd Number finder\n\n\n");
// Take number from user printf("Enter a number: "); 
scanf("%d", &num);
 // check given number is even or odd
  if (num % 2 == 0) {
}
printf("%d is even number ", num);
else {
    printf("%d is odd number", num);
    return 0;
}
/*OUTPUT
Even or odd Number finder
Enter a number: 13
13 is odd number