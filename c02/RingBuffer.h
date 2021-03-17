#pragma once
#include "Iterator.h"
class RingBuffer
{
	friend class Iterator;
private:
	int size;
	int* a;
	int buf;
	int tail;
public:
	RingBuffer();
	RingBuffer(int);
	~RingBuffer();
	void pushEnd(int);
	void pushBegin(int);
	int getElem();
	int takeElem();
	int getSize();
	void clear();
	bool isEmpty();
};

