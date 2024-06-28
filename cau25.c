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
}