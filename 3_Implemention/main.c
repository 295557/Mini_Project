#include"calculator.h"
int main(){
    printf("\t\tWelcome to the scientific calculator!!\n\n");
    int choice;
    printf("\n******* Press 0 to quit the program ********\n");
    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplication \n");
    printf("Enter 4 for Division \n");
    printf("Enter 5 for Modulus\n");
    printf("Enter 6  for square \n");
    printf("Enter 7  for cube \n");
    printf("Enter 8 for squareroot\n\n");
    
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
                case 0:
                    exit(0);
                default:
                    printf("\n enter the valid operation\n");
        }
    
    }
    return 0;
}
