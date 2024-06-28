#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	int N;
	printf("Nhap N:");
		scanf("%d",&N);
		srand(time(0));
		for(int i=1;i<=30;i++){
			int ktra=1;
			int random=rand();
			for(int i=2;i<=sqrt(random);i++){
				if(random%i==0){
					ktra=0;
				}
			}
			if(ktra==1){
				printf("%d la snt\n",random);
			}else{
				printf("%d khong la snt\n",random);
			}
		}
		return 0;
}