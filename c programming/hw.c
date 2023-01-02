#include <stdio.h>
#include <math.h>
// lecture1
// int main(){
//     int a, b;
//     printf("enter a");
//     scanf("%d",&a);
//     printf("enter b");
//     scanf("%d",&b);
//     printf("perimetre of rectangle = %d",a+b+a+b);
//     return 0;
// }

// q2
// int main(){
//     int n;
//     printf("enter a size");
//     scanf("%d",&n);
//     printf("cube %d",n*n*n);
//     return 0;
// }

// lecture2
// 1q
// int main()
// {
//     int a, b, c;
//     printf("enter a");
//     scanf("%d", &a);
//     printf("enter b");
//     scanf("%d", &b);
//     printf("enter c");
//     scanf("%d", &c);
//     printf("average of three number %f",a+b+c/3.0);
//     return 0;
// }

// 2q
// int main(){
//     char cw;
//     printf("enter a char");
//     scanf("%c",&cw);
//     printf("digit %c",cw);
//     return 0;
// }

// 3q
// int main(){
//     int a,b;
//     printf("enter a");
//     scanf("%d",&a);
//     printf("enter b");
//     scanf("%d",&b);
//     printf("smallest %d",a>b);
//     return 0;}

// 3ecture hwww
// int main()
// {
//     int n;
//     printf("enetr number");
//     scanf("%d",&n);
//     if(n>=1){
//         printf("number is natural number");
//     }
//     else{
//         printf("not natural number");
//     }
//     return 0;
// }

// lecture4
// int main(){
// int n;
// printf("enter number of row :");
// scanf("%d",&n);
// for(int i=1; i<=n;i++){
//     for(int j=0; j<=n; j++ ){
//         printf("*");
//     }
//  printf("\n");
// }
// return 0;

// }

// q2
// int main()
// {
//     int n;
//     printf("enter number :");
//     scanf("%d", &n);
//     int count = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             count++;
//         }
//     }
//     if (count == 2)
//     {
//         printf("prime \n");
//     }
//     else
//     {
//         printf("not prime");
//     }
//     return 0;
// }

// q3
int main()
{
    int n, a, b,c;
    printf("enter starting number of range \n:");
    scanf("%d", &a);
    printf("enter ending number of range  \n:");
    scanf("%d", &b);
    printf("prime number between %d and %d  are : \n", a, b);
    
    for (n = a; n <= b; n++)
    {
         c=0;
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                c++;
                break;
            }
        }
        if (c == 0 && n != 1)
        {
            printf("%d \n", n);
        }
    }
    printf("\n");
    return 0;
}