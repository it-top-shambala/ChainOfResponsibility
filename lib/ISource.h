#ifndef CHAINOFRESPONSIBILITY_ISOURCE_H
#define CHAINOFRESPONSIBILITY_ISOURCE_H

#include <vector>
#include <string>

using namespace std;

class ISource {
public:
    virtual vector<string> GetWords() = 0;
};


#endif //CHAINOFRESPONSIBILITY_ISOURCE_H
