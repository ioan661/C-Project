/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include "header.h"

int main(int argc,char* argv[])
{
    int op; 
    printf("What do y want to do? \n"
            "1 - Op w/ vectors \n"
            "2 - Op w/ matrix \n"
            "3 - Op w/ bits \n"
            " Option = "); 
    scanf("%d", &op);
    
    switch(op)
    { 
        case 1: 
            printf("\n\n\tY choose operation w/ vectors");
            int op; 
            int* array = makeArray(); 
            printArray(array);
            freeArray(array);
            break;
            
        case 2: 
            printf("\n\n\tY choose operation w/ matrices");
            int **mat = makeMatrix(); 
            printMatrix(mat);
            
        default: 
            break; 
    } 
    return 0; 
}
