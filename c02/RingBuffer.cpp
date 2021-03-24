#include "RingBuffer.h"
#include <iostream>
RingBuffer::RingBuffer()
{
	this->size = 0;
    buf_size = 10;
	tail = -1;
	head = 0;
	a = new int[buf_size];
}

RingBuffer::RingBuffer(int buf_size)
{
	this->size = 0;
    this->buf_size = buf_size;
	a = new int[buf_size];
	tail = -1;
	head = 0;
}
RingBuffer::~RingBuffer()
{
	clear();
	delete[] a;
}

void RingBuffer::pushEnd(int value)
{
    if ((tail + 1) % (buf_size) && tail != -1) {
        throw
    }
    size++;
	tail = (tail + 1) % (buf_size);
    a[tail] = value;
}

int RingBuffer::getElem()
{
	return a[head];
}

int RingBuffer::takeElem()
{
    
    int temp = a[head];
	head = (head+1) % (buf_size);
    size--;
	return temp;
}

int RingBuffer::getSize()
{
	return size;
}

void RingBuffer::clear()
{
	tail = -1;
	head = 0;
    size = 0;
}

bool RingBuffer::isEmpty()
{
	return size == 0;
}
