#include<stdio.h>
#include<math.h>
int ktra(int n){
	if(n<2)  return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)  return 0;
	}
	return 1;
}
int main(){
	int a,m,k,n,b,A;
	int mang[1000];
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap k:");
	scanf("%d",&k);
	printf("Nhap n:");
	scanf("%d",&n);
	while(k!=0){
		mang[m]=k%2;
		k/=2;
		m++;    
	}
	if(mang[0]==1) b=a;
	   
	      A=a;
		for(int i=1;i<m;i++){
			A=(A*A)%n;
			if(mang[i]==1){
				b=(A*b)%n;
			}     
		}
 if(b<0) b+=n;
 if(ktra(b)==1){
 	printf("a^k mod n =%d la so nguyen to",b);
 }else{
 	printf("a^k mod n=%d khong la so nguyen to",b);
 }
 return 0;
}