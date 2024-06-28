#include<stdio.h>
#include<math.h>
int check(int count){
	if(count<2) return 0;
	for(int i=2;i<=sqrt(count);i++){
		if(count%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int A,B;
	int ktra[B+1];
	printf("Nhap A:");
	scanf("%d",&A);
	printf("Nhap B:");
	scanf("%d",&B);
	for(int i=A;i<=B;i++){
		int count =0;
		for(int j=2;j<i;j++){
			ktra[j]=1;
		}
		for(int j=2;j<i;j++){
			if(ktra[j]==1){
				int t=i/j;
				for(int k=2;k<t;k++){
					ktra[k*j]=0;
				}
			}
		}
		for(int j=2;j<i;j++){
			if(ktra[j]==1){
				count++;
			}
		}
		if(count!=0){
		if(check(count)==1){
				printf("(%d,%d)\t",count,i);
	}
}
	
}
return 0;
}