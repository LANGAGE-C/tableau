/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int tableau[4];
    int i, dimension;
    printf("Nombre de case : \n");
    scanf("%d", &dimension);
    for(i=0; i<dimension; i++)
    {
        printf("Inserer la valeur numero %d \n", i+1);
        scanf("%d", &tableau[i]);
    }
    for(i=0; i <dimension; i++)
    {
        printf("%d", tableau[i]);
    }
    return 0;
}
 

