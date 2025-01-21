/*
Exp NO: 3
Title: WAP to design a menu driven calculator 
Name: Siddiqui Obaidullah Abdul Qayyum
UIN : 241P025
Div : C
*/
int main() {
float nl, n2, result;
int op:
char ch;
printf("\t\t\t***Calculator***\n\n\n");
printf("Enter Number according to operation.\n"); 
printf("Addition:1\nSubtraction:2\nMultiplication:3\nDivision:4\nModulus:5\n\n");
start:
 //goto label
printf("Enter first number: ");
scanf("%f", &nl);
printf("Enter Operation number: ");
 scanf("%d", &op);
printf("Enter Second number: ");
scanf("%f",&n2);
switch (op) {
case 1:
result = nl + n2;
printf("%.2f+%.2f= %.2f", nl, n2,
result);
break;

case 2:
result);
result nl - n2;
printf("%.2f8.2 %.2f", nl, n2,
break;
case 3:
result nl n2;
printf("%.2f8.2%.2f", nl, n2,
result);
5 break;
case 4:
if (n2!=0){
result = nl/n2;
printf("%.2f/%.2f = %.2f",nl, n2,
result);
=}
B else{
=}
printf("Division of zero is Invalid");
5 break;
case 5:
result = (int) nl = (int) n2;
printf("%d mod id = %d", (int) nl,
O (int) n2, (int) result);
B}
break;
default:
printf("Invalid Operation");
printf("\nDo you want to continue (Y/N): "); 
getchar()
5 scanf("%c", &ch);
// goback to start of the menu
= if (ch== 'y' || ch == 'Y'){
else
goto start;

printf("\nThanks for using calculator."); 
return 0;
}
/*OUTPUT
***Calculator***
Enter Number according to operation.
Addition:1
Subtraction:2
Multiplication:3
Division:4
Modulus:5
Enter first number: 5
Enter Operation number:
4 Enter Second number:
O Division of zero is Invalid
Do you want to continue (Y/N): n
Thanks for using calculator.
 */