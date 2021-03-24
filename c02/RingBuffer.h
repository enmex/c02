#pragma once
#include "Iterator.h"
class RingBuffer
{
	friend class Iterator;
private:
	int size;
    int buf_size;
	int* a;
	int head;
	int tail;
public:
	RingBuffer();
	RingBuffer(int);
    RingBuffer(int, int);
	~RingBuffer();
	void pushEnd(int);
	int getElem();
	int takeElem();
	int getSize();
	void clear();
	bool isEmpty();
};

