/*cau 37
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int soSanhChuoi(char p[], int j, int i){
    int check = 0;
    for(int k = 0; k < i; k++){  
        if(p[k] == p[j - i + k]){   
            check++;
        }
    }
    if(check == i){
        return 1;
    }
    return 0;
}

int kiemTra(char p[], int j){
    for(int i = j-1; i >= 1; i--){
        if(soSanhChuoi(p, j, i) == 1){
            return i;
        }
    }
    return 0;
}

void failureFunction(char p[], int f[]){
    f[0]=-1;
    f[1]=0;
    for(int j = 2; j < strlen(p); j++){
        f[j] = kiemTra(p, j);
    }
}

int xuLy(char t[], char p[], int f[]){
    int i = 0, j = 0, check = 0, sopheptinhlap = 0;
    while(i < strlen(t) - strlen(p) ){
        int checkp = j, k = i+j;
        while(checkp != strlen(p)){
            if(t[k] == p[j]){
                k++;
                j++;
                checkp++;
                sopheptinhlap++;
            } else {
                i = i + j - f[j];
                j = f[j] == -1 ? 0 : f[j];
                sopheptinhlap++;
                break;
            }
        }
        if(checkp == strlen(p)){
            printf("\nKQ: Vi tri %d", i);
            check = 1;
            j=0;
            i=i+strlen(p);
        }
    }
    if(check == 0){
        printf("\nKQ: Khong co chuoi can tim");
    }
    return sopheptinhlap;
}

int main(){
    char t[5000],p[100];
    printf("Nhap doan van ban T: ");
    fflush(stdin);
    gets(t);
    printf("Nhap chuoi P can tim: ");
    fflush(stdin);
    gets(p);
    int f[strlen(p)];
    failureFunction(p, f);
    int sopheptinhlap = xuLy(t, p, f);
    printf("\nSo phep tinh lap la: %d", sopheptinhlap);
    getch();
    return 0;
}*/

/*cau 38
#include<stdio.h>
#include<math.h>
int main(){
	int p,a,tg,d,x,y,x1,x2,y1,y2;
	printf("nhap so p:");
	scanf("%d",&p);
	printf("nhap so a:");
	scanf("%d",&a);
	int A=a;
	int P=p;
	if(a>p){
		a-=p;
	}
	if(a==0){
		d=p;
		x=1;
		y=0;
	}else{
		x1=0;
		y1=1;
		x2=1;
		y2=0;
		while(a>0){
			int q=p/a;
			int r=p-q*a;
			x=x2-q*x1;
			y=y2-q*y1;
			p=a;
			a=r;
			x2=x1;
			x1=x;
			y2=y1;
			y1=y;
			
		}
		d=p;
		x=x2;
		y=y2;
	}
	if(x<0){
		y+=P;
	}
	if(d!=1) {
	printf("khong co nghich dao\n");
}
	printf("(a,x)=(%d,%d)",A,y);
	return 0;
}*/

/*cau 39-40
#include<stdio.h>
#include<math.h>
int check(int n){
	if(n<2)  return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)  return 0;
	}
	return 1;
}
int tinhgcd(int a,int n){
	int c=a;
	int e=n;
	int tg;
	if(c<e){
		tg=c;
		c=e;
		e=tg;
	}
	while(e>0){
		int r=c%e;
		c=e;
		e=r;
	}
	return c;
}
int main(){
	int n;
	printf("nhap so phan tu :");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu A[%d]:",i+1);
		scanf("%d",&A[i]);
	}
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int d=tinhgcd(A[i],A[j]);
			if(check(d)){
				printf("%d gcd cua (%d,%d)la snt\n",d,A[i],A[j]);
				count++;
			}
		}
	}
	printf("so cap la:%d",count);
	return 0;
}*/

/*cau 41
#include<stdio.h>
#include<math.h>
int ktra(int n){
	if(n<2)  return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)  return 0;
	}
	return 1;
}
int main(){
	int a,m,k,n,b,A;
	int mang[1000];
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap k:");
	scanf("%d",&k);
	printf("Nhap n:");
	scanf("%d",&n);
	while(k!=0){
		mang[m]=k%2;
		k/=2;
		m++;    
	}
	if(mang[0]==1) b=a;
	   
	      A=a;
		for(int i=1;i<m;i++){
			A=(A*A)%n;
			if(mang[i]==1){
				b=(A*b)%n;
			}     
		}
 if(b<0) b+=n;
 if(ktra(b)==1){
 	printf("a^k mod n =%d la so nguyen to",b);
 }else{
 	printf("a^k mod n=%d khong la so nguyen to",b);
 }
 return 0;
}*/

/*cau 42
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
		
		
}*/

/*cau 43
#include<stdio.h>
#include<math.h>
#include<time.h>
int ktra(int n){
	if(n<2)  return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)  return 0;
	}
	return 1;
}
int tinh(int a,int k,int n){
    int m,A;
    int b=1;
	int mang[1000];
	while(k!=0){
		mang[m]=k%2;
		k/=2;
		m++;    
	}
	if(mang[0]==1) b=a;
	      A=a;
		 b=a;
		for(int i=1;i<m;i++){
			A=(A*A)%n;
			if(mang[i]==1){
				b=(A*b)%n;
			}     
		}
 return b;
}
int main(){
	int N,d,p;
	srand(time(0));
	printf("nhap N:");
	scanf("%d",&N);
	p=rand()% 999;
	printf("p=%d",p);
	printf("\ncac so nguyen a<N thoa man a^p mod N la snt:");
	for(int i=1;i<N;i++){
		d=tinh(i,p,N);
		if(ktra(d)) printf("%d ",i);
	}
	return 0;
}*/

/*cau 44
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
}*/

/*cau 45
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
}*/