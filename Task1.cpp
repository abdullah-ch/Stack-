#include <iostream>
using namespace std;
//did some changing 
class Stack
{

private:
	int *Pointer;
	int top;
	int size;

public:
	Stack() {
		size = 10;
		top = 0;
		Pointer = new int[size];
	}

	bool IsEmpty() {
		return (top == 0);
	}

	bool IsFull() {
		return (top == size);
	}

	bool push(int element) {
		if (!IsFull()) {
			Pointer[top] = element;

			top++;
		}
		return false;

	}

	bool pop(int* element) {
		if (!IsEmpty()) {
			*element = Pointer[top];
			top--;
			return true;
		}
		return false;
	}

	bool Top(int* element) {
		if (!IsEmpty())
		{
			*element = Pointer[top - 1];
			cout << "/////////////////////////////////" << endl;
			cout << "The element is " << *element << endl;
			cout << "/////////////////////////////////" << endl;
			return true;
		}
		return false;
	}

	bool Clear() {
		top = 0;
		cout << "Top has been initialized to zero" << endl;
		return true;
	}

	void Print_Stack() {
		cout << "The elements are" << endl;
		for (int i = 0; i < top; i++)
		{
			cout << Pointer[i] << endl;
		}
	}

};

int main() {
	Stack a;
	a.push(1);
	a.push(2);
	a.push(4);
	a.Print_Stack();
	int value;
	a.pop(&value);
	a.Print_Stack();
	a.Top(&value);
	a.Clear();
	a.Print_Stack();
	a.push(1);
	a.push(2);
	a.push(4);
	a.Print_Stack();
	a.pop(&value);
	a.Print_Stack();
	a.Top(&value);

}

