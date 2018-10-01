/* Program that will operate an ATM Machine for a bank
Author: Matthew Champion
Date: 09/11/2016
OS: Windows 10 x64
Compiler: Borland
*/

#include <stdio.h>
int main()
{
    int menu=0;
    int pin1=1;
    int pin2=2;
    int pin3=3;
    int pin4=4;
    
    int vpin1=1;
    int vpin2=2;
    int vpin3=3;
    int vpin4=4;
    
    int pincorrect=0;
    int pinincorrect=0;

    while (menu==0)
    {
        printf("Welcome. Please select an option from the menu below \n");
        printf("1. Verify PIN \n");
        printf("2. Change PIN \n");
        printf("3. Display number of correct/incorrect PIN attempts \n");
        printf("4. Exit\n");
        scanf("%d", &menu);
        flushall();
    }
    
    while ((menu<0) || (menu>4)) //while for options selected not on menu
    {    
        printf("Error: Please try again\n");
        printf("1. Verify PIN \n");
        printf("2. Change PIN \n");
        printf("3. Display number of correct/incorrect PIN attempts \n");
        printf("4. Exit\n");
        scanf("%d", &menu);
        flushall();
    }        
    
    while (menu==1)
    {
        printf("You have selected option 1: Verify PIN \n");
        printf("Please enter your 4 digit PIN. Press ENTER after each digit it entered \n");
        scanf("%d %d %d %d", &pin1,&pin2,&pin3,&pin4);
        flushall();
        printf("\nEnter PIN again to verify\n");
        scanf("%d %d %d %d", &vpin1,&vpin2,&vpin3,&vpin4);
        flushall();
                
        
            do
            {
                pinincorrect++;
                printf("Your PIN was not verified, please try again\n");
                printf("Please enter you 4 digit PIN \n");
                scanf("%d %d %d %d", &pin1,&pin2,&pin3,&pin4);
                flushall();
                printf("\nEnter PIN again to verify\n");
                scanf("%d %d %d %d", &vpin1,&vpin2,&vpin3,&vpin4);
                flushall();
            }  
            while ((pin1!= vpin1) || (pin2!= vpin2) || (pin3!= vpin3) || (pin4!= vpin4));   
                
            
            if ((pin1==vpin1)&&(pin2==vpin2)&&(pin3==vpin3)&&(pin4==vpin4))
            {
                printf("Thank you! Your PIN has been verified\n");
                pincorrect++;
                printf("Enter '0' to return to the main menu.\n");
                scanf("%d", &menu);
                flushall();
                
                if ((menu!=0) || (menu!=4))
                {
                    printf("ERROR: PLEASE TRY AGAIN \n");
                    scanf("%d", &menu);
                    flushall();
                }
                
            }
       
    }
        
    while (menu==2)
    {
        printf("You have selected option 2: Change PIN\n");
        printf("Please enter your existing PIN. Press ENTER after each digit is entered\n");
        scanf("%d %d %d %d", &pin1,&pin2,&pin3,&pin4);
        flushall();
        printf("\nEnter PIN again to verify\n");
        scanf("%d %d %d %d", &vpin1,&vpin2,&vpin3,&vpin4);
        flushall();
        
            do
            {
                pinincorrect++;
                printf("Your PIN was not verified, please try again\n");
                printf("Please enter you 4 digit PIN \n");
                scanf("%d %d %d %d", &pin1,&pin2,&pin3,&pin4);
                flushall();
                printf("\nEnter PIN again to verify\n");
                scanf("%d %d %d %d", &vpin1,&vpin2,&vpin3,&vpin4);
                flushall();
            }
            while ((pin1!= vpin1) || (pin2!= vpin2) || (pin3!= vpin3) || (pin4!= vpin4));
                
            
            if ((pin1==vpin1)&&(pin2==vpin2)&&(pin3==vpin3)&&(pin4==vpin4))
            {
                printf("Thank you! Your PIN has been verified\n");
                pincorrect++;
            }

        printf("Please enter your NEW PIN.Press ENTER after each digit is entered\n");
        scanf("%d %d %d %d", &pin1,&pin2,&pin3,&pin4);
        flushall();
        printf("\nEnter NEW PIN again to verify\n");
        scanf("%d %d %d %d", &vpin1,&vpin2,&vpin3,&vpin4);
        flushall();
        
            do 
            {
                pinincorrect++;
                printf("Your PIN was not verified, please try again\n");
                printf("Please enter you 4 digit PIN \n");
                scanf("%d %d %d %d", &pin1,&pin2,&pin3,&pin4);
                flushall();
                printf("\nEnter PIN again to verify\n");
                scanf("%d %d %d %d", &vpin1,&vpin2,&vpin3,&vpin4);
                flushall();
            }
            while ((pin1!= vpin1) || (pin2!= vpin2) || (pin3!= vpin3) || (pin4!= vpin4));
                
            
            if ((pin1==vpin1)&&(pin2==vpin2)&&(pin3==vpin3)&&(pin4==vpin4))
            {
                printf("Thank you! Your PIN has been verified\n");
                pincorrect++;
            }

    
            
    while (menu==3)
    {
        printf("hash %d,%d", pincorrect, pinincorrect);
    }
        
    printf("%d,%d", pincorrect, pinincorrect);
    
    getchar();
    return(0);
    
}
    
    

    