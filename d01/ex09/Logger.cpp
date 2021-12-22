#include "Logger.hpp"

log_pointer Logger::log_array[] = {
    {"logToConsole", &logToConsole},
    {"logToFile", &logToFile}
};

void Logger::logToConsole(std::string const &s)
{
    std::cout << makeLogEntry(s) << '\n';
}

void Logger::logToFile(std::string const &s)
{
    std::ofstream out(filename);
    if (out.is_open())
    {
        out << makeLogEntry(s) << '\n';
        out.close();
    }
}

std::string Logger::makeLogEntry(std::string const &s)
{
    const std::time_t now = std::time(nullptr);
    const std::tm cal_time = *std::localtime(&now);
    std::string ss = "<";
    ss += std::to_string(cal_time.tm_hour) + ':';
    ss += std::to_string(cal_time.tm_min) + ':';
    ss += std::to_string(cal_time.tm_sec) + '>';
    ss += ' ' + s;
    return ss;
}

Logger::Logger(std::string filename_)
{
    filename = filename_;
}
