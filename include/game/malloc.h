#ifndef __MALLOC_H
#define __MALLOC_H

#include "common_structs.h"

typedef enum {
    HEAP_SYSTEM,
    HEAP_MUSIC,
    HEAP_DATA,
    HEAP_DVD,
    HEAP_MISC,
    HEAP_MAX
} HeapID;

void* HuMemHeapInit(void *ptr, u32 size);
void* HuMemMemoryAlloc(HeapNode *heap, s32 size);
void HuMemMemoryFree(void *ptr);
void* HuMemMemoryRealloc(HeapNode *heap, void *mem, u32 new_size);
u32 HuMemUsedMemorySizeGet(HeapNode *heap);
u32 HuMemUsedMemoryBlockGet(HeapNode *heap);
s32 HuMemMemoryAllocSizeGet(s32 value);

HeapNode* HuMemHeapInitPerm(void *ptr, u32 size);
void* HuMemMemoryAllocPerm(u32 size);
void HuMemMemoryFreePerm(void *ptr);
void* HuMemMemoryReallocPerm(void *mem, u32 new_size);
u32 HuMemHeapAllocPermSizeGet(void);
u32 HuMemUsedMemoryBlockGetPerm(void);

HeapNode* HuMemHeapInitTemp(void *ptr, u32 size);
void* HuMemMemoryAllocTemp(u32 size);
void HuMemMemoryFreeTemp(void *ptr);
void* HuMemMemoryReallocTemp(void *mem, u32 new_size);
u32 HuMemHeapAllocTempSizeGet(void);
u32 HuMemUsedMemoryBlockGetTemp(void);

#endif