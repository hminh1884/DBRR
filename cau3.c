#include<stdio.h>
#include<math.h>
int tinh(int i,int count){
	int s=pow(i,count);
	return s;
}
int main(){
	int N;
	int k=0;
	int q=0;
	int s=1;
	int p=1;
	printf("nhap N:");
	scanf("%d",&N);
	int n=N;
	for(int i=2;i<=(int)sqrt(N);i++){
		if(N%i==0){
			++k;
			q+=i;
			int count=0;
			int tong=0;
			while(N%i==0){
				++count;
				N/=i;
				tong+=tinh(i,count);
			}
			s=s*(count+1);
			p=p*(tong+1);
		}
	}
	if(N!=1){
		k+=1;
		q+=N;
		s=s*2;  
		p=p*(N+1);
 }
	printf("k:%d q:%d s:%d p:%d N:%d \n",k,q,s,p,n);
	printf("%d ",n+p+s-q-k);
	return 0;
}