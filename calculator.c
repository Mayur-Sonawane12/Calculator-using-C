#include<stdio.h>
int main()
{
    int a,b;
    char choice;
    printf("--------- Operations ----------");
    printf("\n+");
    printf("\n-");
    printf("\n*");
    printf("\n/\n");

    printf("\nEnter the operation you want to perform: ");
    scanf("%c",&choice);

    switch (choice)
    {
    case '+':
        printf("\nEnter the values: ");
        scanf("%d%d",&a,&b);
        printf("\nThe addition is %d",a+b);
        break;
    
    case '-':
        printf("\nEnter the values: ");
        scanf("%d%d",&a,&b);
        printf("\nThe subtraction is %d",a-b);
        break;
    
    case '*':
        printf("\nEnter the values: ");
        scanf("%d%d",&a,&b);
        printf("\nThe multiplication is %d",a*b);
        break;

    case '/':
        printf("\nEnter the values: ");
        scanf("%d%d",&a,&b);
        printf("\nThe division is %d",a/b);
        break;
   
    default:
        printf("\n-----Invalid operation!\n");   
    }

}