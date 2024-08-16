#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int s[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &s[i]);
        }
        int g=s[0];
        for (int i = 0; i < n; i++) {
          if(g<s[i])
          {
              g=s[i];
          }
        }
        
        char v[n+1];
        scanf("%s", v);
      for(int i=0;i<n;i++)
      {
          if(v[i]=='0')
          {
            if(g>s[i])
            {
                g=s[i];
            }
          }
      }printf("%d\n",g);
    }
    return 0;
}
