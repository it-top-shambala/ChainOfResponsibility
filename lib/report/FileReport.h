#ifndef CHAINOFRESPONSIBILITY_FILEREPORT_H
#define CHAINOFRESPONSIBILITY_FILEREPORT_H

#include <fstream>

#include "../IReport.h"

using namespace std;

class FileReport : public IReport {
private:
    string _path;

public:
    explicit FileReport(const string &path) : _path(path) {}

    void Report(string message) override {
        ofstream file;
        file.open(_path, ios::app);
        file << message << endl;
        file.close();
    }
};


#endif //CHAINOFRESPONSIBILITY_FILEREPORT_H
