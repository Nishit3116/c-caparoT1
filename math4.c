#include<stdio.h>

main()

{
	//(x-y)3 =  (x*x*x) - (y*y*y) - ((3*x*y)*(x+y))
	
	int x,y,ans;
	
	printf("please enter the value of x = ");
	scanf("%d",&x);
	
	printf("please enter the value of y = ");
	scanf("%d",&y);
	
	ans = (x*x*x) - (y*y*y) - ((3*x*y)*(x+y));
	
	printf("Your ans is = %d",ans);
	
}
