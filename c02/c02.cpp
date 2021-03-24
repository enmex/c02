// c02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "RingBuffer.h"
using namespace std;

int main()
{
    RingBuffer ringBuffer(10);
    int x;
    for (int i = 0; i < 100; i++) {
        cin >> x;
        ringBuffer.pushEnd(x);
    }
    Iterator it(ringBuffer);
    it.start();
    while (!it.finish()) {
        cout << it.getValue() << " ";
        it.next();
    }
    cout << it.getValue() << "\n";
}