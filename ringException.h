#pragma once
enum exceptionType{
    RING_OVERFLOW
};

//тут класс исключений для кольца

class ringException
{
private:
    exceptionType exception;
public:
    ringException(exceptionType exception) : exception(exception) {}

    const char* getError() {
        switch(exception){
            case RING_OVERFLOW:
                return "Кольцевой буфер переполнен";
                break;
        }
    }
};

