/*cau 28-29-30
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
}*/

/*cau 31
#include <stdio.h>
#include <math.h>
int main()
{
	int MSV, SBD,MSVd,MSVt,i,cduoi,ctren,check,done,b,k,a,K[50],j,n;
	cduoi=ctren=0;
	n=123456;			
	printf("Nhap MSV:"); scanf("%d",&MSV);
	printf("Nhap SBD: "); scanf("%d",&SBD);
	MSVd=MSVt=MSV;
	duoi:
	MSVd--;
	cduoi++;
	check=0;
	for(i=2;i<=sqrt(MSVd);i++)
	{
		if (MSVd%i==0) check=1;
	}
	
	if (check==1)
	{
		goto duoi;
	}
	check=0;
	tren:
	MSVt++;
	ctren++;
	check=0;
	for(i=2;i<=sqrt(MSVt);i++)
	{
		if (MSVt%i==0) check=1;
	}
	
	if (check==1)
	{
		goto tren;
	}
	if (cduoi<=ctren) MSV=MSVd;
	else MSV=MSVt;
	
	k=MSV;
    a=SBD;
    b=1;
	while (k>0)
    {
        K[j]=k%2;
        k=(k-K[j])/2;
        j++;
    }
    if (K[0]==1) b=a;
    for (i=1;i<j;i++)
    {
        a = (a*a) % n;
        if (K[i]==1)
        {
            b=(a*b) % n;
        }
    }

	printf(" %d ^ %d mod %d = %d",SBD,MSV,n,b);

}*/

/*cau 31
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ktsnt(int n)
{
   if(n<2){
    return 0;
   }
   for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
        return 0;
	}
	}
   return 1;
 }
int euclidmr(int e,int en)
{
  	int a,b,R;
  	a=e;
  	b=en;
  	while (b>0)
    {
        R = a%b;
        a=b;
        b=R;
    }
  return a;
 }
int tinhd(int e,int en)
{
	int q,r,x,y,x1=0,x2=1,y1=1,y2=0;
  while(e>0){
    q=en/e;
    r=en%e;
    x=x2-x1*q;
    y=y2-y1*q;
    en=e;
    e=r;
    x2=x1;
    y2=y1;
    x1=x;
    y1=y;
  }
  return(y2);
 }
int main()
{
    int p,q,n,en,e;
    printf("Nhap p>100:");	scanf("%d",&p);

	while(p<=100||ktsnt(p)==0)
		{
        printf("Nhap lai snt p >100:");	scanf("%d",&p);
    	}
    
	printf("Nhap snt q<500:");	scanf("%d",&q);
    
	while(q>=500||ktsnt(p)==0)
		{
        printf("Nhap lai snt q >100:");	scanf("%d",&q);
    	}
    	
    n=p*q;
    printf("n =%d",n);
    en=(p-1)*(q-1);
    printf("\ne(n)=%d",en);
    printf("\nNhap 1<e<e(n), nguyen to cung nhau voi e(n):");	scanf("%d",&e);
    
	while(e<=1||e>=en||euclidmr(e,en)!=1)
	{
        printf("\nnhap lai 1<e<e(n), nguyen to cung nhau voi e(n): ");	scanf("%d",&e);
    }
    
    printf("\nd=%d\n",tinhd(e,en));
    
	int m,a,k,K[50],b,i,j;
    j=0;
    printf("Nhap SBD: "); scanf("%d",&m);
    m=m+123;
    printf("Thong diep m = SBD + 123 = %d\n",m);
   
	k=e;
    a=m;
    b=1;
	while (k>0)
    {
        K[j]=k%2;
        k=(k-K[j])/2;
        j++;
    }
    
    if (K[0]==1) b=a;
    for (i=1;i<j;i++)
    {
        a = (a*a) % n;
        if (K[i]==1)
        {
            b=(a*b) % n;
        }
    }
    
    printf("\nBan ma c cua thong diep %d la: %d",m,b);

	k=tinhd(e,en);
    a=b;
    b=1;
	while (k>0)
    {
        K[j]=k%2;
        k=(k-K[j])/2;
        j++;
    }
    
    if (K[0]==1) b=a;
    for (i=1;i<j;i++)
    {
        a = (a*a) % n;
        if (K[i]==1)
        {
            b=(a*b) % n;
        }
    }
	

	printf("\nGiai mai thong diep la: %d",b);
    
    return 0;
}*/

