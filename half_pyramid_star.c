// ! Type number 1

/*Program to print pattern like
*
* *
* * * 
* * * *
*/
// #include<stdio.h>

// int main()
// {
//     int n , i, j;
//     scanf("%d",&n);
//     for ( i = 1; i <= n; i++)
//     {
//         for ( j = 1; j <= i; j++)
//         {
//             printf("*\t");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// ! Type number 2

/*Program to print pattern like
1
1   2
1   2  3
1   2  3  4
*/

// #include<stdio.h>

// int main()
// {
//     int n , i, j;
//     scanf("%d",&n);
//     for ( i = 1; i <= n; i++)
//     {
//         for ( j = 1; j <= i; j++)
//         {
//             printf("%d\t",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// ! Type number 3

/*Program to print pattern like
1
2   2
3   3   3
4   4   4   4
*/

// #include<stdio.h>

// int main()
// {
//     int n , i, j;
//     scanf("%d",&n);
//     for ( i = 1; i <= n; i++)
//     {
//         for ( j = 1; j <= i; j++)
//         {
//             printf("%d\t",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// ! Type number 4

/*Program to print pattern like
1
0   1
1   0   1
0   1   0   1
*/

// #include<stdio.h>

// int main()
// {
//     int n , i, j;
//     scanf("%d",&n);
//     for ( i = 1; i <= n; i++)
//     {
//         for ( j = 1; j <= i; j++)
//         {
//             if((i+j) % 2 == 0)
//                 printf("1\t");
//             else
//                 printf("0\t");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// ! Type number 5

/*Program to print pattern like
1
2   3
4   5   6
7   8   9   10
*/

// #include<stdio.h>

// int main()
// {
//     int n , i, j, a = 1;
//     scanf("%d",&n);
//     for ( i = 1; i <= n; i++)
//     {
//         for ( j = 1; j <= i; j++)
//         {
//             printf("%d\t",a++);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// ! Type number 6

/*Program to print pattern like
5
5   4
5   4   3
5   4   3   2
5   4   3   2   1
*/

// #include<stdio.h>

// int main()
// {
//     int n , i, j;
//     scanf("%d",&n);
//     for ( i = 1; i <= n; i++)
//     {
//         for ( j = 1; j <= i; j++)
//         {
//             printf("%d\t",n+1-j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// ! Type number 7

/*Program to print pattern like
5
4   4   
3   3   3
2   2   2   2
1   1   1   1   1
*/

#include<stdio.h>

int main()
{
    int n , i, j;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d\t",n+1-i);
        }
        printf("\n");
    }
    return 0;
}
