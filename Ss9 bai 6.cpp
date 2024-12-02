#include <stdio.h>
int main() {
    int arr[100][100];
    int rows, cols, choice;
    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so dong: ");
                scanf("%d", &rows);
                printf("Nhap so cot: ");
                scanf("%d", &cols);
                printf("Nhap gia tri cac phan tu cua mang:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;

            case 2:
                printf("In gia tri cac phan tu cua mang theo ma tran:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                {
                    int sumOdd = 0;
                    printf("Cac phan tu le trong ma tran la:\n");
                    for (int i = 0; i < rows; i++) {
                        for (int j = 0; j < cols; j++) {
                            if (arr[i][j] % 2 != 0) {  
                                printf("%d ", arr[i][j]);
                                sumOdd += arr[i][j];
                            }
                        }
                    }
                    printf("\nTong cac phan tu le là: %d\n", sumOdd);
                }
                break;

            case 4:
                {
                    int product = 1;
                    printf("Cac phan tu tren duong bien la:\n");
                    for (int j = 0; j < cols; j++) {
                        printf("%d ", arr[0][j]);
                        product *= arr[0][j];
                    }
                    for (int i = 1; i < rows; i++) {
                        printf("%d ", arr[i][cols - 1]);
                        product *= arr[i][cols - 1];
                    }
                    if (rows > 1) {
                        for (int j = cols - 2; j >= 0; j--) {
                            printf("%d ", arr[rows - 1][j]);
                            product *= arr[rows - 1][j];
                        }
                    }
                    if (cols > 1) {
                        for (int i = rows - 2; i > 0; i--) {
                            printf("%d ", arr[i][0]);
                            product *= arr[i][0];
                        }
                    }
                    printf("\nTich cac phan tu tren duong bien la: %d\n", product);
                }
                break;

            case 5:
                printf("Cac phan tu tren duong cheo chinh la:\n");
                for (int i = 0; i < rows && i < cols; i++) {
                    printf("%d ", arr[i][i]);
                }
                printf("\n");
                break;

            case 6:
                printf("Cac phan tu tren duong cheo phu la:\n");
                for (int i = 0; i < rows && i < cols; i++) {
                    printf("%d ", arr[i][cols - i - 1]);
                }
                printf("\n");
                break;

            case 7:
                {
                    int maxSum = -1, maxRow = -1;
                    for (int i = 0; i < rows; i++) {
                        int sum = 0;
                        for (int j = 0; j < cols; j++) {
                            sum += arr[i][j];
                        }
                        if (sum > maxSum) {
                            maxSum = sum;
                            maxRow = i;
                        }
                    }
                    printf("Dong co tong gia tri cac phan tu lon nhat la: Dong %d voi tong = %d\n", maxRow + 1, maxSum);
                }
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                return 0;
            default:
                printf("Lua chon không hop le. Vui long chon lai.\n");
        }
    }
    return 0;
}

