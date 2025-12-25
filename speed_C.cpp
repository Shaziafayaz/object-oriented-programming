#include <iostream>
using namespace std;
class Speed {
    float distance;
    float time;
public:
    Speed(float d, float t) {
        distance = d;
        time = t;
    }
    void display() {
        float speed = distance / time;
        cout << "Speed = " << speed << " km/hr" << endl;
    }
};
int main() {
    Speed s1(120, 2);
    s1.display();
    return 0;
}