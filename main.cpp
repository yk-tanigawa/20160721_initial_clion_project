#include <iostream>
using namespace std;

#include "Rect.h"

static const int i1 = 4;

int main() {

    const int i = 3;
    Rect r{i, i1};
    std::cout << r.area() << std::endl;

    int p = r.perimeter();

    std::cout << p << std::endl;

    return 0;
}
