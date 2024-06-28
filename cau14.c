#include<stdio.h>
#include<math.h>
int chuyen(int n){
	int mang[100];
	int m=0;
	while(n>0){
		mang[m]=n%10;
		n/=10;
		m++;
	}
	int s=0;
	int a=1;
	for(int i=m-1;i>=0;i--){
		int b=mang[i]*a;
		a=a*10;
		s+=b;
	}
	return s;
}
int main(){
	for(int i=100;i<1000;i++){
	int a=chuyen(i);
	int b=cbrt(a);
	int c=pow(b,3);
	if(a==c){
		printf("%d\t",i);
	}
}
	return 0;
}