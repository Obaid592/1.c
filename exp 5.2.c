/*
Exp NO: 5.2
Title: WAP to find the factorial of
a number using Recursive Function
 Name: Siddiqui Obaidullah Abdul Qayyum 
 UIN : 241P025
Div : C
*/
int factorial (int x) {
· if (x=1 | | x== 0) {
return x;
}
return factorial (x-1) *
X;
}
int main() {
int num, result;
printf("\t\t\tFactorial Using Recursive function\n\n\n");
printf("Enter a Number: "); 
scanf("%d", &num); 
// Check given number is positive or not 
if (num < 0) {
printf("Factorial fo Negative Number is not defined");
}
else{
result = factorial (num);

printf("The factorial of %d is %d\n", num, result);
}
}
printf("\nThanks for using Calculator.");
 return 0;
}
/*OUTPUT
Factorial Using Recursive function
Enter a Number: 10
The factorial of 10 is 3628800
Thanks for using Calculator.
*/