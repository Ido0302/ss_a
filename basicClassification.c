#include "NumClass.h"

/**
 * The function 'isPrime' get a number and return true if it's prime and fslse if isn't.
*/
 int isPrime(int x){
    if(x<1)
    return FALSE;
    int i;
    for( i=2; i*i<=x; i++){
        if(x%i==0)
        return FALSE;
    } 
    return TRUE;
}

/**
 * The assitance function 'factorial' get a number and return the factorial of it.
*/
int factorial(int x){
    int i, fact=1;
    for ( i = 2; i <= x; i++)
        {
          fact*=i;
        }
        return fact;
}

/**
 * The function 'isStrong' get a number and return true if it's strong and fslse if isn't.
*/
int isStrong(int x){
    int x1 = x;
    int sumFactorials=0;  //The varriable 'sumFactorials' caontain the sum of factorials of each digit in x.
    while (x1>0)
    {
        int x2 = x1%10;        
        sumFactorials+=factorial(x2);
        x1=x1/10;
    } 
    if(x==sumFactorials)
        return TRUE;
    return FALSE;
}

