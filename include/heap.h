#ifndef _HEAP_H_
#define _HEAP_H_ 1

#ifdef __cplusplus
extern "C" {
#endif

void siftUp(int v);
void siftDown(int v);

void push(int x);
void top();
void pop();

#ifdef __cplusplus
}
#endif

#endif
