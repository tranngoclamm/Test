#include <stdio.h>
#include <math.h>
#include <string.h>

int nhapthongtin(){
	char ten[30],masv[30],lop[15];
	printf("Nhap ten: ");
	fflush(stdin);
	fgets(ten,30,stdin);
	ten[strlen(ten)-1]='\0';
	printf("Nhap ma SV: ");
	fgets(masv,30,stdin);
	masv[strlen(masv)-1]='\0';
	printf("Lop: ");
	fgets(lop,30,stdin);
	lop[strlen(lop)-1]='\0';
	printf("\n\n\n\n");
	printf("Ten cua ban: %s",ten);
	printf("\nMaSV: %s",masv);
	printf("\nLop: %s\n",lop);
}

int main(){

	char ans;
	nhapthongtin();
	do{	
	
	printf("Ban co muon tiep tuc chuong trinh? (y/n)");
	fflush(stdin);
	scanf("%c",&ans);
	}while (ans=='y'||ans=='Y');
	return 0;
}

