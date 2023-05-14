#ifndef CHAINOFRESPONSIBILITY_FILESOURCE_H
#define CHAINOFRESPONSIBILITY_FILESOURCE_H

#include <fstream>

#include "../ISource.h"

class FileSource : public ISource {
private:
    string _path;

public:
    explicit FileSource(const string &path) : _path(path) {}

    vector<string> GetWords() override {
        vector<string> words;

        ifstream file;
        file.open(_path);
        string str;
        while (getline(file, str)) {
            words.push_back(str);
        }
        file.close();

        return words;
    }
};


#endif //CHAINOFRESPONSIBILITY_FILESOURCE_H
