#include <stdio.h>

void hanoi(int n, char from_peg, char to_peg, char aux_peg) {
    if (n == 1) {
        printf("移動圓盤 1 從 %c 到 %c\n", from_peg, to_peg);
        return;
    }

    hanoi(n - 1, from_peg, aux_peg, to_peg);
    printf("移動圓盤 %d 從 %c 到 %c\n", n, from_peg, to_peg);
    hanoi(n - 1, aux_peg, to_peg, from_peg);
}

int main() {
    int n;
    printf("請輸入圓盤數量：");
    scanf_s("%d", &n);

    printf("河內塔移動步驟：\n");
    hanoi(n, 'A', 'C', 'B'); 

    return 0;
}