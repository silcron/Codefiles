#include <stdio.h>

int main() {
    char input[1000];  // 입력 받을 문자열

    printf("문장을 입력하세요: ");
    fgets(input, sizeof(input), stdin);  // 사용자로부터 문자열 입력

    printf("변환된 결과: ");

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            // 소문자를 대문자로 변환
            printf("%c", input[i] - ('a' - 'A'));
        } else if (input[i] >= 'A' && input[i] <= 'Z') {
            // 대문자를 소문자로 변환
            printf("%c", input[i] + ('a' - 'A'));
        } else {
            // 알파벳이 아닌 경우 그대로 출력
            printf("%c", input[i]);
        }
    }

    return 0;
}
