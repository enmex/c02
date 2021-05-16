#pragma once
#include "RingBuffer.h"
class Iterator
{
private:
	int i;
	RingBuffer* ringBuffer;
public: 
	Iterator(RingBuffer*); //получаем при создании итератора готовое кольцо, чтобы в дальнейшем итератор мог с ним работатьь
	~Iterator();
	void start();
	void next();
	bool finish();
	int getValue();
};

