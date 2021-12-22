#pragma once

#include<iostream>
#include<fstream>
#include<ctime>

struct log_pointer;

class Logger
{
private:
    std::string filename;
    void logToConsole(std::string const &s);
    void logToFile(std::string const &s);
    std::string makeLogEntry(std::string const &s);
public:
    static log_pointer log_array[2];
    Logger(std::string filename_);
};

struct log_pointer
{
    std::string dest;
    void (Logger::*ptr)(std::string const&);
};