#include<stdio.h>

int main()

{
	//(x+y+z)3 =  (x*x*x) + (y*y*y) + (z*z*z) + (3*(x+y)*(y+z)*(z+x))
	
	int x,y,z,ans;
	
	printf("please enter the value of x = ");
	scanf("%d",&x);
	
	printf("please enter the value of y = ");
	scanf("%d",&y);
	
	printf("please enter the value of z = ");
	scanf("%d",&z);
	
	ans = (x*x*x) + (y*y*y) + (z*z*z) + (3*(x+y)*(y+z)*(z+x));
	
	printf("Your ans is = %d",ans);
	return 0;
	
}
