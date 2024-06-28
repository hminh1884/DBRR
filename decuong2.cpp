/*cau 10
#include<stdio.h>
#include<math.h>
int main(){
	int N;
	int k=0;
	int s=1;
	printf("nhap N:");
	scanf("%d",&N);
	for(int i=2;i<=(int)sqrt(N);i++){
		if(N%i==0){
			++k;
			int count=0;
			while(N%i==0){
				++count;
				N/=i;
			}
			s=s*(count+1);
		}
	}
	if(N!=1){
		k+=1;
		s=s*2;  
 }
	printf("so uoc va so uoc nt la (%d,%d) ",s,k);
	return 0;
}*/

/*cau 11
#include <stdio.h>
int main(){
  int N;
  printf("nhap N:");
  scanf("%d",&N);
  int  ktra[N + 1];
  for (int i = 2; i <= N; i++) {
    ktra[i] = 1;
  }
for (int i = 2; i*i <= N; i++) {
	if(ktra[i]==1){
		int t=N/i;
		for(int j=2;j<=t;j++){
			ktra[j*i]=0;
		}
	}
}
int s=0;
  for (int i = 2; i <= N; i++) {
    if (ktra[i] == 1) {
      s+=i;
    }
  }
  printf("tong cac snt la %d",s);
  return 0;
}*/

/*cau 12
#include<stdio.h>
int main(){
	int N;
	printf("Nhap N:");
	scanf("%d",&N);
	int m=0;
	int mang[100000];
	int ktra[N+1];
	for(int i=2;i<=N;i++){
		ktra[i]=1;
	}
	for(int i=2;i<=N;i++){
		if(ktra[i]==1){
			int t=N/i;
			for(int j=2;j<=t;j++){
				ktra[j*i]=0;
			}
		}
	}
	for(int i=2;i<=N;i++){
		if(ktra[i]==1){
			mang[m]=i;
			 m++;
		}
	}
	for(int i=0;i<m-3;i++){
		int s=0;
		s+=mang[i]+mang[i+1]+mang[i+2]+mang[i+3];
		if( s<=N){
			if(ktra[s]==1){
			printf("4 so la:(%d,%d,%d,%d)\n",mang[i],mang[i+1],mang[i+2],mang[i+3]);
		}
	}
	}

	return 0;
}*/

/*cau 13
#include<stdio.h>
#include<math.h>
int check(int n){
	if (n < 2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int N;
	printf("Nhap N:");
	scanf("%d",&N);
	int ktra[N+1];
	for(int i=2;i<=N;i++){
		ktra[i]=1;
	}
	for(int i=2;i<=N;i++){
		if(ktra[i]==1){
			int t=N/i;
			for(int j=2;j<=t;j++){
				ktra[i*j]=0;
			}
		}
	}
	int prime[100000];
	int m=0;
	for(int i=2;i<=N;i++){
		if(ktra[i]==1){
		prime[m]=i;
		m++;
	}
	}
	for(int i=0;i<m;i++){
			int a=prime[i]-2;
			int b=prime[i]+2;
			if(check(a)==1 && check(b)==1){
				printf("(%d,%d)\n",prime[i],2);
			}
		}
	return 0;
}*/

/*cau 14
#include<stdio.h>
#include<math.h>
int chuyen(int n){
	int mang[100];
	int m=0;
	while(n>0){
		mang[m]=n%10;
		n/=10;
		m++;
	}
	int s=0;
	int a=1;
	for(int i=m-1;i>=0;i--){
		int b=mang[i]*a;
		a=a*10;
		s+=b;
	}
	return s;
}
int main(){
	for(int i=100;i<1000;i++){
	int a=chuyen(i);
	int b=cbrt(a);
	int c=pow(b,3);
	if(a==c){
		printf("%d\t",i);
	}
}
	return 0;
}*/

/*cau 15
#include<stdio.h>
int main(){
	int N;
	printf("Nhap N:");
	scanf("%d",&N);
	int ktra[N+1];
	for(int i=2;i<=N;i++){
		ktra[i]=1;
	}
	for(int i=2;i*i<=N;i++){
		if(ktra[i]==1){
			int t=N/i;
			for(int j=2;j<=t;j++){
				ktra[i*j]=0;
			}
		}
	}
	for(int i=2;i<=N;i++){
		if(ktra[i]==1){
			if(ktra[i+2]==1){
				printf("(%d,%d)\t",i,i+2);
			}
		}
	}*/

/*cau 16
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	int N;
	printf("Nhap N:");
		scanf("%d",&N);
		srand(time(0));
		for(int i=1;i<=30;i++){
			int ktra=1;
			int random=rand();
			for(int i=2;i<=sqrt(random);i++){
				if(random%i==0){
					ktra=0;
				}
			}
			if(ktra==1){
				printf("%d la snt\n",random);
			}else{
				printf("%d khong la snt\n",random);
			}
		}
		return 0;
}*/

/*cau 17
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
*/

/*cau 18
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
}*/

