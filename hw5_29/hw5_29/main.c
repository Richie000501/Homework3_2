#include <stdio.h>


int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    printf("块ㄢ计");
    scanf_s("%d %d", &num1, &num2);

    // 絋玂 num1 ㎝ num2 タ计
    if (num1 > 0 && num2 > 0) {
        int result = lcm(num1, num2);
        printf("程そ计%d\n", result);
    }
    else {
        printf("叫块タ俱计\n");
    }

    return 0;
}
