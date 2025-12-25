#include <iostream>
using namespace std;

//  BASE CLASS 
class publication {
protected:
    string title;
    float price;

public:
    virtual void getdata() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }

    virtual void putdata() {
        cout << "\nTitle: " << title;
        cout << "\nPrice: " << price;
    }

    // VIRTUAL function for oversize check
    virtual bool isOversize() = 0;   // pure virtual

    virtual ~publication() {}
};

// BOOK CLASS 
class book : public publication {
    int pages;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter number of pages: ";
        cin >> pages;
    }

    void putdata() {
        publication::putdata();
        cout << "\nPages: " << pages;
        if (isOversize())
            cout << "\nOversize";
    }

    bool isOversize() {
        return pages > 800;
    }
};

//  TAPE CLASS 
class tape : public publication {
    float time;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter playing time (minutes): ";
        cin >> time;
    }

    void putdata() {
        publication::putdata();
        cout << "\nPlaying Time: " << time << " minutes";
        if (isOversize())
            cout << "\nOversize";
    }

    bool isOversize() {
        return time > 90;
    }
};

//  MAIN FUNCTION 
int main() {
    publication* pubarr[10];
    int count = 0;
    char choice;

    do {
        cout << "\nEnter book or tape (b/t): ";
        cin >> choice;

        if (choice == 'b')
            pubarr[count] = new book;
        else if (choice == 't')
            pubarr[count] = new tape;
        else
            continue;

        pubarr[count]->getdata();
        count++;

        cout << "Add another? (y/n): ";
        cin >> choice;

    } while (choice == 'y');

    cout << "\n\n--- Publication Details ---";

    for (int i = 0; i < count; i++) {
        pubarr[i]->putdata();
        cout << "\n--------------------------";
    }

    return 0;
}
