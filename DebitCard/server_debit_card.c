#include <unistd.h> 
#include <stdio.h> 
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h> 
#include <string.h> 
#include <arpa/inet.h>

int main(int argc, char *argv[]) {
    int serve_fd, port, bind_result, pid;
    struct sockaddr_in address;
    int address_size = sizeof(address);
}
