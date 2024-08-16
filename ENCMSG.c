#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for (int i=0;i<t;i++)
	{
	    int n;
	    scanf("%d",&n);
	    char s[100];
	    scanf("%s",s);
	    for(int j=0;j<n;j++)
	    {
	        if(s[j+1]!='\0')
	        {
	            char temp=s[j];
	            s[j]=s[j+1];
	            s[j+1]=temp;
	            j++;
	        }
	    }
	    for(int j=0;j<n;j++)
	    {
	            s[j]=(219-s[j]);
	    }
	    printf("%s",s);
	    printf("\n");
	}
}

