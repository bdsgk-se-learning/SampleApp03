#include <stdlib.h>
#include "memory_leak.h"

void* allocateMemory() {
    return malloc(100);  // メモリを確保するが、解放の責任が不明確
}

void demonstrateMemoryLeak() {
    // メモリリークの例1：直接的なリーク
    int* numbers = (int*)malloc(sizeof(int) * 10);
    // free(numbers) が missing

    // メモリリークの例2：関数から返されたメモリの未解放
    void* ptr = allocateMemory();
    // free(ptr) が missing
}
