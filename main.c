#include <stdio.h>
#include "buffer_overrun.h"
#include "memory_leak.h"
#include "file_leak.h"

int main() {
    printf("バッファオーバーランのデモを開始します...\n");
    demonstrateBufferOverrun();
    
    printf("メモリリークのデモを開始します...\n");
    demonstrateMemoryLeak();
    
    printf("ファイルリークのデモを開始します...\n");
    demonstrateFileLeak();
    
    printf("全てのデモが完了しました。\n");
    return 0;
}
