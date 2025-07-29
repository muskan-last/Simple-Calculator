#include<stdio.h>
#include<stdlib.h>
  
int simple_calculator(){
    int number1;
    int number2;
    int operation;
    int add,sub,multi,divi,po,ex;
    printf("*-------------------------------------------------*");
    printf("\n\tWELCOME TO THE SIMPLE CALCULATOR PROGRAM \n");
    printf("*-------------------------------------------------*");

    printf("\n\t1. addition \n 2. substraction \n 3. multiplication \n 4. division \n 5. power \n 6. exit");

    printf("\nenter a number : ");
    scanf("%d",&number1);
    printf("\nenter a number : ");
    scanf("%d",&number2);
    printf("\n\nenter the operation number want to perform : ");
    scanf("%d",&operation);

    switch(operation){
        case 1: printf("\nthe addition of %d and %d is : %d ",number1,number2,number1+number2);
        break;
         case 2: printf("the substraction of %d and %d is : %d ",number1,number2,number1-number2);
        break;
         case 3: printf("the multiplication of %d and %d is : %d ",number1,number2,number1*number2);
        break;
         case 4: printf("the division of %d and %d is : %d ",number1,number2,number1/number2);
        break;
         case 5: printf("the power of %d is : %d , the power of %d is : %d ",number1,number1*number1,number2 ,number2*number2);
        break;
         case 6: printf("EXIT !");
        break;

    }

}

int main(){

simple_calculator();

    return 0;
}

