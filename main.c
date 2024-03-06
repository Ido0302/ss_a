#include <stdio.h>
#include "NumClass.h"

int main(){
int a,b;
scanf("%d", &a);
scanf("%d", &b);
int i;
printf("The Armstrong numbers are:");
for ( i = a; i <= b; i++){
    if(isArmstrong(i)){
        printf(" ");
        printf("%d",i);
    }
}
printf("\n");
printf("The Palindromes are:");
for ( i = a; i <= b; i++){
    if(isPalindrome(i)){
        printf(" ");
        printf("%d",i);
    }
}
printf("\n");
printf("The Prime numbers are:");
for ( i = a; i <= b; i++){
    if(isPrime(i)){
        printf(" ");
        printf("%d",i);
    }
}
printf("\n");
printf("The Strong numbers are:");
for ( i = a; i <= b; i++){
    if(isStrong(i)){
        printf(" ");
        printf("%d",i);
    }
}
printf("\n");

    return 0;
}
