/*
Exp NO: 4
Title: WAP to find all the prime
numbers between two numbers
Name: Siddiqui Obaidullah Abdul Qayyum
UIN: 241P025
Div : C
*/
// Function to check number is prime int isPrime (int x)
if (x <= 1) return 0;
for (int i
= 2; i < x; i++) {
if (x % i == 0) {
}
}
return 1;
}
return 0;
int main() { int nl, n2;
printf("\t\t\t\t*****Find a Prime Number Between Two Number*****\n");
// Enter the Starting and Ending Number
printf("Enter the Starting Number: "); 
scanf("%d", &nl);
 printf("Enter the Ending Number: ");
  scanf("%d", &n2); 
  // Ensure start is less than end
   if (nl n2) { 
   printf("Invalid range. Start should be less than or equal to end.\n");
return 1;
// Exit with error
}
}
for (int i = 1; i <= n2; i++)
{
if (isPrime (i)) (

printf("%d", 1);
}
}
return 0;
/*
OUTPUT
*****Find a Prime Number Between Two Number*
Enter the Starting Number: 1
Enter the Ending Number: 10
23 57
