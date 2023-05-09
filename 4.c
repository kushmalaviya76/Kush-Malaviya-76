#include<stdio.h>
main()
{
	int x,y,ans;
	
	printf("\n Enter The Value Of X :- ");
	scanf("%d",&x);
	
	printf("\n Enter The Value Of Y :- ");
	scanf("%d",&y);
	
	ans = (x*x)+(y*y)-(2*x*y);
	
	printf("\n Answer :- %d",ans);
}