/*cau 32
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ktsnt(int n)
{
   if(n<2){
    return 0;
   }
   for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
        return 0;
	}
	}
   return 1;
 }
int euclidmr(int e,int en)
{
  	int a,b,R;
  	a=e;
  	b=en;
  	while (b>0)
    {
        R = a%b;
        a=b;
        b=R;
    }
  return a;
 }
int tinhd(int e,int en)
{
	int q,r,x,y,x1=0,x2=1,y1=1,y2=0;
  while(e>0){
    q=en/e;
    r=en%e;
    x=x2-x1*q;
    y=y2-y1*q;
    en=e;
    e=r;
    x2=x1;
    y2=y1;
    x1=x;
    y1=y;
  }
  return(y2);
 }
int main()
{
    int p,q,n,en,e;
    printf("Nhap p>100:");	scanf("%d",&p);

	while(p<=100||ktsnt(p)==0)
		{
        printf("Nhap lai snt p >100:");	scanf("%d",&p);
    	}
    
	printf("Nhap snt q<500:");	scanf("%d",&q);
    
	while(q>=500||ktsnt(p)==0)
		{
        printf("Nhap lai snt q >100:");	scanf("%d",&q);
    	}
    	
    n=p*q;
    printf("n =%d",n);
    en=(p-1)*(q-1);
    printf("\ne(n)=%d",en);
    printf("\nNhap 1<e<e(n), nguyen to cung nhau voi e(n):");	scanf("%d",&e);
    
	while(e<=1||e>=en||euclidmr(e,en)!=1)
	{
        printf("\nnhap lai 1<e<e(n), nguyen to cung nhau voi e(n): ");	scanf("%d",&e);
    }
    
    printf("\nd=%d\n",tinhd(e,en));
    
	int m,a,k,K[50],b,i,j;
    j=0;
    printf("Nhap SBD: "); scanf("%d",&m);
    m=m+123;
    printf("Thong diep m = SBD + 123 = %d\n",m);
   
	k=e;
    a=m;
    b=1;
	while (k>0)
    {
        K[j]=k%2;
        k=(k-K[j])/2;
        j++;
    }
    
    if (K[0]==1) b=a;
    for (i=1;i<j;i++)
    {
        a = (a*a) % n;
        if (K[i]==1)
        {
            b=(a*b) % n;
        }
    }
    
    printf("\nBan ma c cua thong diep %d la: %d",m,b);

	k=tinhd(e,en);
    a=b;
    b=1;
	while (k>0)
    {
        K[j]=k%2;
        k=(k-K[j])/2;
        j++;
    }
    
    if (K[0]==1) b=a;
    for (i=1;i<j;i++)
    {
        a = (a*a) % n;
        if (K[i]==1)
        {
            b=(a*b) % n;
        }
    }
	

	printf("\nGiai mai thong diep la: %d",b);
    
    return 0;
}*/

/*cau 33
#include <stdio.h>
#include <math.h>

// Ham de ktra 
void ktra(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if(a[i]>1){
        	a[i]=0;
		}
		if(a[i]<0){
			a[i]=-1*a[i];
		}
        }
}

// Ham gan mang B thanh A
void gan(int A[], int B[], int n,int m) {
    for (int i = 0; i < n; i++) {
        A[i] = B[i];
    }
    for (int i = n; i < m; i++) {
        A[i] = 0; 
    }
}

// Ham tinh gia tri de xet
int xet(int b[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if(b[i]!=0) s+=b[i];;
    }
    return s;
}

// Ham lay do dai mang
int dodai(int a[], int n) {
    int m = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] != 0) {
            m = i + 1;
            break;
        }
    }
    return m;
}

// ham de tru da thuc
void tru(int A[], int B[], int C[], int n) {
    for (int i = 0; i < n; i++) {
        C[i] = A[i] ^ B[i]; 
    }
}

// Ham de nhan da thuc
void nhan(int A[], int B[], int m, int n, int temp[]) {
    for (int i = 0; i < m + n - 1; i++) {
        temp[i] = 0;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            temp[i + j] += A[i] * B[j]; 
        }
    }
}

// ham de chia
void chia(int a[], int b[], int m, int n, int q[], int r[]) {
    
    for (int i = 0; i < m; i++) {
        r[i] = a[i];
    }

    
    for (int i = 0; i < m - n + 1; i++) {
        q[i] = 0;
    }

    for (int i = m - 1; i >= n - 1; i--) {
        q[i - n + 1] = r[i] / b[n - 1];
        for (int j = 0; j < n; j++) {
            r[i - j] -= q[i - n + 1] * b[n - 1 - j];
        }
    }
}

// ham de in 
void print(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            printf("%dx^%d", a[i], i);
            if (i != n - 1) {
                printf(" + ");
            }
        }
    }
    printf("\n");
}

int main() {
    int a[4] = {1, 1, 0, 1}; // a(x) = x^3 + x + 1
    int b[3] = {1, 1, 1};    // b(x) = x^2 + x + 1
    int x[4] = {0,0,0,0}, y[4] = {0,0,0,0}, x1[4] = {0,0,0,0}, x2[4] = {1,0,0,0}, y1[4] = {1,0,0,0}, y2[4] = {0,0,0,0};
    int B = 7;
    int q[4];
        int r[4];
        int i=1;
    while (B>0) {
    	printf("lap lan thu %d:\n",i);
        int m=dodai(a,4);
        int n=dodai(b,3);
        printf("(%d,%d)\n",m,n);
        chia(a, b, m, n, q, r); 
        ktra(q, m - n + 1);
        ktra(r, m);
        printf("q:");
         print(q, m-n+1); 
         printf("r:");
         print(r, m);
        int dq = dodai(q, m - n + 1);
        int dr = dodai(r, m);
        
        int dx1 = dodai(x1, 4);
        printf("x:");
        int temp[9];
        nhan(q, x1, dq, dx1, temp);
        ktra(temp, dq + dx1 - 1);
	      
        tru(x2, temp, x, dq+dx1-1); 
        ktra(x,4);
         print(x, 4); 
        int dy1 = dodai(y1, 4);
        nhan(q, y1, dq, dy1, temp); 
        ktra(temp, dq + dy1 - 1);
        tru(y2, temp, y, dq+dy1-1); 
        int dy=dodai(y,4);
        ktra(y,dy);
        printf("y:");
        print(y, dy);  
        
        gan(a, b, n,m); 
        printf("a:");
        print(a, m); 
        
        gan(b, r, dr,n); 
        printf("b:");
          print(b, n); 
          
        gan(x2, x1, 4,4); 
        printf("x2:");
        int dx2=dodai(x2,4);
        print(x2, dx2); 
        
        gan(x1, x, 4,4);  
        printf("x1:");
        dx1=dodai(x1,4);
        print(x1, 4); 
    
        gan(y2, y1,4,4);
		printf("y2:"); 
        print(y2, 4); 

        gan(y1, y, 4,4); 
		printf("y1:"); 
        print(y1, 4); 
        
        printf("b:");
        B=xet(b,n); 
        printf("%d\n",B);
        i++;

    }

    printf("Da thuc nghich dao:\n");
    print(y2, 4); 

    return 0;
}*/

