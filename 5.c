#include<stdio.h>
main()
{
	int x,y,z,ans;
	
	printf("\n Enter The Value Of X :- ");
	scanf("%d",&x);
	
	printf("\n Enter The Value Of Y :- ");
	scanf("%d",&y);
	
	printf("\n Enter The Value Of Z :- ");
	scanf("%d",&z);
	
	ans = (x+y+z)*(x+y+z)*(x+y+z);
	
	printf("\n Answer :- %d",ans);
}