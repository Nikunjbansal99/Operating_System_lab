#include <iostream>
#include <cstdlib>
using namespace std;

#define SIZE 10
class queue{
    int *arr;
    int capacity;
    int front;
    int rear;
    int count;
public:
    queue(int size=SIZE);

    void dequeue();
    void enequeue(int x);
    int peek();
    int size();
    bool isempty();
    bool isfull();
};
queue::queue(int size)
{
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}
queue::dequeue()



