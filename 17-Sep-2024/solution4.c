// Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.

#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter Sides of Trinagle A,B and C: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b & b==c){
        printf("Equilateral Triangle");
    }else if (a==b || b==c || a==c)
    {
        printf("Isosceles Triangle");
    }else{
        printf("Scalene Triangle");
    }
    
    return 0;
}
