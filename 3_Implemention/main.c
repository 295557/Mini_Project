#include"calculator.h"
int main(){
    printf("\t\tWelcome my calculator!!\n\n");
    int choice;
    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplication \n");
    printf("Enter 4 for Division \n");
    printf("Enter 5 for Modulus\n");
    printf("Enter 6  for square \n");
    printf("Enter 7  for cube \n");
    printf("Enter 8 for squareroot\n\n");
    printf("Enter 9 for simple interest \n");
    printf("Enter 10 for compund  interest \n");
    printf("Enter 11  to find roots of quadratic equation\n");
    printf("Enter 12 for  gcd of 2 numbers\n");
    while(1){    
    printf("\n\nEnter the operation you want to do: ");
    
    scanf("%d",&choice);
            
    switch(choice)
    {
                case 1:
                    addition();
                    break;
                case 2:
                    subtraction();
                    break;
                case 3:
                    multiplication();
                    break;
                case 4:
                    division();
                    break;
                case 5:
                    modulus();
                    break;
                case 6:
                    square();
                    break;
                case 7:
                    cube();
                    break;
                case 8:
                    squareroot();
                    break;
               case 9:
                	simple_interest();
                	break;
                
                case 10:
                	compound_interest();
                	break;
                
                case 11:
                	quadratic_equation();
                	break;
              case 12:
                	gcd();
                	break;
                case 0:
                    exit(0);
                default:
                    printf("\n enter the valid operation\n");
        }
    
    }
    return 0;
}
