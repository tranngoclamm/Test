#include <stdio.h>
#include <math.h>
int inthongtin(){
	printf("Ten cua  ban: Tran Ngoc Lam");
	printf("MSSV: 21010291\n");
	printf("Lop: 06\n");
	
}

int bai1(int c){
	int n,x=1,y=2;
	

	do {
		do{
			n=pow(y,x);
			printf("(%d,%d)\n",x,y);
			printf("%d",n);
			x+=1;
		}while(n<c);
		x=1;
		y+=1;
		
		}while(n<c);
		return 0;	
	}
	
	


int bai2(double *z){
	int x=1,y=1,dk=*z**z;
	do{
		y==x;
		do{
			printf("(%d,%d)",x,y);
			printf("%lf",dk);
			y+=1;
		}while(x*y<dk);
		x+=1;
	}while(x*y<dk);
	return 0;
	}
	
	
	

int main(){
char ans;
int k,z,a;
double b;
inthongtin();
do{

	printf("Nhap tham so cau 1:");
	scanf("%d",&a);
	while(a<0){
		printf("Nhap sai vui long nhap lai: ");
		scanf("%d",&a);
	}
	printf("Ket qua: %d\n",a);
	bai1(a);

	printf("Nhap tham so cau 2:");
	scanf("%lf",&b);
	while (b<=0){
		printf("Nhap sai vui long nhap lai: ");
		scanf("%lf",&b);
	}
	printf("Ket qua: %lf\n",b);	
	bai2(&b);

printf("\nBan co muon tiep tuc chuong trinh? (y/n): ");
getchar();
ans = getchar();
}while(ans=='y'|| ans=='Y');
return 0;
}

