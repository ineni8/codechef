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
	      int c;
	      scanf("%d",&c);
	      arr[j]=c;
	    }
	    for(int j=0;j<a;j++)
	    {
	        if(arr[j]<=b)
	        {
	           b=b-arr[j];
	           printf("1");
	        }
	        else if(arr[j]>b)
	        {
	            printf("0");
	        }
	    }
	    printf("\n");
	}

}

