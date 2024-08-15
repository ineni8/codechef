#include <stdio.h>

int main(void) {
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {
      int a,b;
      scanf("%d%d",&a,&b);
      if(a<=b)
      {
          printf("0\n");
      }
      else 
      { 
          int c=a-b;
          for(int j=1;;j++)
          {
              if(c<=(j*4))
              {
                  printf("%d\n",j);
                  break;
              }
          }
      }
  }

}

