#include <stdio.h>
int n=8;
void thongtin(){
	printf("Ho ten: Tran Ngoc Lam\n");
	printf("Ma so sinh vien: 21010291\n");
	printf("Gioi tinh: Nam\n");
	printf("Lop: Cong nghe thong tin VJ1\n");
	printf("De so: 25\n");
}

int tinhdathuc(float *a){
	int i;
	float u=1;
	for(i=1;i<=n+1;i++){
		u*=2**a;
	}
	printf("%f",u);
}

int main(){
	char ans;
	float x;
	thongtin();
	do{
	printf("Nhap du lieu cho bien x: ");
	scanf("%f",&x);
	tinhdathuc(&x);
	while(x<-1||x>1){
		printf("Nhap sai hay nhap lai x: ");
		scanf("%f",&x);
	}
	printf("Ban co muon tiep tuc: (y/n)");	
	getchar();
	ans=getchar();
	}while(ans=='y'|| ans=='Y');
	
}
