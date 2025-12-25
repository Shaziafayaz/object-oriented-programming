#include <iostream>
using namespace std;

// LINK CLASS 
class link {
public:
    int data;
    link* next;

    link(int d) {
        data = d;
        next = NULL;
    }
};

//  LINKLIST CLASS 
class linklist {
private:
    link* first;

public:
    // Constructor
    linklist() {
        first = NULL;
    }

    // COPY CONSTRUCTOR (deep copy)
    linklist(const linklist& other) {
        first = NULL;
        link* current = other.first;

        while (current != NULL) {
            insert(current->data);
            current = current->next;
        }
    }

    // ASSIGNMENT OPERATOR (deep copy)
    linklist& operator=(const linklist& other) {
        if (this == &other)
            return *this;

        // delete existing list
        while (first != NULL) {
            link* temp = first;
            first = first->next;
            delete temp;
        }

        // copy new list
        link* current = other.first;
        while (current != NULL) {
            insert(current->data);
            current = current->next;
        }

        return *this;
    }

    // Destructor
    ~linklist() {
        while (first != NULL) {
            link* temp = first;
            first = first->next;
            delete temp;
        }
    }

    // Insert at beginning
    void insert(int d) {
        link* newlink = new link(d);
        newlink->next = first;
        first = newlink;
    }

    // Display list
    void display() const {
        link* current = first;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

//  MAIN FUNCTION
int main() {
    // create list using pointer
    linklist* list1 = new linklist;

    list1->insert(10);
    list1->insert(20);
    list1->insert(30);

    cout << "List1: ";
    list1->display();

    // copy constructor
    linklist list2(*list1);
    cout << "List2 (copy constructor): ";
    list2.display();

    // assignment operator
    linklist list3;
    list3 = *list1;
    cout << "List3 (assignment): ";
    list3.display();

    // delete original list
    delete list1;

    cout << "List2 after deleting list1: ";
    list2.display();

    cout << "List3 after deleting list1: ";
    list3.display();

    return 0;
}
