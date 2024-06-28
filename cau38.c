#include<stdio.h>
#include<math.h>
int main(){
	int p,a,tg,d,x,y,x1,x2,y1,y2;
	printf("nhap so p:");
	scanf("%d",&p);
	printf("nhap so a:");
	scanf("%d",&a);
	int A=a;
	int P=p;
	if(a>p){
		a-=p;
	}
	if(a==0){
		d=p;
		x=1;
		y=0;
	}else{
		x1=0;
		y1=1;
		x2=1;
		y2=0;
		while(a>0){
			int q=p/a;
			int r=p-q*a;
			x=x2-q*x1;
			y=y2-q*y1;
			p=a;
			a=r;
			x2=x1;
			x1=x;
			y2=y1;
			y1=y;
			
		}
		d=p;
		x=x2;
		y=y2;
	}
	if(x<0){
		y+=P;
	}
	if(d!=1) {
	printf("khong co nghich dao\n");
}
	printf("(a,x)=(%d,%d)",A,y);
	return 0;
}
