/*
Exp NO: 6
Title: WAP to efine a counter function
to print how many times the
function is called use storage classes.
 Name: Siddiqui Obaidullah Abdul Qayyum 
UIN: 241P025
Div: C
*/
// Counter function
void counter () {
}
static int x = 0;
x++; // Increment call count
 printf("Called %d times\n", x);
  int main() {
printf("\t\t\t\t\t*****Counter Function*****\n");
counter ();
counter ();
counter ();
counter ();
counter ();
}
/*OUTPUT
********Counter Function********
Called 1 times
Called 2 times
Called 3 times
Called 4 times
Called 5 times