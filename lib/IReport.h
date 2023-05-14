#ifndef CHAINOFRESPONSIBILITY_IREPORT_H
#define CHAINOFRESPONSIBILITY_IREPORT_H

#include <string>

using namespace std;

class IReport {
public:
    virtual void Report(string message) = 0;
};


#endif //CHAINOFRESPONSIBILITY_IREPORT_H
