#include <stdio.h>

void main(void) {
	int num,k,c;
	printf("enter the vaulue of num,k and c:");
	scanf("%d %d %d",&num,&k,&c);
	int a[num],s=0,d=0;
	for( int i=0;i<num;i++)
	{
		printf("entries of array:");
	    scanf("%d",&a[i]);
	    s=s+a[i];
	}
	for( int i=0;i<num;i++)
	{
	    int c=0;
	    for(int j=1;j<=a[i];j++)
	    {
	        if(a[i]%j==0)
	        {
	            c++;
	        }
	    }
	    if(c==2)
	    {
	     d++;   
	    }
	}
	int ans=s*(k-d*c);
	printf("%d",ans);
}
