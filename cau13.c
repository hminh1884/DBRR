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
}