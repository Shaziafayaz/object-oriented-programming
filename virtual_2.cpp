#include <iostream>
using namespace std;

//  DISTANCE CLASS 
class Distance {
private:
    int feet;
    float inches;

public:
    // Default constructor
    Distance() {
        feet = 0;
        inches = 0.0;
    }

    // Two-argument constructor
    Distance(int f, float i) {
        feet = f;
        inches = i;
    }

    // ONE-ARGUMENT constructor (float → Distance)
    Distance(float dist) {
        feet = int(dist);
        inches = (dist - feet) * 12;
    }

    // Display function
    void showDist() const {
        cout << feet << "'-" << inches << "\"";
    }

    // Friend operator *
    friend Distance operator*(Distance, Distance);
};

//  FRIEND OPERATOR FUNCTION
Distance operator*(Distance d1, Distance d2) {
    float dist1 = d1.feet + d1.inches / 12;
    float dist2 = d2.feet + d2.inches / 12;

    float result = dist1 * dist2;
    return Distance(result);   // uses one-argument constructor
}

//  MAIN FUNCTION 
int main() {
    Distance dist1(3, 6.0);   // 3 feet 6 inches
    Distance dist2(2, 3.0);   // 2 feet 3 inches
    Distance dist3;
    Distance dist4;

    cout << "dist1 = ";
    dist1.showDist();

    cout << "\ndist2 = ";
    dist2.showDist();

    // Distance * Distance
    dist3 = dist1 * dist2;
    cout << "\ndist1 * dist2 = ";
    dist3.showDist();

    // float * Distance
    dist4 = 7.5 * dist2;
    cout << "\n7.5 * dist2 = ";
    dist4.showDist();

    cout << endl;
    return 0;
}
