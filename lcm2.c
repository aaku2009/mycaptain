 /* C program to find LCM of two numbers using recursion
 */
 
#include <stdio.h>


/* Function declaration */
int lcm(int a, int b);


int main()
{
    int a, b, LCM;

    /* Input two numbers from user */
    printf("Enter any two numbers to find lcm: ");
    scanf("%d%d", &a, &b);
    
    /*
     * Ensures that first parameter of LCM function 
     * is always less than second 
     */
    if(a > b)
        LCM = lcm(b, a);
    else
        LCM = lcm(a, b);
        
    printf("LCM of %d and %d = %d", a, b, LCM);
    
    return 0;
}


/**
 * Recursive function to find lcm of two numbers 'a' and 'b'.
 * Here 'a' needs to be always less than 'b'.
 */
int lcm(int a, int b)
{
    static int multiple = 0;
    
    /* Increments multiple by adding max value to it */
    multiple += b;
    
    /*
     * Base condition of recursion
     * If found a common multiple then return the multiple.
     */
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else 
    {
        return lcm(a,b);
    }
}
