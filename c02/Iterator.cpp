#include "Iterator.h"
#include "RingBuffer.h"

Iterator::Iterator(const RingBuffer ringBuffer) : ringBuffer(ringBuffer){
	i = 0;
}
Iterator::~Iterator() {
	i = 0;
}
void Iterator::next() {
	i++;
}
void Iterator::start() {
	i = ringBuffer.buf;
}
bool Iterator::finish() {
	return i == ringBuffer.tail;
}
int Iterator::getValue() {
	return ringBuffer.a[i];
}