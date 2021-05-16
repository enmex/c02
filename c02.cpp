// c02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "RingBuffer.h"
#include "Iterator.h"
using namespace std;

int main()
{
    RingBuffer* ringBuffer = new RingBuffer(10);
    int x;
    for (int i = 0; i < 10; i++) {
        cin >> x;
        ringBuffer->pushEnd(x);
    }
    Iterator it(ringBuffer);
    it.start();
    while (!it.finish()) {
        cout << it.getValue() << " ";
        it.next();
    }
    cout << it.getValue() << "\n";
}