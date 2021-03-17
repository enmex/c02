#pragma once
#include "RingBuffer.h"
class Iterator
{
private:
	int i;
	const RingBuffer ringBuffer;
public:
	Iterator();
	Iterator(const RingBuffer);
	~Iterator();
	void start();
	void next();
	bool finish();
	int getValue();
};

