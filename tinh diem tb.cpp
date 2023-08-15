#include<stdio.h>
int main(){
	float t,v,a;
	printf("diem cua mon toan la:");
	scanf("%f",&t);
	printf("diem cua mon van la:");
	scanf("%f",&v);
	printf("diem cua mon anh la:");
	scanf("%f",&a);
	float tb;
	tb=(t*2+v*2+a)/5;
	printf("diem tb mon:%.1f\n",tb);
	if (tb>8){
		printf("hoc sinh gioi",tb);
	}if  (tb<8&&tb>5){
		printf("hoc sinh trung binh",tb);
	}if (tb<5){
		printf("hoc sinh kem",tb);
	}return 0;
}
