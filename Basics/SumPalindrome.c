#include <stdio.h>

int Reverse(int value)
{
    int r,sum=0;
    while(value!=0)
    { 
        r = value%10;
        sum = sum*10+r;
        value = value/10;  
    }
    return sum;
}

int Palindrome(int total)
{
    int reverse=Reverse(total);

    if(total==reverse)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{
    int value=77;
    int ReverseValue = Reverse(value);
    
    int total = value+ReverseValue;
    Palindrome(total)?printf("Palindrome"):printf("Not a palindrome");
}