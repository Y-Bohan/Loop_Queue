#include "iostream"
#include"queen.h"
int main()
{
	int temp;
	Queue myqu(4);
	myqu.dequeue(temp);
	cout << myqu.length()<<endl;
	myqu.inser(5);
	myqu.inser(6);
	cout << myqu.length()<<endl;
	myqu.inser(7);
	myqu.inser(8); 
	myqu.dequeue(temp);
	cout << myqu.length()<<endl;
	myqu.dequeue(temp);
	myqu.dequeue(temp);
	myqu.inser(9);
	myqu.inser(10);
	myqu.inser(11);
	myqu.inser(12);
	myqu.traverse();
	myqu.clean();
	myqu.traverse();
	return 0;
}