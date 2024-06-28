#include<stdio.h>
#include<math.h>
int main(){
	int N;
	int k=0;
	int s=1;
	printf("nhap N:");
	scanf("%d",&N);
	for(int i=2;i<=(int)sqrt(N);i++){
		if(N%i==0){
			++k;
			int count=0;
			while(N%i==0){
				++count;
				N/=i;
			}
			s=s*(count+1);
		}
	}
	if(N!=1){
		k+=1;
		s=s*2;  
 }
	printf("so uoc va so uoc nt la (%d,%d) ",s,k);
	return 0;
}