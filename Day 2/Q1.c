// Write a program to Find sum of digits of a number.  
// Q6 Write a program to Reverse a number. TCS, Infosys, Wipro 
// Q7 Write a program to Find product of digits. TCS, Infosys, Wipro 
// Q8 Write a program to Check whether a number is 
// palindrome. 
#include<stdio.h>
int main(){

    int x,r,sum=0;

    printf("enter the number :");

    scanf("%d",&x);

    while(x!=0){

        r=x%10;

        sum=sum+r;

        x=x/10;


    }

    printf("sum of digits = %d",sum);

    return 0;

}








