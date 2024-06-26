#ifndef SERVER_H
#define SERVER_H

#include "ZippyService.h"

#include <grpcpp/grpcpp.h>
#include <chrono>

class Server {
public:
  void Run();

private:
  std::unique_ptr<grpc::Server> server;
};

#endif
