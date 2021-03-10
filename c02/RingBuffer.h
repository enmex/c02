#pragma once
class RingBuffer
{
private:
	int size;
	int* array;
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

