#ifndef _HEAP_H_
#define _HEAP_H_ 1

#ifdef __cplusplus
extern "C" {
#endif

void siftUp(int v, int heap[]);
void siftDown(int v, int heap[], int size);

void push(int x, int heap[], int size);
int top(int heap[]);
int pop(int heap[], int size);

#ifdef __cplusplus
}
#endif

#endif
