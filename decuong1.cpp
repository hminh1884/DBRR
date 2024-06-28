/*cau 1
#include<stdio.h>
#include<math.h>
int snt(int n){
	int s=1;
	for(int i=2;i<=(int)sqrt(n);i++){
    	if(n%i==0){
    		int count=0;
    		while(n%i==0){
    			++count;
    			n/=i;
			}
			s=s*(count+1);
		}
		}
	if(n==1){
	return s;
	}
	else{
	return s*2;
	}
}
int main(){
	int N;
	printf("nhap N:");
	scanf("%d",&N);
    for(int i=1;i<N;i++){
    	if(snt(i)==4){
    		printf("%d ", i);
		}
	}
	return 0;
}*/

/*cau 2
#include<stdio.h>
#include<math.h>
int main(){
	int N;
	printf("Nhap N:");
	scanf("%d",&N);
	int a=pow(10,N);
	int b=pow(10,N-1);
	int ktra[a];
	for(int i=2;i<a;i++){
		ktra[i]=1;
	}
	for(int i=2;i<a;i++){
		if(ktra[i]){
			int t=a/i;
			for(int j=2;j<=t;j++){
				ktra[j*i]=0;
			}
		}
	}
	for(int i=b;i<a;i++){
		if(ktra[i]){
			printf("%d ", i);
		}
	}
}*/

/*cau 3
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
}*/

/*cau 4
#include <stdio.h>
#include<math.h>
int main(){
  int A;
  int B;
  printf("nhap A:");
  scanf("%d",&A);
  printf("nhap B:");
  scanf("%d",&B);
  int  ktra[B + 1];
  for (int i = 2; i <= B; i++) {
    ktra[i] = 1;
  }
for (int i = 2; i*i <= B; i++) {
	if(ktra[i]==1){
		int t=B/i;
		for(int j=2;j<=t;j++){
			ktra[j*i]=0;
		}
	}
}
  for (int i = A; i <= B; i++) {
    if (ktra[i] == 1) {
      printf("%d ", i);
    }
  }
  return 0;
}*/

/*cau 5
#include <stdio.h>
#include<math.h>
int main(){
  int A;
  int B;
  printf("nhap A:");
  scanf("%d",&A);
  printf("nhap B:");
  scanf("%d",&B);
  int  ktra[B + 1];
  for (int i = 2; i <= B; i++) {
    ktra[i] = 1;
  }
for (int i = 2; i*i <= B; i++) {
	if(ktra[i]==1){
		int t=B/i;
		for(int j=2;j<=t;j++){
			ktra[j*i]=0;
		}
	}
}
int s=0;
  for (int i = A; i <= B; i++) {
    if (ktra[i] == 1) {
      s+=i;
    }
  }
  printf("tong cac snt la %d",s);
  return 0;
}*/

/*cau 6
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
}*/

/*cau 7
#include<stdio.h>
#include<math.h>
int tim(int N){
	int mang[30];
	int a=1;
	int m=0;
	while(N!=0){
		mang[m]=N%10;
		N/=10;
		m++;
	}
	int s=0;
	for(int i=m-1;i>=0;i--){
		int d=mang[i]*a;
		a=a*10;
		s+=d;
	}
	return s;
}
int main(){
	int N;
	printf("Nhap N:");
	scanf("%d",&N);
	int ktra[N+1];
	for(int i=2;i<=N;i++){
		ktra[i]=1;
	}
	for(int i=2;i<=N;i++){
		if(ktra[i]==1){
			for(int j=2*i;j<=N;j+=i){
				ktra[j]=0;
			}
		}
	}
	for(int i=10;i<=N;i++){
		if(ktra[i]==1){
			if(ktra[tim(i)]==1){
				printf(" %d ",i);
			}
		}
	}
	return 0;
}*/

/*cau 8
#include <stdio.h>
#include <math.h>

int check(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N;
    printf("Nhap N: ");
    scanf("%d", &N);

    printf("Cac so T-prime la: ");
    for (int i = 4; i <= N; i++) {
        int a = sqrt(i);
        if (a * a == i && check(a)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}*/

/*cau 9
#include <stdio.h>
int main(){
  int N;
  printf("nhap N:");
  scanf("%d",&N);
  int  ktra[N + 1];
  for (int i = 2; i <= N; i++) {
    ktra[i] = 1;
  }
for (int i = 2; i*i <= N; i++) {
	if(ktra[i]==1){
		int t=N/i;
		for(int j=2;j<=t;j++){
			ktra[j*i]=0;
		}
	}
}
int count=0;
  for (int i = 2; i <= N; i++) {
    if (ktra[i] == 1) {
      ++count;
    }
  }
  printf("so cac snt la %d",count);
  return 0;
}*/