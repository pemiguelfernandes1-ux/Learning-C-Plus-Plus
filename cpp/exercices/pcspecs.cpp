#include <iostream>
#include <string>
int main() {
    int cpucores;
    float cpufrequency;
    std::string gpumodel;

    std::cout << "How many cores your CPU have (only numbers)?: ";
    std::cin >> cpucores;
    std::cout << "How is your CPU frequency (only numbers)?: ";
    std::cin >> cpufrequency;
    std::cout << "What is your GPU model (NVIDIA, AMD, INTEL) ?: ";
    std::cin >> gpumodel;
    std::cout << "Your CPU have " << cpucores << " cores. Your CPU frequency is " << cpufrequency << "GHZ. Your GPU model is " << gpumodel << "." << std::endl;
    return 0;
}