#pragma once
#include "ringException.h"
class RingBuffer
{
private:
	int size; //размер массива текущий
    int buf_size; //выделяемый в конструкторе размер массива
	int* a; //кольцо у меня в виде массива
	int head; //индекс головы
	int tail; //индекс хвоста
public:
	RingBuffer(); //конструктор
	RingBuffer(int); //конструктор по размеру
    RingBuffer(int, int); //по размеру и размеру 
	~RingBuffer(); //деструктор
	void pushEnd(int); //вставить в конец
	int getElem(); //взять элемент
	int takeElem(); //взять и одновременно удалить элемент из кольца
	int getSize(); //узнать размер
	void clear(); //очистить кольцо
	bool isEmpty(); //проверка на пустоту

	RingBuffer& operator= (const RingBuffer& a) {
		this->a = a.a;
		this->buf_size = a.buf_size;
		this->head = a.head;
		this->tail = a.tail;
		this->size = a.size;
	}
	int getHead(){
		return head;
	}
	int getElem(int i){
		return a[i];
	}

};

