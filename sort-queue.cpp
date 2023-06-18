#include <iostream>
using namespace std;
class queue
{
	int data[200], front, rear, size;

public:
	queue(int x)
	{
		front = -1;
		rear = -1;
		size = x;
	}
	void enqueue(int x)
	{
		if (is_empty())
		{
			front++;
			rear++;
			data[rear] = x;
		}
		else if (is_full())
		{
			cout << "Queue is full " << endl;
		}
		else
		{
			rear = (rear + 1) % size;
			data[rear] = x;
		}
	}
	int dequeue()
	{
		if (is_empty())
		{
			return 0;
		}
		else if (front == rear)
		{
			int a = data[front];
			front = rear = -1;
			return a;
		}
		else
		{
			int a = data[front];
			front = (front + 1) % size;
			return a;
		}
	}
	int is_empty()
	{
		if (front == -1)
			return 1;
		else
			return 0;
	}
	int is_full()
	{
		if ((rear + 1) % size == front)
			return 1;
		else
			return 0;
	}
	void print()
	{
		int a = front;
		do
		{
			cout << data[a] << " ";
			a = (a + 1) % size;
		} while (a != (rear + 1) % size);
		cout << endl;
	}
	void sort()
	{
		int a, b, i = 0, j, check;
		int l = size;
		while (l--)
		{
			if (is_empty())
				break;
			a = dequeue();
			if (is_empty())
				break;
			b = dequeue();
			j = size - i - 1;
			while (j--)
			{
				if (a < b)
				{

					if (front != 0)
					{
						enqueue(a);
						a = dequeue();
					}
					else
						break;
				}
				else
				{
					if (front != 0)
					{
						enqueue(b);
						b = dequeue();
					}
					else
						break;
				}
			}
			if (a > b)
			{
				enqueue(b);
				enqueue(a);
			}
			else
			{
				enqueue(a);
				enqueue(b);
			}
			front = 0;
			rear = size - 1;
			i++;
		}
	}
};
int main()
{
	int a, num;
	cout << "Please Enter the number of elements : ";
	cin >> num;
	queue q(num);
	cout << "Please enter element in queue " << endl;
	while (num--)
	{
		cin >> a;
		q.enqueue(a);
	}
	cout << "Original Queue " << endl;
	q.print();
	q.sort();
	cout << "Sorted Queue" << endl;

	q.print();
	return 0;
}