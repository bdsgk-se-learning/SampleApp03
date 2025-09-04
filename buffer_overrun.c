#include <stdio.h>
#include <string.h>
#include "buffer_overrun.h"

void demonstrateBufferOverrun() {
    char smallBuffer[5];
    const char* longString = "This is a very long string that will cause buffer overflow";
    
    // バッファオーバーランの例1：strcpyによる境界チェックなしのコピー
    strcpy(smallBuffer, longString);

    // バッファオーバーランの例2：配列の境界を超えたアクセス
    for (int i = 0; i < 10; i++) {
        smallBuffer[i] = 'A';  // 配列サイズは5なのに10回アクセス
    }
}
