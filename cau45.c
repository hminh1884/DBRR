#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
    int phantu,e,random=0,n,t;
    printf("\nNhap N: "); scanf("%d",&phantu);
    printf("So lan lap: "); scanf("%d",&t);
    int mang[phantu];
    srand(time(0));
    for (e=0;e<phantu;e++)
    {   lap:
        while(random>=0)
        {
            random = rand() ;
            if((random>=2)&&(random<1000))
                break;
        }
        n=random;
        int i;
        int r,s,trunggian;
        trunggian=n-1; r=trunggian; s=0;
        while (r>0)
        {
            if(r%2==1)
            {
                break;
            }
            r=trunggian/2;
            trunggian=r;
            s++;
        }
        for(i=1;i<=t;i++)
        {

            int a=0,ran;
            while(a>=0)
            {
                ran=rand();
                if((ran>=2)&&(ran<=(n-2)))
                break;
            }
            a=ran;
            int b, A,y,m;
            b=1; A=a; m=n;
            if(r==0) y=b; 
            int nhiphan,R[20],j=0,d=0;
            nhiphan = r;
            while (nhiphan>0)
            {
                R[j]=nhiphan%2;
                nhiphan= (nhiphan-R[j])/2;
                j++;
            }
        
            if(r==1) b=a;
        
            for(d=0;d<j;d++)
            {
                A=(A*A)%m;
                if(R[d]==1)
                b=(A*b)%m;
        
            }
        
            y=b;
            if((y!=1)&&(y!=n-1))
            {
                j=1;
               while((j<=(s-1))&&(y!=n-1))
                {
                    y=(y*y)%n;
                    if(y==1)
                    {
                     goto lap;
                    
                    }
                    j++;
                }
                if(y!=n-1)
                {
                    goto lap;
                    
                    
                }
                else mang[e]=n; 
            }
            else mang[e]=n;
        }
    
    }
    printf("\nCac phan tu trong mang la:\nA (");
    for (e=0;e<phantu;e++)
        printf("%d  ",mang[e]);
    printf(")");
    
    int vt,phu;
    for(e=0;e<phantu;e++)
    for(vt=e+1;vt<phantu;vt++)
    {
        if(mang[e]<mang[vt])
        {
            phu=mang[e];
            mang[e]=mang[vt];
            mang[vt]=phu;
        }
    }
    printf("\nMang sau sap xep:\nA (");
    for (e=0;e<phantu;e++)
        printf("%d  ",mang[e]);
    printf(")");
    int hieu,min=1000;
    for(e=0;e<phantu;e++)
    {
        hieu=mang[e]-mang[e+1];
        if(hieu<min)
            min=hieu;
    }
    printf("\nKhoang cach nho nhat la: %d",min);
    return 0;
}