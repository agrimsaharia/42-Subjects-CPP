#include "Logger.hpp"

void log(std::string const & dest, std::string const & message)
{
    Logger entry("logfile.txt");
    for(auto ele : Logger::log_array)
    {
        // std::cout << "here";
        if (ele.dest == dest)
        {
            (entry.*(ele.ptr))(message);
            break;
        }
    }
}

int main()
{
    log("logToConsole", "this is a hello from my side!");
}