cmake_minimum_required(VERSION 3.25)
project(ChainOfResponsibility)

set(CMAKE_CXX_STANDARD 17)

add_executable(ChainOfResponsibility main.cpp lib/IHandler.h lib/handler/HandlerLayer.h lib/ISource.h lib/source/FileSource.h lib/IReport.h lib/report/FileReport.h lib/report/ConsoleReport.h)
