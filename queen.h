#ifndef QUEUE_H
#define QUEUE_H

#include "iostream"
using namespace std;
class Queue
{
public:
	Queue(int cap);   //构造
	~Queue();         //析构
	void clean();     //清空
	bool empty();     //判空
	bool full();      //判满
	int length();     //队列元素个数
	bool inser(int ele);    //队尾插入元素
	bool dequeue(int &ele);     //队首元素出对
	bool traverse();     //遍历
private:
	int *p;      //队列指针
	int i_head;  //队首元素
	int i_tail;  //队尾元素
	int i_len;   //元素个数
	int i_cap;   //队列容量
};
#endif
