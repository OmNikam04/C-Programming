/*Program to print pattern like
*
* *
* * * 
* * * *
*/
#include<stdio.h>

int main()
{
    int row , i, j;
    scanf("%d",&row);
    for ( i = 0; i <= row; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}