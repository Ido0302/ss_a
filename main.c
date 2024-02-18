#include <stdio.h>
#include "NumClass.h"

int main(){
int a,b;
printf("Please enter two numbers: \n");
scanf("%d", &a);
scanf("%d", &b);
int i;
printf("The prime numbers between %d to %d are: ", a,b);
for ( i = a; i <= b; i++){
    if(isPrime(i))
        printf("%d, ", i);
  }
printf("\n");
printf("The armstrong numbers between %d to %d are: ", a,b);
for ( i = a; i <= b; i++){
    if(isArmstrong(i))
        printf("%d, ", i);
    }
printf("\n");
printf("The strong numbers between %d to %d are: ", a,b);
 for ( i = a; i <= b; i++){
    if(isStrong(i)) 
        printf("%d, " ,i);
    }
 printf("\n");
 printf("The palindrom numbers between %d to %d are: " ,a,b);
 for ( i = a; i <= b; i++){
    if(isPalindrome(i))
        printf("%d, " ,i);
         }
 printf("\n");

    return 0;
}