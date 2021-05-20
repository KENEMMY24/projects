#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list;
    int a=20, b=25, c=10, d=16, e=20;

    printf("WELCOME TO RONNIE'S RESTAURANT!\n");
     printf("WE SHALL BE GLAD TO KNOW WWHAT YOU WOULD LIKE TO HAVE FOR LUNCH!\n");
     printf("1. Deep Fried Fish!     @ $20\n");
     printf("2. Deep Fried Chicken!  @ $25\n");
     printf("3. Chips!               @ $10\n");
     printf("4. Samosas!             @ $16\n");
     printf("5. Meat pie!            @ $20\n\n");


     printf("Please Select your choices by entering the dish number below.. int the format (e.g. 123)\n");
     printf("NB: Please Enter The Number Choices In Order!\n");
     scanf("%d", &list);

     if (list==123){printf("YOUR TOTAL BILL IS $%d\n\nTHANKS FOR COMING\n\nHAVE A NICE MEAL DEAR VALUED CUSTOMER!\n", a + b + c);}
        else if(list==124){printf("YOUR TOTAL BILL IS $%d\n\nTHANKS FOR COMING\n\nHAVE A NICE MEAL DEAR VALUED CUSTOMER!\n", a + b + d);}
        else if(list==125){printf("YOUR TOTAL BILL IS $%d\n\nTHANKS FOR COMING\n\nHAVE A NICE MEAL DEAR VALUED CUSTOMER!\n", a + b + e);}
        else if(list==134){printf("YOUR TOTAL BILL IS $%d\n\nTHANKS FOR COMING\n\nHAVE A NICE MEAL DEAR VALUED CUSTOMER!\n", a + c + d);}
        else if(list==135){printf("YOUR TOTAL BILL IS $%d\n\nTHANKS FOR COMING\n\nHAVE A NICE MEAL DEAR VALUED CUSTOMER!\n", a + c + e);}
        else if(list==145){printf("YOUR TOTAL BILL IS $%d\n\nTHANKS FOR COMING\n\nHAVE A NICE MEAL DEAR VALUED CUSTOMER!\n", a + d + e);}
        else if(list==234){printf("YOUR TOTAL BILL IS $%d\n\nTHANKS FOR COMING\n\nHAVE A NICE MEAL DEAR VALUED CUSTOMER!\n", b + c + d);}
        else if(list==235){printf("YOUR TOTAL BILL IS $%d\n\nTHANKS FOR COMING\n\nHAVE A NICE MEAL DEAR VALUED CUSTOMER!\n", b + c + e);}
        else if(list==245){printf("YOUR TOTAL BILL IS $%d\n\nTHANKS FOR COMING\n\nHAVE A NICE MEAL DEAR VALUED CUSTOMER!\n", b + d + e);}
        else if(list==345){printf("YOUR TOTAL BILL IS $%d\n\nTHANKS FOR COMING\n\nHAVE A NICE MEAL DEAR VALUED CUSTOMER!\n", c + d + e);}
     else {printf("THE FIGURES YOU HAVE ENTERED ARE ALTERED PLEASE!\n");}





    return 0;
}
