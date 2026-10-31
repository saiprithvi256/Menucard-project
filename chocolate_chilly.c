#include<stdio.h>
int main()
{
    int p1,p2,chocolate=13;
    printf("\t\tChocolate chilly Game\t\t\n\n");
    printf("Total chocolate=13\n\n");
     
    while(chocolate>0)
    {
        printf("Player 1 turn\n");
        printf("Enter your choice (1-3):\n");
        scanf("%d",&p1);
        if(p1<1 || p1>3 || p1>chocolate)
        {
            printf("enter valid number\n");
            continue;
        }
        chocolate=chocolate-p1;
        
        if(chocolate==0)
        {
            printf("The chocolates are over *Player 2* got chilly *Player 1* won\n");
            break;
        }
        printf("Chocolate Remaining=%d\n\n",chocolate);
        
        label:
        printf("Player 2 turn\n");
        printf("Enter your choice (1-3):\n");
        scanf("%d",&p2);
        if(p2<1 || p2>3 || p2>chocolate)
        {
            printf("enter valid number\n");
            goto label;
        }
        chocolate=chocolate-p2;
        
        if(chocolate==0)
        {
            printf("The chocolates are over *Player 1* got chilly *Player 2* won\n");
            break;
        }
        printf("Chocolate Remaining=%d\n\n",chocolate);
    } 
    return 0;   
}