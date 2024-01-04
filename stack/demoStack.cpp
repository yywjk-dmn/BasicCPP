#include <iostream>
using namespace std;
#include <stack>
#include <string.h>

#define BUFFER_SIZE 5

typedef struct Stu_info
{
    int age;
    char sex;
    char name[BUFFER_SIZE];
}Stu_info;

int main()
{
    #if 0
    stack<int> myStack;
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        myStack.push(idx);
    }
    int len = myStack.size();
    printf("len:%d\n", len);

    int topVal = 0;
    while (!myStack.empty())
    {
        topVal = myStack.top();
        myStack.pop();

        printf("topVal:%d\n", topVal);

    }
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

    /* 放这个类型的指针 */
    stack<Stu_info*> mystack;

    mystack.push(&stu1);
    mystack.push(&stu2);
    mystack.push(&stu3);

    Stu_info* topVal = NULL;
    while (!mystack.empty())
    {
        /* 只查看栈顶元素 不出栈 */
        topVal = mystack.top();
        mystack.pop();


        printf("age:%d\t, name:%s\t, sex:%d\n", topVal->age, topVal->name, topVal->sex);

    }





    #endif

    return 0;
}