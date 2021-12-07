#include "header.h"
#include <stdio.h> 
#include <stdlib.h>

int* makeArray()
{
    int n ; 
    printf("\nNumarul de elemente = ");
    scanf("%d",&n); 
    int* array = (int*)malloc(n*sizeof(int)); 
    for(int i = 0 ; i < n ; i++)
    { 
        printf("\nElementul %d = ",i+1); 
        scanf("%d",&array[i]);
    } 
    return array; 
}

void printArray(int* array)
{ 
    int i = 0 ; 
    while(array[i] != 0)
    { 
        printf("v[%d] = %d\n",i+1,array[i]); 
        i++; 
    } 
} 

void freeArray(int* array)
{ 
    int i = 0; 
    while(array[i] != 0)
    { 
        free(&array[i]); 
        array[i] = 0; 
    } 
} 

int** makeMatrix()
{ 
    int n,m; 
    printf("\nDimension: \n");
    printf("n = ");
    scanf("%d",&n);
    printf("\nm = ");
    scanf("%d",&m);
    
    int** M = (int**)malloc(n*sizeof(int*));
    
    for(int i = 0 ; i < n ; i++)
    { 
        M[i] = (int*)malloc(m*sizeof(int));    
    } 
    
    for(int i = 0 ; i < n ; i++)
    { 
        for(int j = 0 ; j < m ; j++)
        { 
            printf("\nM[%d][%d] = ",i,j); 
            scanf("%d",&M[i][j]); 
        } 
    } 
    
    return M; 
}


void printMatrix(int** matrix)
{ 
    int n = sizeof(*matrix);
    int m = sizeof((*matrix)[0]) / sizeof(matrix[0][0]);
    printf("%d %d",n,m);
    
    for(int i = 0 ; i < n ; i++)
    { 
        for(int j = 0 ; j < m ; j++)
        { 
            printf("\nM[%d][%d] = %d",i,j,matrix[i][j]);
        } 
    }  
} 
