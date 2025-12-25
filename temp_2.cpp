#include <iostream>
using namespace std;

// Template Queue class
template <class T>
class Queue
{
private:
    T arr[10];
    int head, tail;

public:
    Queue()
    {
        head = 0;
        tail = 0;
    }

    void insert(T item)
    {
        arr[tail] = item;
        tail = (tail + 1) % 10;
    }

    T remove()
    {
        T item = arr[head];
        head = (head + 1) % 10;
        return item;
    }
};

int main()
{
    Queue<int> qi;
    Queue<float> qf;
    Queue<char> qc;

    // Integer queue
    qi.insert(1);
    qi.insert(2);
    qi.insert(3);
    cout << "Int Queue: "
         << qi.remove() << " "
         << qi.remove() << " "
         << qi.remove() << endl;

    // Float queue
    qf.insert(1.1f);
    qf.insert(2.2f);
    qf.insert(3.3f);
    cout << "Float Queue: "
         << qf.remove() << " "
         << qf.remove() << " "
         << qf.remove() << endl;

    // Char queue
    qc.insert('A');
    qc.insert('B');
    qc.insert('C');
    cout << "Char Queue: "
         << qc.remove() << " "
         << qc.remove() << " "
         << qc.remove() << endl;

    return 0;
}
