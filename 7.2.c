#include <stdio.h>
#include <string.h>

int main(){
    int i,tienbd;
    float r;
    int tonglai=0;
    int du,lai,goc;
    char ten[30];
    scanf("%f",&r);
    fflush(stdin);
    fgets(ten,30,stdin);
    ten[strlen(ten)-1]='\0';
    scanf("%d",&tienbd);
    printf("Tai khoan khach hang: %s\n",ten);
    printf("Thang\t Tien dau ki\t Tien lai\t Sodu\n");
    goc=tienbd;
    for(i=1;i<=6;i++)
        {
            
            lai = (float)goc * (r/100);
            tonglai+=lai;
            printf("%d\t%d\t\t\t%d\t",i,goc,lai);
            du = goc + lai;
            printf("%d\n",du);
            du=goc;
        }
        printf("Tong lai: %d",tonglai);   
}


