#include<stdio.h>
#include<math.h>
int tinh(int N){
	int s=1;
	int n=N;
	for(int i=2;i<(int)sqrt(N);i++){
		if(N%i==0){
			int tong=0;
			int count=0;
			while(N%i==0){
				++count;
				tong+=pow(i,count);
				N/=i;
			}
			s=s*(tong+1);
		}
}
if(N!=0){
			s=s*(N+1);
		}
return s-n;
}
int main(){
	int N;
	printf("Nhap N:");
	scanf("%d",&N);
	for(int i=1;i<N;i++){
		if(tinh(i)<N && tinh(i)!=i){
		int a=tinh(i);
		int b=tinh(a);
		if(i==b){
			printf("2 cap so la(%d,%d)\n",i,a);
		}
}
	}
	return 0;
}