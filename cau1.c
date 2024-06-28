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
}