#include <stdio.h>

int main(void) {
int a;

scanf("%d",&a);
for(int i=1;i<=a;i++)
{   int s=0;
    int b;
    scanf("%d",&b);
    for(int j=1;j<=b;j++)
    {
      int c;
      scanf("%d",&c);
      if(s<c)
      {
          s=c;
      }
    }printf("%d\n",s);
}

}

