#ifndef REDIS_CLIENT_H
#define REDIS_CLIENT_H

#include <hiredis/hiredis.h>
#include <string>

class RedisClient {
public:
    RedisClient();
    ~RedisClient();
    bool connect();
    bool set(const std::string &key, const std::string &value);
    std::string get(const std::string &key);

private:
    redisContext *context;
    std::string host;
    int port;
    std::string password;
    void loadEnvironmentVariables();
};

#endif // REDIS_CLIENT_H
