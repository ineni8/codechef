#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a,b,c,d,e,f;
        scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
        int ar[3]={a,b,c};
        int arr[3]={d,e,f};
        int s=0,h=0,q,r;
        for(int i=0;i<3;i++)
        {
            if(s<ar[i])
            {
                s=ar[i];
                q=i;
            }
            if(h<arr[i])
            {
                h=arr[i];
                r=i;
            }
        }
        int x=0,y=0;
        for(int i=0;i<3;i++)
        {
            if(x<ar[i] && i!=q)
            {
                x=ar[i];
            }
            if(y<arr[i] && i!=r)
            {
                y=arr[i];
            }
        }
        if((s+x)>(h+y))
        {
            printf("Alice\n");
        }
       else if(s+x==h+y)
        {
            printf("Tie\n");
        }
        else printf("Bob\n");
    }

}

