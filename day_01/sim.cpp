#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <algorithm>

int main() {
    std::ifstream infile("input.txt");
    std::vector<int> left_list, right_list;
    int a, b;

    // Read numbers into lists
    while(infile >> a >> b) {
        left_list.push_back(a);
        right_list.push_back(b);
    }

    // Count occurrences in right list
    std::unordered_map<int, int> right_count;
    for(int num : right_list) {
        right_count[num]++;
    }

    // Calculate similarity score
    int similarity_score = 0;
    for(int num : left_list) {
        similarity_score += num * right_count[num];
    }

    // Output results
    std::cout << "Similarity Score: " << similarity_score << std::endl;

    return 0;
}