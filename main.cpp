#include <iostream>

#include "./lib/handler/HandlerLayer.h"
#include "./lib/source/FileSource.h"
#include "./lib/report/FileReport.h"
#include "./lib/report/ConsoleReport.h"

int main() {
    string path_1 = "J:\\Temp\\ChainOfResponsibility\\words_1.dat";
    string path_2 = "J:\\Temp\\ChainOfResponsibility\\words_2.dat";
    string path_3 = "J:\\Temp\\ChainOfResponsibility\\input.txt";
    string path_4 = "J:\\Temp\\ChainOfResponsibility\\report.txt";

    auto* layerOne = new HandlerLayer(new FileSource(path_1));
    layerOne->AddReport(new FileReport(path_4));

    auto* layerTwo = new HandlerLayer(new FileSource(path_2));
    layerTwo->AddReport(new FileReport(path_4));
    layerTwo->AddReport(new ConsoleReport());

    layerOne->SetNext(layerTwo);

    auto file = new FileSource(path_3);
    auto words = file->GetWords();

    for (auto word : words) {
        layerOne->FindWords(word);
    }

    return 0;
}
