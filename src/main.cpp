#include <iostream>
using namespace std;

#include "Rect.hpp"
#include "201607221_initial_clion_project_Config.h"

static const int i1 = 4;

int main() {
    std::cout << "version " << VERSION_MAJOR << "." << VERSION_MINOR << std::endl;

    const int i = 3;
    Rect r{i, i1};
    std::cout << r.area() << std::endl;

    int p = r.perimeter();

    std::cout << p << std::endl;

    return 0;
}
