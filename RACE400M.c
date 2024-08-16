#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        int f=(x<y)?x:y;
        int k=(f<z)?f:z;
        if(k==x)
        {
            printf("ALICE\n");
        }
        if(k==y)
        {
            printf("BOB\n");
        }
        if(k==z)
        {
            printf("CHARLIE\n");
        }
        
  
     }
     return 0;
}
