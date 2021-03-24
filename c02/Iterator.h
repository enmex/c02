#pragma once
#include "RingBuffer.h"
class Iterator
{
    friend class RingBuffer;
private:
	int i;
	RingBuffer &ringBuffer;
public:
	Iterator(RingBuffer&);
	~Iterator();
	void start();
	void next();
	bool finish();
	int getValue();
};

