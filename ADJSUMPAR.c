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
	        int a;
	        scanf("%d",&a);
	        arr[j]=a;
	    }
	    int count=0;
	    for(int j=0;j<n;j++)
	    {
	        if(arr[j]==1)
	        {
	            count++;
	        }
	    }
	    if (count%2!=0 && count>0) printf("NO\n");
	    
	    if(count%2==0 || count==0)
	    {
	        printf("YES\n");
	    }
	}

}

