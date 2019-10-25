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
    
    char buffer[1024];
    int new_socket, read_result;
    double a, b;
    double result;
    char op, *tok;

    if (argc < 2) {
        printf("Error! Pass port number as an argument\n");
        return 1;
    }

    serve_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (serve_fd == 0) {
        printf("Error! Failed to create socket!\n");
        return 1;
    }

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(atoi(argv[1]));
}
