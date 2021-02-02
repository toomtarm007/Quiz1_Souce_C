/*พงษธร,โปรแกรมเมนู*/
//MenuCal
#include<stdio.h>

void main(){

    system("cls");

    int num1, num2,sum,i,fact=1, choose_option;


    do{
        printf("Choose Your Option\n");
        printf("[1] Multtiplication\n[2] Calculate Triangular area\n[3] Calculate factorial\n[4] Exit\n");
        scanf("%d",&choose_option);
        
        if(choose_option == 4 )
            break;

        switch(choose_option)
        {
        case 1:
            printf("Enter num1: "); scanf("%d",&num1);
            printf("Enter num2: "); scanf("%d",&num2);
            printf("Sum of %d * %d = %d\n",num1, num2, num1*num2);
            break;   
        case 2:
            printf("Enter high: "); scanf("%d",&num1);
            printf("Enter wide: "); scanf("%d",&num2);
            sum = 0.5 * num1 *num2;
            printf("area of the triangular(0.5*%d*%d) = %d\n",num1, num2,sum);
            break; 
        case 3:
            printf("Enter number: "); scanf("%d",&num1);
            for (i = 1; i <= num1; ++i) {
            fact *= i;
            }
            printf("Factorial of %d = %d\n", num1, fact);
            break;   
        case 4:
            break;      
        default:
            printf("Invalid Choose Option\n");
        } 
    }while(choose_option !=4);
}