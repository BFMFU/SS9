#include <stdio.h>
#include <math.h>
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    int arr[100];
    int size = 0, choice, n, value, pos, element;
    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                size = n;
                printf("Nhap gia tri cac phan tu:\n");
                for (int i = 0; i < size; i++) {
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Cac phan tu trong mang la:\n");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                {
                    int sumEven = 0;
                    printf("Cac phan tu chan la:\n");
                    for (int i = 0; i < size; i++) {
                        if (arr[i] % 2 == 0) {
                            printf("%d ", arr[i]);
                            sumEven += arr[i];
                        }
                    }
                    printf("\nTong cac phan tu chan là: %d\n", sumEven);
                }
                break;
            case 4:
                {
                    int max = arr[0], min = arr[0];
                    for (int i = 1; i < size; i++) {
                        if (arr[i] > max) max=arr[i];
                        if (arr[i] < min) min=arr[i];
                    }
                    printf("Gia tri lon nhat la: %d\n", max);
                    printf("Gia tri nho nhat la: %d\n", min);
                }
                break;
            case 5:
                {
                    int sumPrimes = 0;
                    printf("Cac phan tu nguyen tu la:\n");
                    for (int i = 0; i < size; i++) {
                        if (isPrime(arr[i])) {
                            printf("%d ", arr[i]);
                            sumPrimes += arr[i];
                        }
                    }
                    printf("\nTong cac so nguyen tu la: %d\n", sumPrimes);
                }
                break;
            case 6:
                {
                    printf("Nhap so can thong ke: ");
                    scanf("%d", &element);
                    int count = 0;
                    for (int i = 0; i < size; i++) {
                        if (arr[i] == element) {
                            count++;
                        }
                    }
                    printf("So %d xuat hien %d lan trong mang.\n", element, count);
                }
                break;
            case 7:
                {
                    printf("Nhap phan tu can them: ");
                    scanf("%d", &value);
                    printf("Nhap vi tri can them (0 d?n %d): ", size);
                    scanf("%d", &pos);
                    if (pos<0||pos>size) {
                        printf("Vi tri không hop le.\n");
                    } else {
                        for (int i = size; i > pos; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[pos] = value;
                        size++;
                        printf("Da them phan tu %d vao vi tri %d.\n", value, pos);
                    }
                }
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                return 0;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }

    return 0;
}

