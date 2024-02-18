#ifndef Num_Class_H
#define Num_Class_H

#define TRUE 1
#define FALSE 0;

int isArmstrong(int x);
int isPalindrome(int x);
int isPrime(int x);
int isStrong(int x);

//The fuctions below are assitant functions I added myself
int factorial(int x);  
int digits(int x);
int power(int x, int p);
int isPalindromeRec (int x, int rev);
int armsRec(int x, int d);

#endif
