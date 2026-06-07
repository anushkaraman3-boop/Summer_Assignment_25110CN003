// write a code to check whether the  given number is strong number 

#include <stdio.h>

int main(){

    int n , i , rem , d  , factorial = 1 , sum = 0;

    int x;
    

    printf("enter the number :");
    scanf("%d",&n);

    x=n;

    while(n!=0){

        d = n%10;
        factorial = 1;

        for (i = 1; i <= d; i++) {
        
            factorial = factorial * i;
        }

        sum = sum + factorial;

        rem = n/10;

        n = rem ;


         }

         printf("sum of the factorial of the number is %d \n",sum);

         if(x==sum){

            printf("it is a strong number ");
        }

        else{

            printf(" it is not a strong number");

        }
         


return 0;


}