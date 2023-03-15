#include<stdio.h>

main(){
	int a,b,c;
	
	printf("enter the a value");
	scanf("%d",&a);
	
	printf("enter the b value");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("value of a:%d",a);
	printf("value of b:  %d",b);

}

