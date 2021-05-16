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
	tail = -1; //это надо чтобы при добавлении нового элемента индекс его соотвествовал значению хвоста, то есть хвост сначала нулем будет
	head = 0;
}
RingBuffer::~RingBuffer()
{
	clear();
	delete[] a;
}

void RingBuffer::pushEnd(int value)
{
    if ((tail + 1) % (buf_size) == 0 && tail != -1) {
        throw ringException(exceptionType::RING_OVERFLOW); //если у нас при увеличении указателя бросает на начало кольца то мы бросаем исключение
    }
    size++;
	tail = (tail + 1) % (buf_size);
    a[tail] = value;
	//увеличение размера, хвоста по модулю, присвоение значениЯ
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
