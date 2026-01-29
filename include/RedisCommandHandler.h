#ifndef REDIS_COMMANd_HANDLER_H
#define REDIS_COMMAND_HANDLER_H

#include<string>


class RedisCommandHandler{
    public:
        RedisCommandHandler();
        //Process a command from client and return RASP
        std::string processCommand(const std::string& commandLine);
};

#endif