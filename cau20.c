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
}