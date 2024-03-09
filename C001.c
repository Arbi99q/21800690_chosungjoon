#include <stdio.h>

int main() {
    int size, stars, blank1, blank2, i, j;

    printf("크기를 입력하세요: ");
    scanf("%d", &size);

    stars = size * 2;
    blank1 = size - 1;
    blank2 = 0;

    // 위쪽 부분 출력
    for (int i = 0; i < size; i++) {
        // 왼쪽 공백 출력
        for (int j = 0; j < i; j++)
            printf(" ");

        // 왼쪽 별표 출력
        printf("*");

        // 중간 공백 출력
        for (int j = 0; j < 2 * (size - i - 1); j++)
            printf(" ");
        
        // 오른쪽 별표 출력
        printf("*");

        printf("\n");
    }

    // 중간 부분 출력
    for (i = 0; i < size; i++) {
        for(j=0;j<2*size;j++)
        printf("*");
        printf("\n");
    }

for (int i = 0; i < size; i++) {
        // 왼쪽 공백 출력
        for (int j = 0; j < i; j++)
            printf(" ");

        // 왼쪽 별표 출력
        printf("*");

        // 중간 공백 출력
        for (int j = 0; j < 2 * (size - i - 1); j++)
            printf("*");
        
        // 오른쪽 별표 출력
        printf("*");

        printf("\n");
    }
    //맨 아래 쪽 출력
    for (int i = 0; i < size * 2; i++) {
        printf("*");
    }

    

    return 0;
}
