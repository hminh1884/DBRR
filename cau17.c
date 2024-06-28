#include<stdio.h>
#include<math.h>
int main()
{
    int p,w,t;
    w=8;    p=2147483647;
    t =ceil(log2(p)/w);
    int a,b,i,A[t],B[t];
            printf("\nNhap a: "); scanf("%d",&a);
            printf("\nNhap b: "); scanf("%d",&b);
            for(i=t-1;i>=0;i--)
            {
                A[i]=a/pow(2,i*w);
                a=a-A[i]*pow(2,i*w);
                B[i]=b/pow(2,i*w);
                b=b-B[i]*pow(2,i*w);
            }
            printf("\n A = [");
            for (i=t-1;i>=0;i--) printf("%d ",A[i]);
            printf("]");
            printf("\n B = [");
            for (i=t-1;i>=0;i--) printf("%d ",B[i]);
            printf("]");
    int e=0,C[t];
    for(i=0;i<t;i++)
    {
        C[i]=(A[i]+B[i]+e)% (int)(pow(2,w));
        if ((A[i]+B[i]+e)>= (pow(2,w)))
            e=1;
        else e=0;
    }
    printf("\nTong = (%d,[",e);
    for(i=t-1;i>=0;i--) printf("%d ",C[i]);
    printf("])");
    return 0;
}