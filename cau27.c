#include<stdio.h>
#include<math.h>
int check(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
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
	for(int i=1;i<=999;i++){
		for(int j=i;j<=999;j++){
			int d=tinhgcd(i,j);
			if(check(d)){
				printf("(%d,%d)=%d\n",i,j,d);
			}
		}
	}
	return 0;
}