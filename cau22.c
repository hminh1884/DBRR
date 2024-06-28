#include<stdio.h>
int main(){
	int L,R;
	printf("nhap L:");
	scanf("%d",&L);
	printf("Nhap R:");
	scanf("%d",&R);
	int F[R+1];
	for(int i=2;i<=R;i++){
		F[i]=i;
	}
	for(int i=2;i<=R;i++){
		if(F[i]!=0){
			int t=R/i;
			for(int j=2;j<=t;j++){
				F[j*i]=0;
			}
		}
	}
	for(int i=L;i<=R;i++){
		if(F[i]!=0){
			printf("%d\t",F[i]);
		}
	}
	for(int i=L;i<R;i++){
			for(int j=i+1;j<=R;j++){
				int s=F[i]*F[j];
				printf("\n(%d,%d)=%d\n",i,j,s);
			}
		}
    return 0;
}