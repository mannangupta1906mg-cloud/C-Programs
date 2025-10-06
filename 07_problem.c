#include<stdio.h>

int main(){
     int income;
     printf("Enter income: \n");
     scanf("%d", &income);
     if (income<250000){
        printf("There is no tax \n");
     }
     else if (income<500000 && income>250000){
        printf("Your tax will be 5% \n");
     }
     else if (income<1000000 && income>500000){
        printf("Your tax will be 10% \n");
     }
     else {
        printf("Your tax will be 30% \n");
     }
    return 0;
}