#include<stdio.h>
#include<math.h>
#include<time.h>
int ktra(int n){
	if(n<2)  return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)  return 0;
	}
	return 1;
}
int tinh(int a,int k,int n){
    int m,A;
    int b=1;
	int mang[1000];
	while(k!=0){
		mang[m]=k%2;
		k/=2;
		m++;    
	}
	if(mang[0]==1) b=a;
	      A=a;
		 b=a;
		for(int i=1;i<m;i++){
			A=(A*A)%n;
			if(mang[i]==1){
				b=(A*b)%n;
			}     
		}
 return b;
}
int main(){
	int N,d,p;
	srand(time(0));
	printf("nhap N:");
	scanf("%d",&N);
	p=rand()% 999;
	printf("p=%d",p);
	printf("\ncac so nguyen a<N thoa man a^p mod N la snt:");
	for(int i=1;i<N;i++){
		d=tinh(i,p,N);
		if(ktra(d)) printf("%d ",i);
	}
	return 0;
}