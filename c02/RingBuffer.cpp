#include "RingBuffer.h"

RingBuffer::RingBuffer()
{
	size = 10;
	array = new int[size];
}

RingBuffer::RingBuffer(int size)
{
	this->size = size;
	array = new int[size];
}

RingBuffer::~RingBuffer()
{
	clear();
	delete array;
}
