#include<stdio.h>
#include<math.h>
int main()
{
    int N,n;
    printf("Nhap N: "); scanf("%d",&N);
    for(n=4;n<=N;n++)
    {
        int m,i,j,dem,a[10],b[10], ktra=0;
        j=0;
        int check=1;

        m=n;
        for(i=2;i<=m;i++)
        {
            dem=0;
            while((m%i)==0)
            {
                m/=i;
                dem++;
            }
            if(dem>=1)
            {
                a[j]=i;
                b[j]=dem;
                if (b[j]>=2) check = 0;
                j++;
            }
        }
        if ((check==0)|(j<3))
        {
    
            ktra=1;
        }
        for(i=0;i<=j-1;i++)
        {
        if (((n%a[i])==0)&&((n-1)%(a[i]-1)!=0))
            {
                ktra=1;
            }
            
        else if ((n%a[i])==0&&((n-1)%(a[i]-1)==0)&&check!=0&&ktra!=1)
            ktra =0;
        }
        if (ktra==0&&check!=0) printf(" %d ",n);
    }
    return 0;
}