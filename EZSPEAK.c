#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int a;
	    scanf("%d",&a);
	    char s[a];
	    scanf("%s",s);
	    int h=0,g=0;
	    if(a<4)
	    {
	        printf("YES\n");
	        continue;
	    }
	    for(int j=0;j<a;j++){
	    if(h>=4)
	    {
	        break;
	    }
	        if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
	        {
	            h=0;
	        }
	        else{
	            h++;
	        }
	    }
	    if(h>=4)
	    {
	        printf("NO\n");
	    }
	    else printf("YES\n");
	}

}

