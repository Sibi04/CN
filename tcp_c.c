#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<arpa/inet.h>
#include<unistd.h>

void main()
{
    char *ip="127.0.0.1";
    int port=3049;

    int sock;
    struct sockaddr_in addr;
    char buffer[1024];
    int n;

    sock=socket(AF_INET,SOCK_STREAM,0);
    if(sock < 0)
    {
        perror("socket error");
        exit(1);
    }

    printf("socket created\n");
    memset(&server_addr,'\0',sizeof(addr));
    addr.sin_family=AF_INET;
    addr.sin_port=port;
    addr.sin_addr.s_addr=inet_addr(ip);

        connect(sock,(struct sockaddr*)&addr,sizeof(addr));
        
        bzero(buffer,1024);
        strcpy(buffer,"this is from client");
        send(client_sock,buffer,sizeof(buffer),0);
        bzero(buffer,1024);
        recv(client_sock,buffer,sizeof(buffer),0);
        printf("Serevr %s\n",buffer);
}