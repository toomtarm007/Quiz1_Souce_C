#include<stdio.h>
void main(){
    system("cls");

    int Coffee_n, Rice_n, Tea_n, Milk_n, Coke_n, sum, choose_option;


    do{
        printf("====Seven shop====\n");
        printf("[1] Coffee (35bath) [2] Rice (150bath) [3] Tea (135bath)\n");
        printf("[4] Milk (45bath)   [5] Coke (25bath)  [0] Quit\n");
        printf("Enter item of menu => ");
        scanf("%d",&choose_option);
        
        if(choose_option == 0 )
            break;

        switch(choose_option)
        {
        case 1:
            printf("Enter of Quantity: "); scanf("%d",&Coffee_n);
            sum = Coffee_n * 35;
            printf("Total price = %d\n",sum);
            break;   
        case 2:
            printf("Enter of Quantity: "); scanf("%d",&Rice_n);
            sum = Rice_n * 150;
            printf("Total price = %d\n",sum);
            break; 
        case 3:
            printf("Enter of Quantity: "); scanf("%d",&Tea_n);
            sum = Tea_n * 135;
            printf("Total price = %d\n",sum);
            break;   
        case 4:
            printf("Enter of Quantity: "); scanf("%d",&Milk_n);
            sum = Milk_n * 45;
            printf("Total price = %d\n",sum);
            break;   
        case 5:
            printf("Enter of Quantity: "); scanf("%d",&Coke_n);
            sum = Coke_n * 25;
            printf("Total price = %d\n",sum);
            break;   
        case 0:
            break;
        default:
            printf("Invalid Choose Option\n");
        } 
    }while(choose_option !=0);
}