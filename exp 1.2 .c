/*
Exp NO: 1.2
Title:WAP to get student PCM marks
        from the user and find the average
 Name: Siddiqui Obaidullah Abdul Qayyum
UIN: 241P025
 Div:  C
*/
int main() {
    int phy, chem, math, avg;
    printf("\t\t\tPCM Marks Calculator \n\n\n");
    //Taking PCM marks from user
    printf("Enter Your physics Marks: ");
    scanf("%d", &phy);
    printf("Enter Your Chemistry Marks: ");
    scanf("%d", &chem);
    printf("Enter Your Maths Marks: ");
    scanf("%d", &math);
    //Printing average score
    avg (phy+chem+math)/3;
    printf("Your average score is %d\n", avg);
    if (avg> 50) (
            printf("You are Eligible for Admission");
    }
else {
    printf("You are Not Eligible for Admission");

}
return 0;
/* OUTPUT
PCM Marks Calculator
Enter Your physics Marks: 60
 Enter Your Chemistry Marks: 72
Enter Your Mahts Marks: 80
Your average score is 70
You are Eligible for Admission
