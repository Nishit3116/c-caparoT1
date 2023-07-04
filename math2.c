#include<stdio.h>

main()
{
	//(-y)² = (x*x) - (2*x*y) + (y*y)
	
	int x,y,ans;
	
	printf("please enter the value of x = ");
	scanf("%d",&x);
	
	printf("please enter the value of y = ");
	scanf("%d",&y);
	
	ans = (x*x) - (2*x*y) + (y*y);
	
	printf("Your ans is = %d",ans);
	
}
