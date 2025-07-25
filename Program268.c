/*

Display the pattern using Recursion
*    *   *   * 

*/

#include<stdio.h>

void DisplayR()            // Display Recursion
{
    int iCnt = 1 ;          // Storage class : auto   

    if(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0 ;
}


/*
    OUTPUT

    *       *       *       *       *       *       *       *       *       *       *       *       *       *       *      **       *       *       *       *       *  
    *       *       *       *       *       *       *       *       *      **       *       *       *       *       *       *       *       *       *       *       *       
    *       *       *      **       *       *       *       *       *       *       *       *       *       *       *       *       *       *      **       *       *       
    *       *       *       *       *       *       *       *       *       *       *       *      **       *       *       *       *       *       *       *       *       
    *       *       *       *       *       *      **       *       *       *       *       *       *       *       *       *       *       *       *       *       *      
    **       *       *       *       *       *       *       *       *       *       *       *       *       *       *      **       *       *       *       *       *       
    *       *       *       *       *       *       *       *       *      **       *       *       *       *       *       *       *       *       *       *       *       
    *       *       *      **       *       *       *       *       *       *       *       *       *       *       *       *       *       *      **       *       *       
    *       *       *       *       *       *       *       *       *       *       *       *      **       *       *       *       *       *       *       *       *       
    *       *       *       *       *       *      **       *       *       *       *       *       *       *       *       *       *       *       *       *       *      
    **       *       *       *       *       *       *       *       *       *       *       *       *       *       *      **       *       *       *       *       *       
    *       *       *       *       *       *       *       *       *      **       *       *       *       *       *       *       *       *       *       *       *       
    *       *       *      **       *       *       *       *       *       *       *       *       *       *       *       *       *       *      **       *       *  
    ^C

*/