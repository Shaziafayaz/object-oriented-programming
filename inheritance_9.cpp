#include <iostream>
using namespace std;

// DATE CLASS 
class Date {
    int day, month, year;

public:
    void getDate() {
        cout << "Enter day month year: ";
        cin >> day >> month >> year;
    }

    void showDate() {
        cout << day << "/" << month << "/" << year;
    }
};

// PUBLICATION CLASS 
class Publication {
protected:
    string title;
    float price;

public:
    void getData() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }

    void showData() {
        cout << "\nTitle: " << title;
        cout << "\nPrice: " << price;
    }
};

//  PUBLICATION2 CLASS 
class Publication2 : public Publication {
protected:
    Date pubDate;

public:
    void getData() {
        Publication::getData();
        pubDate.getDate();
    }

    void showData() {
        Publication::showData();
        cout << "\nPublication Date: ";
        pubDate.showDate();
    }
};

//  BOOK CLASS 
class Book : public Publication2 {
    int pages;

public:
    void getData() {
        Publication2::getData();
        cout << "Enter number of pages: ";
        cin >> pages;
    }

    void showData() {
        Publication2::showData();
        cout << "\nPages: " << pages;
    }
};

//  TAPE CLASS 
class Tape : public Publication2 {
    float playingTime;

public:
    void getData() {
        Publication2::getData();
        cout << "Enter playing time (minutes): ";
        cin >> playingTime;
    }

    void showData() {
        Publication2::showData();
        cout << "\nPlaying Time: " << playingTime << " minutes";
    }
};

//  MAIN FUNCTION 
int main() {
    Book b;
    Tape t;

    cout << "\n--- Enter Book Details ---\n";
    b.getData();

    cout << "\n\n--- Enter Tape Details ---\n";
    t.getData();

    cout << "\n\n--- Book Details ---";
    b.showData();

    cout << "\n\n--- Tape Details ---";
    t.showData();

    return 0;
}
