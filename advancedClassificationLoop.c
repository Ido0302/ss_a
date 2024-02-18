#include "NumClass.h"

/**
 * The assistance function 'digits' get a number and return the count of digits in number.
*/
int digits(int x){
    int dig = 0;
    while(x>0)
    {
        dig++;
        x=x/10;
    }
    return dig;
}

/**
 * The assistance function 'power' get two numbers and return the first power the second. 
*/
int power(int x, int p){
    int power=1, i;
    for ( i = 0; i < p; i++){ power*=x; }
    return power;
}

/**
 * The function 'isArmstrong' get a number and return true if it's armstrong and false if isn't.
*/
int isArmstrong(int x){
    int d = digits(x);
    int sumPowers=0, x1=x, x2, i;    //The varriable 'sumPowers' conatain the sum of powers of each digit in x.        
    for ( i = 0; i < d; i++)
    {
        x2=x1%10;
        sumPowers+=power(x2, d);
        x1=x1/10;
    }
    if(x==sumPowers)
        return 1;
    return 0;
}

/**
 * The function 'isPalindrome' get a number and return true if it's palindrome and false if isn't.
 * The function make an array that each cell in the array contain digit of x (left to right)
 * The function compare between arr[0] to arr[n], arr[1] to arr[n-1] and so on...
*/
int isPalindrome(int x){
    int x1=x, i;
    int d = digits(x);
    int arr[d];
    for ( i = 0; i < d; i++)
    {
        arr[i]=x1%10;
        x1=x1/10;
    }
    int j, k;
    for ( j = 0,k=d-1; j < k; j++, k--)
    {
        if(arr[j]!=arr[k])
        return FALSE;
    }
    return TRUE;
     
}