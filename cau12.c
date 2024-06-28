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
}