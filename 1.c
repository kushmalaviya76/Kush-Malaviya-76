#include<stdio.h>
main()
{
	int x,y,ans;
	
	printf("\n Enter The Value Of X :- ");
	scanf("%d",&x);
	
	printf("\n Enter The Value Of Y :- ");
	scanf("%d",&y);
	
	ans = (x*x)+(2*x*y)+(y*y);
	
	printf("\n Answer :- %d",ans);
}