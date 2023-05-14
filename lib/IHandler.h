#ifndef CHAINOFRESPONSIBILITY_IHANDLER_H
#define CHAINOFRESPONSIBILITY_IHANDLER_H

#include <string>

using namespace std;

class IHandler {
public:
    virtual IHandler* SetNext(IHandler* handler) = 0;
    virtual void FindWords(string str) = 0;
};


#endif //CHAINOFRESPONSIBILITY_IHANDLER_H
