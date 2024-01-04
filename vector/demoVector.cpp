#include <iostream>
using namespace std;
#include <vector>
#include <stdio.h>
#include <string.h>


#define BUFFER_SIZE 20

typedef struct Stu_info
{
    int age;
    char sex;
    char name[BUFFER_SIZE];
}Stu_info;

int main()
{

    #if 0
    /* 等同于int a */
    vector<int> myvec;

    /* 等同于动态数组中的insert */
    myvec.push_back(5);

    int len = myvec.size();
    int capacity = myvec.capacity();
    printf("len:%d\n", len);
    printf("capacity:%d\n", capacity);

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        myvec.push_back(idx);
    }

    len = myvec.size();
    capacity = myvec.capacity();

    printf("len:%d\n", len);
    printf("capacity:%d\n", capacity);

    #endif

    #if 1
    Stu_info stu1, stu2, stu3;
    memset(&stu1, 0, sizeof(stu1) - 1);
    stu1.age = 10;
    strncpy(stu1.name, "zhangsan", sizeof(stu1.name) - 1);
    stu1.sex = 'm';

    memset(&stu2, 0, sizeof(stu2) - 1);
    stu2.age = 11;
    strncpy(stu2.name, "lisi", sizeof(stu2.name) - 1);
    stu2.sex = 'm';

    memset(&stu3, 0, sizeof(stu3) - 1);
    stu3.age = 12;
    strncpy(stu3.name, "wangsongsong", sizeof(stu3.name) - 1);
    stu3.sex = 'w';


    vector<Stu_info> myvec;
    myvec.push_back(stu1);
    myvec.push_back(stu2);
    myvec.push_back(stu3);

    int len = myvec.size();
    int capacity = myvec.capacity();
    printf("len:%d\n", len);
    printf("capacity:%d\n", capacity);


    Stu_info tempInfo;
    memset(&tempInfo, 0, sizeof(tempInfo));
    for (int idx = 0; idx < len; idx++)
    {
        /* 等同于tempInfo = myvec[idx]，将每个元素都输出 */
        tempInfo = myvec.at(idx);
        printf("age:%d\t, name:%s\t, sex= %c\n", tempInfo.age, tempInfo.name, tempInfo.sex);

    }
    
    
    #endif
    return 0;
}