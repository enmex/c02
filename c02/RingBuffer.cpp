#include "RingBuffer.h"

RingBuffer::RingBuffer()
{
	this->size = 10;
	tail = 0;
	buf = 0;
	a = new int[size];
}

RingBuffer::RingBuffer(int size)
{
	this->size = size;
	a = new int[size];
	tail = 0;
	buf = 0;
}

RingBuffer::~RingBuffer()
{
	clear();
	delete a;
}

void RingBuffer::pushEnd(int value)
{
	tail = (tail + 1) % size;
	a[tail] = value;
}

void RingBuffer::pushBegin(int value)
{
	buf = (buf + tail) % size;
	a[buf] = value;
}

int RingBuffer::getElem()
{
	return a[tail];
}

int RingBuffer::takeElem()
{
	int temp = a[tail];
	tail = (tail + buf - 1) % size;
	return temp;
}

int RingBuffer::getSize()
{
	return size;
}

void RingBuffer::clear()
{
	tail = 0;
	buf = 0;
	a = new int[size];
}

bool RingBuffer::isEmpty()
{
	return tail == buf;;
}
