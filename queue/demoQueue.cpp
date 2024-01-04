#include <iostream>
using namespace std;
#include <queue>
#include <string.h>

#define BUFFER_SIZE 5

typedef struct Stu_info
{
    int age;
    char sex;
    char name[BUFFER_SIZE];
}Stu_info;

int mian()
{
    #if 0
    queue<int> myqueue;

    for (int idx = 1; idx <= BUFFER_SIZE; idx++)
    {
        myqueue.push(idx);
    }
    int len = myqueue.size();
    printf("len:%d\n", len);

    int front = myqueue.front();
    printf("front: %d\n", front);


    int back = myqueue.back();
    printf("back: %d\n", back);

    int frontVal = 0;
    while (!myqueue.empty())
    {
        frontVal = myqueue.front();
        printf("frontVal:%d\n", frontVal);
        myqueue.pop();
    }
    #endif

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

    queue<Stu_info> myqueue;

    myqueue.push(stu1);
    myqueue.push(stu2);
    myqueue.push(stu3);

    Stu_info topVal;
    memset(&topVal, 0, sizeof(Stu_info));
    while (!myqueue.empty())
    {
        topVal = myqueue.front();
        myqueue.pop();

        printf("age:%d\t, name:%s\t, sex= %c\n", topVal.age, topVal.name, topVal.sex);


    }



    return 0;

}