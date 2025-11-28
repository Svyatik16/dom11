#include <stdio.h>
#include <locale.h>
#define MAX_SIZE 100


int main() {
    setlocale(LC_ALL, "RUS");
    int n;

    printf("Введите размер массива: ");
    scanf("%d", &n);

    int arr[MAX_SIZE];

    printf("Введите %d элементов массива:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int last_plus_index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            last_plus_index = i;
        }
    }

    int sum = 0;
    if (last_plus_index != -1) {
        for (int i = 0; i < last_plus_index; i++) {
            sum += arr[i];
        }
        printf("Сумма элементов до последнего положительного: %d\n", sum);
    }
    else {
        printf("В массиве нет положительных элементов\n");
    }

    return 0;
}