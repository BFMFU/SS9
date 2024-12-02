#include<stdio.h>
int main(){
	int numb;
	int arr[100];
	do{
	printf("Nhap so luong phan tu cho mang: ");
	scanf("%d",&numb);
	} while(numb<0);
	for(int i=0;i<numb;i++){
		printf("Nhap gia tri cho phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	int pos, value;
	do{
	printf("Nhap vi tri  muon them: ");
	scanf("%d",&pos);
	} while(pos<0);
	printf("Nhap gia tri ma ban muon them: ");
	scanf("%d",&value);
	for(int i=numb;i>=pos;i--){
		arr[i]=arr[i-1];
	} arr[pos-1]=value;
	printf("Mang sau khi them la: ");
	for(int i=0;i<numb+1;i++){
		printf("%d ",arr[i]);
	}
	return 0 ;
}
