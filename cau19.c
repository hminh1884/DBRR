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
}