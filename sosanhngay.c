#include <stdio.h>
typedef struct ngaythangnam{
	int ngay; 
	int thang;
	int nam;
}ngaythangnam;
ngaythangnam nhaplieu1(){
	ngaythangnam day1;
	printf("Nhap thong tin ngay 1\n");
	printf("Nhap ngay:");
	scanf("%d",&day1.ngay);
	printf("Nhapthang:");
	scanf("%d",&day1.thang);
	printf("Nhapnam:");
	scanf("%d",&day1.nam);
	return day1;
}
ngaythangnam nhaplieu2(){
	ngaythangnam day1;
	printf("Nhap thong tin ngay 1\n");
	printf("Nhap ngay:");
	scanf("%d",&day1.ngay);
	printf("Nhapthang:");
	scanf("%d",&day1.thang);
	printf("Nhapnam:");
	scanf("%d",&day1.nam);
	return day1;
}
int sosanh(ngaythangnam ngay1,ngaythangnam ngay2){
	if (ngay1.nam<ngay2.nam) return -1;
	else if (ngay1.nam>ngay2.nam) return 1;
	else if (ngay1.thang<ngay2.thang) return -1;
	else if (ngay1.thang>ngay2.thang) return 1;
	else if (ngay1.ngay<ngay2.ngay) return -1;
	else if (ngay1.ngay>ngay2.ngay) return 1;
	else return 0;
}
int main(){
	int ans;
	ngaythangnam day1,day2;
	day1=nhaplieu1();
	day2=nhaplieu2();
	ans=sosanh(day1,day2);
	if (ans==-1) printf("Ngay 1 truoc ngay 2");
	else if (ans==1) printf("Ngay 1 sau ngay 2");
	else printf("Ngay 1 trung ngay 2");
	return 0;
}
