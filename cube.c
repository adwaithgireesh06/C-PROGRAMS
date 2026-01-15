#include<stdio.h>
int main() 
{  
int n, cube;
printf("TO FIND CUBE OF AN INTEGER NUMBER\n");
printf("------------------------------------\n");
printf("Please Enter any integer Value : "); 
scanf("%d", &n); 
cube=n*n*n; 
printf("\nCube of a given number %d is = %d", n,cube); 
return 0;
}
