#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_NUMBERS 45
#define PICK_COUNT 6

int main() {
    int numbers[TOTAL_NUMBERS];
    int temp;

    // 랜덤 시드 초기화
    srand(time(NULL));

    // 1~45까지 숫자 배열 초기화
    for (int i = 0; i < TOTAL_NUMBERS; i++) {
        numbers[i] = i + 1;
    }

    // Fisher-Yates 셔플로 숫자 섞기
    for (int i = TOTAL_NUMBERS - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        // swap
        temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }

    // 앞에서 6개 출력
    printf("이번 주 로또 번호는: ");
    for (int i = 0; i < PICK_COUNT; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
