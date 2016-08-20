/*
  Factor: 
    The factors of a number are all the integers that can be multiplied together to produce that number. 
    For example, 1, 2, 3 and 6 are all factors of 6.
          
  Highest Common Factor(HCF) / Greatest Common Factor (GCF) / Greatest Common Divisor (GCD)/ Highest Common Divisor(HCD)/
  Greatest Common Measure (GCM) : 
    The HCF or GCD of two integers is the largest integer that can exactly divide both numbers (without a remainder). 
    For example, 1, 2, 4 are COMMMON factors of 8 and 12.
                  4 is HIGHEST common factor of 8 and 12
*/

#include<stdio.h>

int gcd_div(int , int );
int gcd_sub(int , int );

int main()
{
    printf("%i\n", gcd_div(10, 35));
    printf("%i", gcd_sub(10, 35));    
    return 0;

}

//division based version
int gcd_div(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

//subtraction based version
int gcd_sub(int a, int b)
{
    while(a != b)
    {
        if(a > b)
            a = a - b;
        else
            b = b - a;   
    }
    return a;
}
