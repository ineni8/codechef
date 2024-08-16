#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int n;
	    scanf("%d",&n);
	    int arr[n];
	    for(int j=0;j<n;j++)
	    {
	        scanf("%d",&arr[j]);
	    }
	    int s=0;
	    for(int j=0;j<n;j++)
	    {   
	        int count=0;
	        for(int k=0;k<n;k++)
	        {
	            if(arr[j]==arr[k])
	            {
	                count++;
	            }
	        }
	        if(s<count)
	        {
	            s=count;
	        }
	    }
	    printf("%d\n",n-s);
	}
}

