#include <iostream>
using namespace std;
#include <set>

int main()
{
    /* 集合 */
    set<int> myset;

    /* 插入数据 */
    /* 集合的特性之一 去重 */
    myset.insert(10);
    myset.insert(10);
    myset.insert(20);
    myset.insert(20);
    myset.insert(30);
    myset.insert(30);

    /* 集合的大小 */
    size_t size = myset.size();



    printf("size:%ld\n", size);

    /* 查看元素是不是在这个集合里面 在就返回1 不在就返回0 */
    size_t cnt = myset.count(10);
    printf("cnt:%d\n", cnt);

    cnt = myset.count(100);
    printf("cnt:%d\n", cnt);




    return  0;
}