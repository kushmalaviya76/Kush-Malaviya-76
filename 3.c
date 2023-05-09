#include<stdio.h>
main()
{
	int x,y,ans;
	
	printf("\n Enter The Value Of X :- ");
	scanf("%d",&x);
	
	printf("\n Enter The Value Of Y :- ");
	scanf("%d",&y);
	
	ans = (x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);
	
	printf("\n Answer :- %d",ans);
}