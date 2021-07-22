#include <iostream>
#include <stddef.h> // for size_t
#include <stdint.h> // for uint8_t
#include <stdio.h> // for printf
#include<iostream>
#include<fstream>
#include<string>
#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fgets, fclose 함수가 선언된 헤더 파일
/*
int main(int argc, char* argv[])
{
    uint32_t network_buffer[20];    // 파일을 읽을 때 사용할 임시 공간
    //char a = argv[0];

    //char* b = argv[1];

    FILE *fp = fopen(argv[0], "r");    // hello.txt 파일을 읽기 모드로 열기.
    //fgets(network_buffer, sizeof(network_buffer), fp);    // hello.txt에서 문자열을 읽음


    uint32_t* p = reinterpret_cast<uint32_t*>(network_buffer);
        uint32_t n = *p; // TODO
        printf("32 bit number=0x%x\n", n);


    printf("%s\n", network_buffer);
    fclose(fp);    // 파일 포인터 닫기

    return 0;
}
    */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    FILE *fp, *fd;
    uint32_t num1, num2;

    fp = fopen(argv[1], "rb");
    fread(&num1, sizeof(uint32_t),1, fp);

    fd = fopen(argv[2], "rb");
    fread(&num2, sizeof(uint32_t),1, fd);

    printf("%d %d \n", num1, num2);

    // close file
    fclose(fp);fclose(fd);
}
