#include "Iterator.h"
#include <iostream>
Iterator::Iterator(RingBuffer *ringBuffer) : ringBuffer(ringBuffer) { //можно еще вот так присвоение делать в конструкторе (так удобнее и будет в дальнейших моих лабах)
	i = 0;
}
Iterator::~Iterator() {
	i = 0;
}
void Iterator::next() {
	i = (i+1) % ringBuffer->getSize();
}
void Iterator::start() {
	i = ringBuffer->getHead();
}
bool Iterator::finish() {
	return i == ringBuffer->getSize()-1;
}
int Iterator::getValue() {
	return ringBuffer->getElem(i);
}