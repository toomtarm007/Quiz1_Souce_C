/*พงษธร,ReverseNumber*/
//Reverse number 
//ผลลัพธ์
//Enter Number: 9
//9 8 7 6 5 4 3 2 1

#include<stdio.h>
int main(){
    system("cls");

    int i, n;
    printf("Enter a no : ");
    scanf("%d",&n);

    printf("Even no. of %d terms are :- \n",n);
    for(i=0; i!=n; n--) {
        printf("%d ",n);
    }
    return 0;
}