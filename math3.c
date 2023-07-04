#include<stdio.h>

main()

{
	//(x+y)3 =  (x*x*x) + ((3*x*y)*(x+y)) + (y*y*y)
	
	int x,y,ans;
	
	printf("please enter the value of x = ");
	scanf("%d",&x);
	
	printf("please enter the value of y = ");
	scanf("%d",&y);
	
	ans = (x*x*x) + ((3*x*y)*(x+y)) + (y*y*y);
	
	printf("Your ans is = %d",ans);
	
}