/*cau 34
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
}*/

/*cau 35
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int tinh(int a,int r,int n){
	int mang[100000];
	int m=0;
	int A=a;
	int b;
	if(r==1) b=a;
	while(r!=0){
		mang[m]=r%2;
		r/=2;
		m++;
	}
    if(mang[0]==1)  b=a;
    

		for(int i=1;i<m;i++){
			A=(A * A) % n;
			if(mang[i]==1){
				b=(A * b) % n;
			}     
		}
return b;
}
int main(){
	int n;
	int s=0;
	int t;
	srand(time(0));
	printf("Nhap n:");
	scanf("%d",&n);
	printf("Nhap t:");
	scanf("%d",&t);
	if(n==2||n==3)  {
      printf("N la so nguyen to");
      return 0;
   }
	int r=n-1;
	while(r%2==0){
		s++;
		r=r/2;
	}
	for(int i=1;i<=t;i++){
		int a=rand() % (n-3)+2;
		int y=tinh(a,r,n);
		if(y !=1 && y!=(n-1)){
			int j=1;
			while(j<=s-1 && y!=(n-1)){
				y=(y*y)%n;
				if(y==1){
					printf("Hop so\t");
					return 0;
				}
				j++;
			}
			if(y!=(n-1)){
				printf("Hop so\t");
				return 0;
			}
		}
}
printf("So nguyen to\t");
	return 0;
}*/

/*cau 36
#include<stdio.h>
#include<math.h> 
#include<string.h>
int main() 
{
    char t[1000],p[1000];
    int l[127]; 
    printf("\nNhap T: "); fgets(t,sizeof(t),stdin);
    printf("\nNhap P: "); fgets(p,sizeof(p),stdin); 
    int lap=0;
    for(int i=0;i<127;i++)
    { 
        l[i]=-1;
    } 
    for(int i=0;i<(int)strlen(p)-1;i++)
    {
        l[(int)p[i]]=i; 
    }
    int cong_them,i,j,d=0; 
    for(i=0;i<(int)strlen(p)-1;i++)
    { 
        printf("%c ",p[i]);
        printf("%d \n",l[(int)p[i]]);
    } 
    i=strlen(p)- 2 ;    j=strlen(p)- 2; d=0;
    

    while(i<strlen(t)-1)
    {   d=0;
        while(d!=strlen(p)-1)
        { 
        if(t[i]==p[j])
        {
   
            i--;j--; 
            d++;
            lap++; 
   
 
        }
        else
        { 
            int min;
            if (j > 1 + l[(int)t[i]]) 
            {
                min = 1 + l[(int)t[i]]; 
            }
            else
            { 
                min = j;
            } 
     
          if(min==0)
           i = i + strlen(p) - min-1; 
           if(min!=0)
            i = i + strlen(p) - min-1;
           j = strlen(p) - 2 ; 

           lap++; 
           break;
        } 
        }
        if (d == strlen(p)-1)
        { 
            printf("P co trong T, bat dau tai vi tri %d\n", i +1);
            printf("\nLap: %d",lap); 
            return 0;
        }
    } 
    printf("P khong co trong T\n");
    printf("\nLap: %d",lap); 
} */