#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int tinh(int a,int r,int n){
	int mang[100000];
	int m=0;
	int A=a;
	int b;
	if(r==1) b=a;
	while(r!=0){
		mang[m]=r%2;
		r/=2;
		m++;
	}
    if(mang[0]==1)  b=a;
    

		for(int i=1;i<m;i++){
			A=(A * A) % n;
			if(mang[i]==1){
				b=(A * b) % n;
			}     
		}
return b;
}
int main(){
	int n;
	int s=0;
	int t;
	srand(time(0));
	printf("Nhap n:");
	scanf("%d",&n);
	printf("Nhap t:");
	scanf("%d",&t);
	if(n==2||n==3)  {
      printf("N la so nguyen to");
      return 0;
   }
	int r=n-1;
	while(r%2==0){
		s++;
		r=r/2;
	}
	for(int i=1;i<=t;i++){
		int a=rand() % (n-3)+2;
		int y=tinh(a,r,n);
		if(y !=1 && y!=(n-1)){
			int j=1;
			while(j<=s-1 && y!=(n-1)){
				y=(y*y)%n;
				if(y==1){
					printf("Hop so\t");
					return 0;
				}
				j++;
			}
			if(y!=(n-1)){
				printf("Hop so\t");
				return 0;
			}
		}
}
printf("So nguyen to\t");
	return 0;
}