#include <iostream>
using namespace std;

// -------- TEMPLATE QUEUE CLASS --------
template <class T>
class Queue {
private:
    T arr[5];          // fixed size queue
    int head, tail;
    int count;

public:
    Queue() {
        head = 0;
        tail = 0;
        count = 0;
    }

    void insert(T item) {
        if (count >= 5)
            throw "Queue Overflow";

        arr[tail] = item;
        tail = (tail + 1) % 5;
        count++;
    }

    T remove() {
        if (count <= 0)
            throw "Queue Underflow";

        T item = arr[head];
        head = (head + 1) % 5;
        count--;
        return item;
    }
};

// -------- MAIN FUNCTION --------
int main() {
    Queue<int> q;
    int choice, value;

    while (true) {
        cout << "\n1. Insert\n2. Remove\n3. Exit\nEnter choice: ";
        cin >> choice;

        try {
            if (choice == 1) {
                cout << "Enter value: ";
                cin >> value;
                q.insert(value);
                cout << "Inserted successfully";
            }
            else if (choice == 2) {
                value = q.remove();
                cout << "Removed: " << value;
            }
            else if (choice == 3) {
                break;
            }
        }
        catch (const char* msg) {
            cout << "Exception: " << msg << endl;
        }
    }
    return 0;
}
