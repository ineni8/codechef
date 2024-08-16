#include <stdio.h>

int main(void) {
   int t;
   scanf("%d",&t);
   for(int i=0;i<t;i++)
   {
       char s[100000];
       scanf(" %s",s);
       int count=0;
       for(int j=0;s[j]!='\0';j++)
       {
          if(s[j]=='<' && s[j+1]=='>')
          {
              count++;
          }
       }
         printf("%d\n",count);
   }

}

