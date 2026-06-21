#include <fstream>
#include <iostream>

int main()
{
    std::ifstream input("Random.txt");
    if (!input) {
        std::cout << "Cannot open Random.txt" << '\n';
        return 1;
    }

    float sum = 0.0;
    int count = 0;
    float value = 0.0;

    while (input >> value) {
        sum += value;
        ++count;
    }

    if (count == 0) {
        std::cout << "No numbers found." << '\n';
        return 0;
    }

    std::cout << "Count: " << count << '\n';
    std::cout << "Sum: " << sum << '\n';
    std::cout << "Average: " << (sum / count) << '\n';

    return 0;
}
