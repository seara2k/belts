#include <iostream>

class Incognizable {
public:
    Incognizable() {
        i = 1;
    }
    Incognizable(const int y) {i=y;}

    Incognizable(const int y, const int z) {i=y-z;}
private:
    int i;
};


int main() {
    Incognizable a;
    Incognizable b = {};
    Incognizable c = {0};
    Incognizable d = {0, 1};
    return 0;
}
