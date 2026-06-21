#include <fstream>
#include <iostream>

int main() {
    std::ifstream input("Random.txt");
    if (!input) {
        std::cout << "Cannot open Random.txt\n";
        return 1;
    }

    float value = 0.0;
    float sum = 0.0;
    int count = 0;

    while (input >> value) {
        sum += value;
        count += 1;
    }

    std::cout << "Count: " << count << '\n';
    std::cout << "Sum: " << sum << '\n';
    std::cout << "Average: " << (count ? sum / count : 0) << '\n';
    return 0;
}
