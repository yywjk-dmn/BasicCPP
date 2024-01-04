#include <iostream>
using namespace std;
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>

int main()
{
    /* 布尔占一个字节  只有true：1和false：0  */
    bool a = true;

    int len = sizeof(a);

    printf("len:%d\n", len);

    /* 函数参数 */
    string s = "hello world";
    /* c_str将string类型的函数转化成char * */
    printf("s:%s\n", s.c_str());




    return 0;
}