#include <iostream>
using namespace std;

template <class T=int, int MAX=6>
class queue2
{
private:
	T intArray[MAX];
	int front;
	int rear;
	int itemCount;
	static int numOfArrays;
public:
	queue2() 
	{

		front = 0;
		rear = -1;
		itemCount = 0;
		numOfArrays++;

	}
	void insert(T data) {

		if (!isFull()) {

			if (rear == MAX - 1) {
				rear = -1;
			}

			intArray[++rear] = data;
			itemCount++;
		}
	}

	T removeData() {
		int data = intArray[front++];

		if (front == MAX) {
			front = 0;
		}

		itemCount--;
		return data;
	}
	bool isFull() {
		return itemCount == MAX;
	}

	T peek() {
		return intArray[front];
	}

	bool isEmpty() {
		return itemCount == 0;
	}

private:
	
	
	int size() {
		return itemCount;
	}


};

int main() {
	/* insert 5 items */
	queue2<int,10> q1;
	queue2<double> q2;
	queue2<double,7> q4;

	queue2<> q3;
	q1.insert(3);
	q1.insert(5);
	q1.insert(9);
	q1.insert(1);
	q1.insert(12);
	// front : 0
	// rear  : 4
	// ------------------
	// index : 0 1 2 3 4 
	// ------------------
	// queue : 3 5 9 1 12
	q1.insert(15);

	// front : 0
	// rear  : 5
	// ---------------------
	// index : 0 1 2 3 4  5 
	// ---------------------
	// queue : 3 5 9 1 12 15

	if (q1.isFull()){
		cout<<"Queue is full!\n";
	}

	// remove one item 
	int num =q1.removeData();

	printf("Element removed: %d\n", num);
	// front : 1
	// rear  : 5
	// -------------------
	// index : 1 2 3 4  5
	// -------------------
	// queue : 5 9 1 12 15

	// insert more items
	q1.insert(16);

	// front : 1
	// rear  : -1
	// ----------------------
	// index : 0  1 2 3 4  5
	// ----------------------
	// queue : 16 5 9 1 12 15

	// As queue is full, elements will not be inserted. 
	q1.insert(17);
	q1.insert(18);

	// ----------------------
	// index : 0  1 2 3 4  5
	// ----------------------
	// queue : 16 5 9 1 12 15
	printf("Element at front: %d\n", q1.peek());

	printf("----------------------\n");
	printf("index : 5 4 3 2  1  0\n");
	printf("----------------------\n");
	printf("Queue:  ");

	while (!q1.isEmpty()) {
		int n = q1.removeData();
		cout << n;
	}
	return 0;
}