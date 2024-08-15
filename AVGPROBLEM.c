#include <stdio.h>

int main(void) {
int t;
scanf("%d",&t);
for(int i=0;i<t;i++)
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(((a+b)/2.0)>c)
    {
        printf("YES\n");
    }
    else printf("NO\n");
}

}

