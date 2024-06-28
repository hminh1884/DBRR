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
	
}