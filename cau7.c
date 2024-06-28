#include<stdio.h>
#include<math.h>
int tim(int N){
	int mang[30];
	int a=1;
	int m=0;
	while(N!=0){
		mang[m]=N%10;
		N/=10;
		m++;
	}
	int s=0;
	for(int i=m-1;i>=0;i--){
		int d=mang[i]*a;
		a=a*10;
		s+=d;
	}
	return s;
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
			for(int j=2*i;j<=N;j+=i){
				ktra[j]=0;
			}
		}
	}
	for(int i=10;i<=N;i++){
		if(ktra[i]==1){
			if(ktra[tim(i)]==1){
				printf(" %d ",i);
			}
		}
	}
	return 0;
}