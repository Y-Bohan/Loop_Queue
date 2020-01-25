#include"queen.h"
Queue::Queue(int cap)
{
	i_cap = cap;
	i_head = 0;
	i_tail = 0;
	i_len = 0;
	p = new int[cap];
}

Queue::~Queue()
{
	clean();
	delete[] p;
	p = NULL;
	cout << ".......~Queue" << endl;
}

void Queue::clean()
{
	i_len = 0;
	i_head = 0;
	i_tail = 0;
}

bool Queue::empty()
{
	return i_len == 0 ? true : false;
}

bool Queue::full()
{
	return i_len == i_cap ? true : false;
}

int Queue::length()
{
	return i_len;
}

bool Queue::inser(int ele)
{
	if (full())
	{
		cout << "queue is full" << endl;
		return false;
	}
	p[i_tail] = ele;
	i_tail++;
	i_tail = i_tail % i_cap;
	i_len++;
	return true;
}

bool Queue::dequeue(int &ele)
{
	if (empty())
	{
		cout << "queue is empty" << endl;
		return false;
	}
	ele = p[i_head];
	i_head++;
	i_head = i_head % i_cap;
	i_len--;
	return true;
}

bool Queue::traverse()
{
	if (empty())
	{
		cout << "queue is empty" << endl;
		return false;
	}
	for (int i = i_head, temp = i_head; i < i_head + i_len; i++)
	{
		cout << p[temp] << " ";
		temp++;
		temp %= i_cap;
	}
	cout << endl;
	return true;
}