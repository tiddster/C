#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
int main (void)
{
    char IPdotdec[sizeof("255.255.255.255")]; //存放点分十进制IP地址
    struct in_addr s; // IPv4地址结构体
    // 输入IP地址
    printf("Please input IP address: ");
    scanf("%s", IPdotdec);
    // 转换
    inet_pton(AF_INET, IPdotdec, (void *)&s);
    printf("inet_pton: 0x%x\n", s.s_addr); // 注意得到的字节序
}
