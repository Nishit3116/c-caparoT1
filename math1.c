#include<stdio.h>

int main()

{
	// For (x+y)² =  (x*x) + (2*x*y) + (y*y)
	int x,y,ans;
	
	printf("Please enter your value of a = ");
	scanf("%d",&x);
	
	printf("\nPlease enter your value of b = ");
	scanf("%d",&y);
	
	ans = (x*x) + (2*x*y) + (y*y);
	
	printf("\nyour ans is = %d ",ans);
	return 0;
	
}
