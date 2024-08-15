#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    scanf("%d%d",&a,&b);
	    int arr[a];
	    for(int j=0;j<a;j++)
	    {
	      scanf("%d",&arr[j]); 
	    }
	    int extra=0,f,r=0;
	    for(int j=0;j<a;j++)
	    {
	        if(arr[j]>b)
	        {
	           extra+=(arr[j]-b);
	           continue;
	        }
	   else if(arr[j]<=b && extra>=b-arr[j])
	        {
	            extra-=(b-arr[j]);
	            continue;
	        }
	   else if(arr[j]<=b && extra<b-arr[j])
	        {
	            printf("NO %d\n",j+1); 
	            r=8;
	            break;
	        }
	    }
	    if(r==0)
	    {
	        printf("YES\n");
	    }
	}

}

