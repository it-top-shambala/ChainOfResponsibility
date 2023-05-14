#ifndef CHAINOFRESPONSIBILITY_HANDLERLAYER_H
#define CHAINOFRESPONSIBILITY_HANDLERLAYER_H

#include <vector>
#include <fstream>

#include "../IHandler.h"
#include "../ISource.h"
#include "../IReport.h"

class HandlerLayer : public IHandler {
private:
    IHandler* _handler;
    ISource* _source;
    vector<IReport*> _reports;

public:
    HandlerLayer(ISource* source) : _source(source), _handler(nullptr) {}

    void AddReport(IReport* report) {
        _reports.push_back(report);
    }

    IHandler *SetNext(IHandler *handler) override {
        _handler = handler;
        return _handler;
    }

    void FindWords(string str) override {
        auto words = _source->GetWords();
        for (auto word : words) {
            if (str == word) {
                for (auto report : _reports) {
                    report->Report(str);
                }
            }
        }
        if (_handler != nullptr) {
            _handler->FindWords(str);
        } else {
            return;
        }
    }
};


#endif //CHAINOFRESPONSIBILITY_HANDLERLAYER_H
