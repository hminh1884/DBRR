#include<stdio.h>
#include<math.h>
int main()
{
    int phantu,e,n,t,p,soto, sobe,trunggian;
    printf("\nNhap p: "); scanf("%d",&p);
    printf("Nhap so phan tu trong mang: "); scanf("%d",&phantu);
    int A[phantu];
    printf("Nhap cac phan tu co gcd=1 \n");
    label:
        for(e=0;e<phantu;e++)
        {
            printf("A[%d] = ",e); scanf("%d",&A[e]);
            if(A[e]>p)
            {
                soto=A[e];sobe=p;
            }
            if(p>A[e])
            {
                soto=p; sobe=A[e];
            }
            if(p==A[e])
                goto label;
            while(sobe>0)
            {
                trunggian=soto%sobe;
                soto=sobe;
                sobe=trunggian;
            } 
            if(soto!=1)
            {
                printf("\nHay nhap lai tu dau!\n");
                goto label;
            }
        }
        printf("mang A = (");
        for(e=0;e<phantu;e++)
            printf("  %d  ",A[e]);
        printf(")");
        int B[phantu];
        for(e=0;e<phantu;e++)
        {
            int a,b,d,q,r,x,y,x1,x2,y1,y2;
            a=p; b=A[e];
            x1=0;x2=1;y1=1;y2=0;
            while (b>0)
            {
                q=a/b;
                r=a-q*b;
                x=x2-q*x1;
                y=y2-q*y1;
                a=b; b=r; x2=x1; x1=x; y2=y1; y1=y;
            }
            d=a; x=x2; y=y2;
            B[e]=y;
        }
        printf("\nKet qua: (");
        for(e=0;e<phantu;e++)
        {
			if (B[e]<0) B[e]=B[e]+p;
            printf(" %d ",B[e]);
    	}
		printf(")");
		return 0;
}