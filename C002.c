#include <stdio.h>

int main() {
    int person[4][3];
    int sum[3] = {0, 0, 0};
    float ratio[3];
    int i, j;

    // 각 호실별로 점호 인원 입력받기
    printf("각 호실별로 점호 인원을 입력하세요:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("Room #%d0%d> ", i + 1, j + 1);
            scanf("%d", &person[i][j]);
        }
    }

    // 각 항목별 합계 계산
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            sum[2] += person[i][j]; // 전체 합계
            if (i < 2)
                sum[0] += person[i][j]; // 남학생 합계
            else
                sum[1] += person[i][j]; // 여학생 합계
        }
    }

    // 비율 계산
    ratio[0] = (float)sum[0] / 24 * 100; // 남학생 비율
    ratio[1] = (float)sum[1] / 24 * 100; // 여학생 비율
    ratio[2] = (float)(sum[0]+sum[1])/ 48 * 100; // 전체 비율

    // 결과 출력
    printf("\nCheck result:\n");
    printf("1) Men: %d/%d (%.2f%%)\n", sum[0],sum[2],ratio[0]);
    printf("2) Women: %d/%d (%.2f%%)\n", sum[1],sum[2],ratio[1]);
    printf("3) Total: %d/%d (%.2f%%)\n", sum[0]+sum[1],2*sum[2],ratio[2]);

    return 0;
