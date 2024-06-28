#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
    int i,e,p,q,t,check;
    srand(time(0));
		p:
		check=0;
		p= 2+rand()%(999);	
		for(i=2;i<sqrt(p);i++)
		{
		if (p%i==0) check=1;
		}
		if (check==1) goto p;
		
		q:
		check=0;
		q= 2+rand()%(999);
		for(i=2;i<sqrt(q);i++)
		{
		if (q%i==0) check=1;
		}
		if (check==1) goto q;
		printf("Gia tri cua p= %d q= %d\n",p,q);
		printf("Nhung so a thoa man de bai la: ");
		
		int j=0,a,b,d,k,K[50];
		k=p;
		while (k>0)
    {
        K[j]=k%2;
        k=k/2;
        j++;
    }
    for(d=1;d<100;d++)
    {
    check=1;
	a=d;
	
    if (K[0]==1) b=a;

    for (i=1;i<j;i++)
    {
        a = (a*a) % q;
        if (K[i]==1)
        {
            b=(a*b) % q;
        }
    }
    
    	if (b<2) check=0;	
		for(i=2;i<sqrt(b);i++)
		{
			if (b%i==0) check=0;
		}
		if (check==1) printf("%d ",d);		
		
	}
		
		return 0;
		
		
}