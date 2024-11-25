#include<stdio.h>
int main(){
	
	int a;
	printf("Nhap 1 so:");
	scanf("%d",&a);
	
	
	for (int i=1;i<10;i++){
			printf("%d*%d=%d\n",i,a,i*a);
		}

	return 0;
}
