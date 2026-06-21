#include <fstream>
#include <iostream>

int main() 
{
    // Open the file containing the random numbers.
    std::ifstream input("Random.txt");
    if (!input) {
        std::cout << "Cannot open Random.txt\n";
        return 1;
    }

    // Variables for each number read, the total sum, and the count.
    float value = 0.0f;
    float sum = 0.0f;
    int count = 0;

    // Read each number from the file until end of file.
    while (input >> value) {
        sum += value;  
        count += 1;    
    }

    // Print the final results.
    std::cout << "Count: " << count << '\n';
    std::cout << "Sum: " << sum << '\n';
    std::cout << "Average: " << (count ? sum / count : 0) << '\n';
    return 0;
}
