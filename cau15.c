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
    }
}    