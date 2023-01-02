
#include <stdio.h>
#include <math.h>
// 1q
// int main()
// {
//     float radius;
//     printf("enter a number :");
//     scanf("%f", &radius);

//     printf(" area of circle :%f \n", 3.14 * radius * radius);
//     printf( "circumference of circle :%f", 2 * 3.14 * radius);
//     return 0;
// }

// 2q
// int main(){
//     char a;
//     printf("enter a character :");
//     scanf("%c",&a);
//     printf("ascaii value is: %c=%d",a,a);
//     return 0;
// }

// 3Q
// int main(){
//     int hight,base;
//     printf("enter hight & base :");
//     scanf("%d%d",&hight,&base);
//     printf("the area of trangle is : %d \n",(hight*base)/2);
//     return 0;
// }

// 4q
// int main(){
//     char fname[20],mname[20],lname[20];
//     printf("enetr first name ,middile name & last name :");
//     scanf("%s%s%s",&fname,&mname,&lname);
//     printf("Abbreviated name : %c.%c.%s \n",fname[0],mname[0],lname);
//     return 0;
// }

// 5q
// int main()
// {
//     int principal, rate, time;
//     printf("enter principal rate and time :");
//     scanf("%d%d%d", &principal, & rate, &time);
//     printf("simple interest is : %d", (principal * rate * time)/100);
//     return 0;
// }

// 6q
int main()
{
    int basicsalary, HRA, otherallowances;
    printf("enter basic salary :");
    scanf("%d", &basicsalary);

    HRA = (basicsalary * 5) / 100;
    // HRA---house rant allowances

    otherallowances = (basicsalary * 10) / 100;

    int grosssalary = basicsalary + HRA + otherallowances;
    printf(" gross salary is :%d \n", grosssalary);
    return 0;
}