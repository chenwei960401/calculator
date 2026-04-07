#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("--- 簡易 C 語言計算機 ---\n");
    printf("請輸入運算子 (+, -, *, /): ");
    scanf("%c", &operator);

    printf("請輸入兩個數字 (以空白隔開): ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/':
            if (num2 != 0) result = num1 / num2;
            else { printf("錯誤：除數不能為 0！\n"); return 1; }
            break;
        default:
            printf("錯誤：無效的運算子！\n");
            return 1;
    }

    printf("計算結果: %.2f %c %.2f = %.2f\n", num1, operator, num2, result);
    return 0;
}
