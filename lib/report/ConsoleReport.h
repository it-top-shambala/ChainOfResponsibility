#ifndef CHAINOFRESPONSIBILITY_CONSOLEREPORT_H
#define CHAINOFRESPONSIBILITY_CONSOLEREPORT_H

#include <iostream>

#include "../IReport.h"

using namespace std;

class ConsoleReport : public IReport {
public:
    ConsoleReport() {}

    void Report(string message) override {
        cout << message << endl;
    }

};


#endif //CHAINOFRESPONSIBILITY_CONSOLEREPORT_H
