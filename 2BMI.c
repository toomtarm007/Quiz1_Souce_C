/*พงษธร,ดัชนีมวลกาย*/
//ดัชนีมวลกาย
#include<stdio.h>

void main(){

    system("cls");

    float h, w, bmi;
    printf("Enter a no of height : ");
    scanf("%f",&h);
    printf("Enter a no of weight : ");
    scanf("%f",&w);

    h = h / 100;
    bmi = (w/(h*h));
    
    printf("bmi = %.2f\n",bmi);   
    if(bmi >= 30) {
        printf("Fat");
    }
    else if(bmi >= 25){
        printf("Overload");
    }
    else if(bmi >= 20){
        printf("Healthy");
    }
    else{
        printf("below the rating");
    }
}