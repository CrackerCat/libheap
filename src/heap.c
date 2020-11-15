#include "heap.h"

void siftUp(int v, int heap[]) {
    while (v > 0 && heap[v] < heap[(v — 1) / 2]) {
        swap(heap[v], heap[(v — 1) / 2]);
        v = (v — 1) / 2;
    }
}

void siftDown(int v, int heap[], int size) {
    while (2 * v + 1 < size) {
        int left = 2 * v + 1;
        int right = 2 * v + 2;
        int minCh = left;
        if (right < size && heap[right] < heap[left]) minCh = right;
        if (heap[v] <= heap[minCh]) return;
        swap(heap[v], heap[minCh]);
        v = minCh;
    }
}

void push(int x, int heap[], int size) {
    heap[size++] = x;
    siftUp(size — 1);
}

int top(int heap[]) {
    return heap[0];
}

int pop(int heap[], int size) {
    int t = heap[0];
    heap[0] = heap[--size];
    siftDown(0);
    return t;
}
