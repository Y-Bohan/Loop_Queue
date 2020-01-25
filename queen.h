#ifndef QUEUE_H
#define QUEUE_H

#include "iostream"
using namespace std;
class Queue
{
public:
	Queue(int cap);   //����
	~Queue();         //����
	void clean();     //���
	bool empty();     //�п�
	bool full();      //����
	int length();     //����Ԫ�ظ���
	bool inser(int ele);    //��β����Ԫ��
	bool dequeue(int &ele);     //����Ԫ�س���
	bool traverse();     //����
private:
	int *p;      //����ָ��
	int i_head;  //����Ԫ��
	int i_tail;  //��βԪ��
	int i_len;   //Ԫ�ظ���
	int i_cap;   //��������
};
#endif
