/*cau 19
#include<stdio.h>
#include<math.h>
int ktra(int n){
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int m,l,A,B,C;
	printf("nhap m:");
	scanf("%d",&m);
	printf("nhap l:");
	scanf("%d",&l);
	printf("nhap A:");
	scanf("%d",&A);
	printf("Nhap B:");
	scanf("%d",&B);
	printf("Nhap C:");
	scanf("%d",&C);
	for(int x=m;x<=l;x++){
		int f=A*x*x+B*x+C;
		if(ktra(f)){
			printf("%d ",x);
		}
		
	}
	return 0;
}*/

/*cau 20
#include<stdio.h>
int tinhgcd(int i,int j){
	int A=i;
	int B=j;
	while(A>0){
		int r=B%A;
		B=A;
		A=r;
		
	}
	return B;
}
int main(){
	int M,N,D;
	printf("Nhap M:");
	scanf("%d",&M);
	printf("Nhap N:");
	scanf("%d",&N);
	printf("Nhap D:");
	scanf("%d",&D);
	for(int i=M;i<=N-1;i++){
		for(int j=i+1;j<=N;j++){
			if(tinhgcd(i,j)==D){
				printf("(%d,%d) %d\n",i,j,tinhgcd(i,j));
			}
		}
	}
}*/

/*cau 21
#include<stdio.h>
#include<math.h>
int check(int count){
	if(count<2) return 0;
	for(int i=2;i<=sqrt(count);i++){
		if(count%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int A,B;
	int ktra[B+1];
	printf("Nhap A:");
	scanf("%d",&A);
	printf("Nhap B:");
	scanf("%d",&B);
	for(int i=A;i<=B;i++){
		int count =0;
		for(int j=2;j<i;j++){
			ktra[j]=1;
		}
		for(int j=2;j<i;j++){
			if(ktra[j]==1){
				int t=i/j;
				for(int k=2;k<t;k++){
					ktra[k*j]=0;
				}
			}
		}
		for(int j=2;j<i;j++){
			if(ktra[j]==1){
				count++;
			}
		}
		if(count!=0){
		if(check(count)==1){
				printf("(%d,%d)\t",count,i);
	}
}
	
}
return 0;
}*/

/*cau 22
#include<stdio.h>
int main(){
	int L,R;
	printf("nhap L:");
	scanf("%d",&L);
	printf("Nhap R:");
	scanf("%d",&R);
	int F[R+1];
	for(int i=2;i<=R;i++){
		F[i]=i;
	}
	for(int i=2;i<=R;i++){
		if(F[i]!=0){
			int t=R/i;
			for(int j=2;j<=t;j++){
				F[j*i]=0;
			}
		}
	}
	for(int i=L;i<=R;i++){
		if(F[i]!=0){
			printf("%d\t",F[i]);
		}
	}
	for(int i=L;i<R;i++){
			for(int j=i+1;j<=R;j++){
				int s=F[i]*F[j];
				printf("\n(%d,%d)=%d\n",i,j,s);
			}
		}
    return 0;
}*/

/*cau 23
#include<stdio.h>
#include<math.h>
int check(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int A,B;
	printf("nhap A:");
	scanf("%d",&A);
	printf("nhap B:");
	scanf("%d",&B);
	int ktra[B+1];
	for(int i=2;i<=B;i++){
		ktra[i]=1;
	}
	for(int i=2;i<=B;i++){
		if(ktra[i]==1){
			int t=B/i;
			for(int j=2;j<=t;j++){
				ktra[j*i]=0;
			}
		}
	}
	int s=0;
	for(int i=A;i<=B;i++){
		if(ktra[i]==1){
			s+=i;
		}
	}
	if(check(s)==1){
		printf("Yes");
	}else{
		printf("No");
	}
	return 0;
}*/

/*cau 24
#include<stdio.h>
#include<math.h>
int check(int n){
	for(int i=1;i<sqrt(n);i++){
		for(int j=i+1;j<=sqrt(n);j++){
			if((i*i+j*j==n)){
				return 1;
			}
		}
	}
	return 0;
}
int main(){
	int a,b;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	int ktra[b+1];
	for(int i=2;i<=b;i++){
		ktra[i]=1;
	}
	for(int i=2;i<=b;i++){
		if(ktra[i]==1){
			int t=b/i;
			for(int j=2;j<=t;j++){
				ktra[j*i]=0;
			}
		}
	}
	int count=0;
	for(int i=a;i<=b;i++){
		if(ktra[i]==1){
			if(check(i)==1){
				count++;
			}
		}
	}
	printf("%d",count);
	return 0;
	
}*/

/*cau 25
#include<stdio.h>
int tinh(int a[],int n,int prime[]){
	int s=0;
	for(int i=1;i<=n;i++){
		s+=prime[a[i]];
	}
	return s;
}
void printArray(int a[], int n,int prime[]){
	for (int i = 1; i <= n; i++){
		printf("%d ",prime[a[i]]); 
	}
	printf("\n");
}
void dequy(int h, int k, int n,int x[100],int prime[],int N){
	for (int i = x[h-1] + 1; i <= n - (k-h); i++){
		x[h] = i;
		if (h == k) {
			if(tinh(x, k, prime)==N){
		printArray(x, k, prime);
	}
	}
		else {
			dequy(h+1, k, n, x, prime, N);
		}
	}
}
int main(){
	int N,M;
	printf("Nhap N:");
	scanf("%d",&N);
	printf("Nhap M:");
	scanf("%d",&M);
	int ktra[N+1];
	for(int i=2;i<=N;i++){
		ktra[i]=1;
	}
	for(int i=2;i*i<=N;i++){
		if(ktra[i]==1){
			int t=N/i;
			for(int j=2;j<=t;j++){
				ktra[j*i]=0;
			}
		}
	}
	int prime[N+1];
	int m=1;
	int count=0;
	for(int i=2;i<=N;i++){
		if(ktra[i]==1){
			prime[m]=i;
			m++;
		}
	}
	int n=m-1;
	int x[100];
	x[0]=0;
	dequy(1,M,n,x,prime,N);
	return 0;
}*/

/*cau 26
#include<stdio.h>
#include<math.h>
int check(int i,int n){
	if(n%i==0 && n%(i*i)==0){
		return 1;
	}
	return 0;
}
int main(){
	int N;
	printf("Nhap N:");
	scanf("%d",&N);
	int ktra[N+1];
	for(int k=2;k<N;k++){
	int a=sqrt(k);
	for(int i=2;i<=a;i++){
		ktra[i]=1;
	}
	for(int i=2;i<=a;i++){
		if(ktra[i]==1){
			int t=a/i;
			for(int j=2;j<=t;j++){
				ktra[j*i]=0;
			}
		}
	}
	for(int i=2;i<=a;i++){
		if(ktra[i]==1){
			if(check(i,k)==1){
				printf("so manh me la %d\n",k);
				break;
			}
		}
	}
			}
			
	return 0;
}*/

/*cau 27
#include<stdio.h>
#include<math.h>
int check(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int tinhgcd(int i,int j){
	int A=i;
	int B=j;
	while(A>0){
		int r=B%A;
		B=A;
		A=r;
		
	}
	return B;
}
int main(){
	for(int i=1;i<=999;i++){
		for(int j=i;j<=999;j++){
			int d=tinhgcd(i,j);
			if(check(d)){
				printf("(%d,%d)=%d\n",i,j,d);
			}
		}
	}
	return 0;
}*/