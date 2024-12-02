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
	printf("Mang truoc khi xoa la: ");
	for(int i=0;i<numb;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	int pos;
	do{
		printf("Nhap vao vi tri phan tu ban muon xoa: ");
		scanf("%d",&pos);
	} while (pos>=numb&&pos<0);
	for(int i=pos-1;i<numb;i++){
		arr[i]=arr[i+1];
	}
	printf("Mang sau khi xoa gia tri la: ");
	for(int i=0; i<numb-1;i++){
		printf("%d ",arr[i]);
	}
	return 0 ;
}
