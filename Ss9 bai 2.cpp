#include<stdio.h>
int main(){
	int numb;
	do{
	printf("Nhap so luong phan tu cho mang: ");
	scanf("%d",&numb);
	} while(numb<0);
	int arr[numb];
	for(int i=0;i<numb;i++){
		printf("Nhap gia tri cho phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	} 
	printf("Mang truoc khi sua la: ");
	for(int i=0;i<numb;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	int pos, value;
	do{
		printf("Nhap vao vi tri phan tu ban muon sua: ");
		scanf("%d",&pos);
	} while (pos>=numb&&pos<0);
	printf("Nhap vao gia tri ban muon thay the: ");
	scanf("%d",&value);
	arr[pos-1]=value;
	printf("Mang sau khi thay the la: ");
	for(int i=0; i<numb;i++){
		printf("%d ",arr[i]);
	}
	return 0 ;
}
