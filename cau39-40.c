#include<stdio.h>
#include<math.h>
int check(int n){
	if(n<2)  return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)  return 0;
	}
	return 1;
}
int tinhgcd(int a,int n){
	int c=a;
	int e=n;
	int tg;
	if(c<e){
		tg=c;
		c=e;
		e=tg;
	}
	while(e>0){
		int r=c%e;
		c=e;
		e=r;
	}
	return c;
}
int main(){
	int n;
	printf("nhap so phan tu :");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu A[%d]:",i+1);
		scanf("%d",&A[i]);
	}
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int d=tinhgcd(A[i],A[j]);
			if(check(d)){
				printf("%d gcd cua (%d,%d)la snt\n",d,A[i],A[j]);
				count++;
			}
		}
	}
	printf("so cap la:%d",count);
	return 0;
}