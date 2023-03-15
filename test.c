#include<stdio.h>

main(){
	int a,b;
	
     printf("value of a=");
     scanf("%d",&a);
     
     printf("value of b=");
     scanf("%d",&b);
     
     a=a+b;
     b=a-b;
     a=b-a;
     
     printf("%d",a);
     printf("%d",b);
     
}