#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
    int n,t,a,ran=0,i,m;
    srand(time(0));
    lap:
    printf("\nNhap n :"); scanf("%d",&n);
    m=n;
    if((n<3)|(n%2==0))
    {
        printf("\nSo n le va lon hon hoac bang 3, xin moi nhap lai!\n");
        goto lap;
    }
    printf("\nSo lan lap:"); scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("\n----------------\nLan lap %d",i);
            ran=rand() % (n-3)+2;
        a=ran;
        printf("\n ran = %d",a);
        int r,x,A;
        x=n-1; 
        int b;
        b=1; A=a;
        if(x==0) 
        {
            printf("\nr = b = 1");
        }
        int nhiphan,k[20],j=0,d;
        nhiphan=x;
        printf("\n");
        while(nhiphan>0)
        {
            k[j]=nhiphan%2;
            nhiphan=nhiphan/2;
            printf(" k[%d]=%d",j,k[j]);
            j++;
        }
        if(k[0]==1) b=a; 
        for(d=1;d<=j;d++)
        {
            A=(A*A)%m;
            if(k[d]==1)
                b=(A*b)%m;
            printf("\n %d %d %d",d,A,b);
        }
        printf("\nr = b= %d",b); 
        if(b!=1)
            printf("\nDay la hop so");
        else printf("\nDay l  so nguyen to");
    }
    return 0;
}