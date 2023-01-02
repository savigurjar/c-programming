#include <stdio.h>
#include <math.h>
// area of square
// int main(){
//     int side;
//     printf("enter side");
//     scanf("%d" ,&side);
//     printf("area of square: %d",side*side);
//     return 0;
// }

// area of circle
// int main()
// {
//     float radius;
//     printf("enter radius");
//     scanf("%f", &radius);
//     printf("area of circle: %f", 3.14 * radius * radius);
//     return 0;
// }

// question number 5
// int main(){
//     int x;
//     printf("enter a number:");
//     scanf("%d",&x);
//     printf("%d \n",x%2==0);
// }

// question n.9
// int main(){
//     int marks;
//     printf("enter marks(0-100) : ");
//     scanf("%d",&marks);
//     // if(marks>=0 && marks<=30){
//     //     printf("failed \n");
//     // }
//     // else if(marks>=30 && marks<=100){
//     //     printf("passed \n");
//     // }
//     // else{
//     //     printf("wrong marks");
//     // }

//     // tarnorystatement
//     marks>30? printf("passed \n"):printf("failed");
//     return 0;
// }

// question number10
// int main()
// {
//     int marks;
//     printf("enter marks(0-100) : ");
//     scanf("%d", &marks);
//     if(marks>=90 && marks<=100){
//         printf("A+ \n");
//     }
//     else if(marks>=70 && marks<=90){
//         printf("A \n");
//     }

//     else if(marks>=30 && marks<=70){
//         printf("B \n");
//     }
//     else
//         printf("C");

//     return 0;
// }

// question n.11
// int main(){
//     int x=2;
//     // scanf("%d",x=2);
//     if(x==1){
//         printf("x equal to 1 \n");
//     }
//     else{
//         printf("x is not equal to 1");
//     }
//     return 0;
// }

// question n.12
// int main(){
//     char ch;
//     printf("enter character :");
//     scanf("%c",&ch);
//     if(ch>='A' && ch<='Z'){
//         printf("upper case \n");
//     }
//     else if(ch>='a' && ch<='z'){
//         printf("lower case \n");
//     }
//     else{
//         printf("not english letter");
//         }
//         return 0;
//     }

// loop
// for loop
// q13
// int main(){
//     for(int i=0; i<=10; i++){
//         printf("%d \n",i);

//     }
//     return 0;
// }

// while loop
// int main(){
//     int n ;
//     printf("enter any number from 0 to n :");
//     scanf("%d",&n);
//     int i=0;
//     while(i<=n){
//         printf("%d \n",i);
//         i++;
//     }
//     return 0;
// }

// do while loop for
// q15
// int main()
// {
//     int n;
//     printf("enter a number :");
//     scanf("%d", &n);
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         // printf("%d \n", i);
//         sum = sum + i;
//     }
//     printf("%d sum id:\n", sum);

//     // reverse
//     for(int i=n; i>=1; i--){
//         printf("%d \n",i);
//     }
//     return 0;
// }

// ques 16
// int main(){
//     int n;
//     printf("enter number");
//     scanf("%d",&n);
//     for(int i=1; i<=30; i++){
//         printf("the table is :%d \n",n*i,n*i*2,n*i*3);
//     }return 0;
// }

// question17
// int main()
// {
//     int n;
//     do
//     {
//         printf("enter number :");
//         scanf("%d", &n);
//         printf("%d \n", n);
//         if (n % 2 != 0)
//         {
//             break;
//         }
//     } while (1);
//     printf("khatam");
//     return 0;
// }

// question18
// int main()
// {
//     int n;
//     do
//     {
//         printf("enter number :");
//         scanf("%d", &n);
//         printf("%d \n", n);
//         if (n % 7 == 0)
//         {
//             break;
//         }
//     } while (1);
//     printf("khatam");
//     return 0;
// }

// question19
// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         if (i == 6)
//         {
//             continue;
//         }
//         printf("%d \n", i);
//     }
//     return 0;
// }

// question20
// int main()
// {
//     for (int i = 5; i <= 50; i++)
//     {
//         if (i % 2==0 )
//         {
//             continue;
//         }
//         printf("%d \n", i);
//     }
//     return 0;
// }

// question21
// int main(){
//     int n;
//     printf("enter number :");
//     scanf("%d",&n);
//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact *= i;
//     }
//     printf("factorial %d \n :",fact);
//     return 0;}

// question 22
// int main(){
//     int n;
//     printf("enter number :");
//     scanf("%d",&n);
//     for(int i=10; i>=1; i--){
//         printf("reverse table : %d \n",i*n);
//     }
//     return 0;
// }

// question23
// int main(){
//     int sum=0;
//     for(int i=5; i<=50; i++){
//         sum += i;
//     }
//     printf("sum is: %d \n ", sum);
//     return 0;
// }
