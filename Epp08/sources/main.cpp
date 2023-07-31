#include <iostream>
#include <vector>
#include "stats.h"

int main(int argc, char** argv) {

    std::vector<int> v = {7, 5, 16, 9};

    double avg = mean(v.data(), v.size()); // v.data() give the pointer of the starting of the array
    std::cout << "mean : " << avg << std::endl;

    return 0;
}