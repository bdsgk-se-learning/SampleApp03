#include <stdio.h>
#include "file_leak.h"

void demonstrateFileLeak() {
    // ファイルハンドルリークの例1：単純なclose忘れ
    FILE* fp1 = fopen("test1.txt", "w");
    if (fp1 != NULL) {
        fprintf(fp1, "Hello, World!\n");
        // fclose(fp1) が missing
    }

    // ファイルハンドルリークの例2：エラー処理パスでのclose忘れ
    FILE* fp2 = fopen("test2.txt", "w");
    if (fp2 == NULL) {
        return;  // エラー時にreturnするが、closeしていない
    }
    fprintf(fp2, "Another message\n");
    // 正常パスでもfclose(fp2)が missing
}
