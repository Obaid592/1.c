/*
Exp NO: 2.2
Title: WAP to find the sum of odd numbers
Name: Siddiqui Obaidullah Abdul Qayyum UIN: 241P025
Div: C
*/
int main() {
int nl, n2;
int sum = 0;
printf("\t\t\tSum of Odd numbers between Two Numbers\n\n\n");
//Taking Number range
printf("Enter First Number: ");
scanf("%d", &nl);
printf("Enter Second Number: ");
scanf("%d", &n2);
//Iterating through the range.
 for (int i = 1; i <= n2; i++) {
%
if(i 2 == 1) {
sum += i;
}
}
printf("The Sum of Odd numbers between %d and %d is %d", nl, n2, sum);
}
return 0;
/*OUTPUT
Sum of Odd numbers between Two Numbers
Enter First Number: 1
Enter Second Number: 50
The Sum of Odd numbers between 1 and 50 is 625
*/
