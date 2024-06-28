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
}