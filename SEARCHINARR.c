#include <stdio.h>

int main(void) {
int n,f,s=0;
 scanf("%d%d",&n,&f);
 int a[n];
 for(int i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(int j=0;j<n;j++)
 {
     if(a[j]==f)
     {
         s++;
     }
 }
 if(s>=1)
 {
     printf("YES");
 }
 else if(s==0) printf("NO");
 

}

