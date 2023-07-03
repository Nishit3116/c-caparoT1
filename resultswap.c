#include<stdio.h>
 
 // For result swap
 
 int main()
  {

    float maths,chem,phy,com,total,ftotal,eng;
    
    
    
    
    printf("enter the value of maths = ");
    scanf("%f",&maths);
    
	printf("enter the value of chem = ");
    scanf("%f",&chem);
    
    printf("enter the value of phy = ");
    scanf("%f",&phy);
    
    printf("enter the value of com = ");
    scanf("%f",&com);
    
    printf("enter the value of eng = ");
    scanf("%f",&eng);
    
    total = maths+chem+phy+com+eng;
    ftotal = (total/500)*100;
    
    printf("your ftotal is  is = %.2f % \n",total);
    printf("your percentage  is = %f % ",ftotal); 
    
    return 0 ;

