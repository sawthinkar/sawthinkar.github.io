#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    float i=0,sum=0;
    clrscr();

    printf("Enter the value of series :- ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum = sum + 1/i;

    }
        printf("The Answer is :- %f",sum);

getch();
}
