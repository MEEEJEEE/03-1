#include <stdio.h>

int main() {
    char inputChar;
    
    // 사용자로부터 알파벳 문자를 입력 받음
    printf("알파벳 문자를 입력하세요: ");
    scanf(" %c", &inputChar); // 공백 문자를 사용하여 이전 입력 버퍼를 비웁니다.

    // 입력 받은 문자에 1을 더하여 다음 문자를 계산하고 출력
    char nextChar = inputChar + 1;

    printf("다음 문자는: %c\n", nextChar);

    return 0;
}