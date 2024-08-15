#include <stdio.h>

int main(void) {

    int n;
    scanf("%d", & n);
    for (int i = 0; i < n; i++)
    {
       float a,b,c;
       scanf("%f%f%f",&a,&b,&c);
       if(((a*b)/2.0)<c)
       {
           printf("YES\n");
       }
       else printf("NO\n");
    }
}