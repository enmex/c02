#include "Iterator.h"
#include "RingBuffer.h"
#include <iostream>
Iterator::Iterator(RingBuffer& ringBuffer) : ringBuffer(ringBuffer){
	i = 0;
}
Iterator::~Iterator() {
	i = 0;
}
void Iterator::next() {
	i = (i+1) % ringBuffer.getSize();
}
void Iterator::start() {
	i = ringBuffer.head;
}
bool Iterator::finish() {
	return i == ringBuffer.size-1;
}
int Iterator::getValue() {
	return ringBuffer.a[i];
}