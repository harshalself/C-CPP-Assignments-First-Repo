// NAME : HARSHAL PATIL ; ROLL NO : 37
// ASSIGNMENT 1

#include<stdio.h>
int main()
{
	float mrp,dis,sp,dp,tax,tp,lp;
	
	printf("\n Enter MRP : $");
	scanf("%f",&mrp);
	printf("\n Enter DISCOUNT in PERCENT: ");
	scanf("%f",&dis);
	printf("\n Enter TAX in PERCENT : ");
	scanf("%f",&tax);
		
	dp=mrp-((dis*mrp)/100);
	lp=dp+((dp*tax)/100);

	printf("\n DISCOUNTED PRICE \t: $%f",dp);
	
	printf("\n AMOUNT TO BE PAID\t: $%f",lp);
	
	return 0;	
}

 /*Enter MRP : $100 

 Enter DISCOUNT in PERCENT: 10

 Enter TAX in PERCENT : 10

 DISCOUNTED PRICE       : $90.000000
 AMOUNT TO BE PAID      : $99.000000*/