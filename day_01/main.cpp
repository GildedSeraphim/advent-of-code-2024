#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::ifstream infile("input.txt");
    std::vector<int> list1, list2;
    int a, b;

    // Read all numbers from the file
    while(infile >> a >> b) {
        list1.push_back(a);
        list2.push_back(b);
    }

    // Sort both lists
    std::sort(list1.begin(), list1.end());
    std::sort(list2.begin(), list2.end());

    // Calculate total distance
    int total_distance = 0;
    for(size_t i = 0; i < list1.size(); i++) {
        total_distance += std::abs(list1[i] - list2[i]);
    }

    // Print results
    std::cout << "Sorted List 1: ";
    for(int num : list1) std::cout << num << " ";
    std::cout << "\nSorted List 2: ";
    for(int num : list2) std::cout << num << " ";
    std::cout << "\nTotal Distance: " << total_distance << std::endl;

    return 0;
}