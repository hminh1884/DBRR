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
}