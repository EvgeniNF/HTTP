#include <iostream>
#include <http_client.hpp>
#include <http_server.hpp>

int main(){
    std::cout << "Hello, HTTP!" << std::endl;
    http::hello_client();
    http::hello_server();
    return 0;
}
