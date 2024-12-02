#include <stdio.h>

int main() {
    int arr[100];  
    int n = 0;     
    int choice;    
    int index, value;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Nhap so luong phan tu trong mang: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                if (n == 0) {
                    printf("Mang rong!\n");
                } else {
                    printf("Mang hien tai: ");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                printf("Nhap phan tu can them: ");
                scanf("%d", &value);
                arr[n] = value;  
                n++;  
                printf("Da them phan tu %d vao mang.\n", value);
                break;
            case 4:
                if(n==0) {
                    printf("Mang rong, khong the sua.\n");
                } else {
                    printf("Nhap chi so phan tu can sua (0 - %d): ", n - 1);
                    scanf("%d", &index);
                    if (index < 0 || index >= n) {
                        printf("Chi so khong hop le!\n");
                    } else {
                        printf("Nhap gia tri moi cho phan tu tai chi so %d: ", index);
                        scanf("%d", &value);
                        arr[index] = value; 
                        printf("Da sua phan tu tai chi so %d thanh %d.\n", index, value);
                    }
                }
                break;
            case 5: ;
			    if (n == 0) {
                    printf("Mang rong, khong the xoa.\n");
                } else {
                    printf("Nhap chi so phan tu can xoa (0 - %d): ", n - 1);
                    scanf("%d", &index);
                    if (index < 0 || index >= n) {
                        printf("Chi so khong hop le!\n");
                    } else {
                        for (int i = index; i < n - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        n--; 
                        printf("Da xoa phan tu tai chi so %d.\n", index);
                    }
                }
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }

    } while (choice != 6);  
    
    return 0;
}

