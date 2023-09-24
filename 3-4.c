#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Korean");
    
    // 이후 한글 문자열 출력 코드 작성
    
    return 0;
}
int main() {
    int numerator, denominator;
    
    // 사용자로부터 분자와 분모를 입력 받음
    printf("분자를 입력하세요 : ");
    scanf("%d", &numerator);
    
    printf("분모를 입력하세요: ");
    scanf("%d", &denominator);

    // 정수를 부동소수점 변수로 변환하여 나누기 연산 수행
    double result = (double)numerator / (double)denominator;

    // 결과를 부동소수점 형태로 출력
    printf("나누기의 결과는  %.6lf 입니다.\n", result);

    return 0;
}