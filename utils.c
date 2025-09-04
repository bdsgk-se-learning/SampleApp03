#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

char* getUserInput() {
    // メモリリークの可能性がある動的メモリ割り当て
    char* input = (char*)malloc(100);
    strcpy(input, "This is a very long string that will cause buffer overflow");
    return input;  // 呼び出し元で解放する責任があるが、明確に示されていない
}

void processNumbers(int* numbers) {
    // 配列の境界チェックなしでのアクセス
    for (int i = 0; i <= 10; i++) {  // 配列サイズは10だが、10番目の要素にアクセス
        numbers[i] = i;
    }
}
