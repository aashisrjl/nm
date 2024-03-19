//program to implement the composite trapozoida rule
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) exp(x)

int main()
{
	    printf("\n\n \t\t  Composite trapezoidal(fun)\n");
    printf("\t\t ====================================\n");

int i,n;
float a,b,h,sum=0.0,ict=0.0;
printf("\n Enter the initial value of x(a):");
scanf("%f",&a);
printf("\nEnter the final value of x(b):");
scanf("%f",&b);
printf("\nEnter the segment number(n):");
scanf("%d",&n);
h=(b-a)/n;
sum=(f(a)+f(b));
for(i=1;i<=n-1;i++)
sum+=f(a+i*h);
	ict=sum*h;

printf("\nThe integration value of function =%f",ict);

}
