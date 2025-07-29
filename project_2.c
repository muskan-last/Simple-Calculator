#include<stdio.h>
#include<stdlib.h>
    int simple_calculator_menu(){
    printf("\n*-------------------------------------------------*");
    printf("\n\tWELCOME TO THE SIMPLE CALCULATOR PROGRAM \n");
    printf("*-------------------------------------------------*");
    printf("\n1. addition \n 2. substraction \n 3. multiplication \n 4. division \n 5. modulas \n 6. exit");
    }

    double division(double num1,double num2){
        if(num2<=0){
               fprintf(stderr,"invalide inpute");
               
        }else{
            num1/num2;
        }
    }

    int modulas(int num1 ,int num2){
           if(num2<=0){
            fprintf(stderr,"invalide input..");
           }else{
            num1%num2;
           }
    }
    int main(){
         int num1,num2;
         int choice;
         float result;
         while(1){
            simple_calculator_menu();
             printf("\nenter your choice in operations : ");
            scanf("%d",&choice);

            if(choice==6){
                break;
            }

         printf("\nenter the first value : ");
         scanf("%ld",&num1);
         printf("enter the second value : ");
         scanf("%ld",&num2);

         switch (choice){
            case 1://addition
              result=num1+num2;
              //printf("the sum of %d and %d is : %d",num1,num2,num1+num2);
            break;
            case 2: //substraction
             result=num1-num2;
             
            break;
            case 3://multiplication
              result=num1*num2;
             
            break;
            case 4://divide
              result= division(num1,num2);
            
            break;
            case 5://modulas
              result=modulas(num1,num2);
              
            break;
         }
         printf("\nthe result of the operation is : %.2f ",result);
        }

    return 0;
}

