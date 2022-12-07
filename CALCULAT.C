#include<stdio.h>
#include<conio.h>
int main()
{
int age;
float amount;
char gender,smoker;
clrscr();
printf("Enter your age\n");
scanf("%d",&age);
printf("Enter your gender M for male and F for female\n");
fflush(stdin);
scanf("%c",&gender);
printf("Enter Y if you are smoker and N if not\n");
fflush(stdin);
scanf("%c",&smoker);
if(age>=21&& age<=30)
{
amount=10000;
}
else if(age>=31&& age<=40)
{
amount=15000;
}
else if(age>=41&& age<=50)
{
amount=20000;
}
else if(age>=51&& age<=60)
{
amount=40000;
}
else
{
printf("Insurance not possible\n");
getch();
return 0;
}
if(gender=='m'&& smoker=='y')
{
amount=amount+((amount*10)/100.0);
}
else if(gender=='f'&& smoker=='n')
{
amount=amount-((amount*10)/100.0);
}
printf("Insurance amount is%f",amount);
getch();
return 0;
}