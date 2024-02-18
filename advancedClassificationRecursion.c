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
 * The function 'isPalindrome' get a number and return true if it's palindrome and false if isn't.
 */ 
int isPalindrome(int x){
    int reverse = isPalindromeRec(x, 0); 
    if(x==reverse)
        return TRUE;
    return FALSE;
}

/**
 * The assistance function 'isPalindromeRec' get a number and another null number.
 * The fubction return the second number which contain the first but with *opposite digits*. 
*/
int isPalindromeRec (int x, int rev){
    if(x==0)
        return rev;
    rev=rev*10+x%10;
    return isPalindromeRec(x/10, rev);
}

/**
 * The function 'isArmstrong' get a number and return true if it's armstrong and false if isn't.
*/
int isArmstrong(int x){
    int sumPowers = armsRec(x, digits(x));
    if(x==sumPowers)
        return TRUE;
    return FALSE;
}

/**
 * The assistance function 'armRec' get a number and his count's digits.
 * The function return the sum of powers of each digit in x.
*/
int armsRec(int x, int d){
    if(x==0)
        return 0;
    return power(x%10,d) + armsRec(x/10, d);
}

