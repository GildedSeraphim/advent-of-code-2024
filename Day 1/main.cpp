#include <iostream>
#include <fstream>
#include <algorithm>

int main() {
    std::fstream infile("input.txt");
    int a, b;
    int list1[1000];
    int list2[1000];
    int count = 0;
    while(infile >> a >> b) {
        list1[count] = a;
        list2[count] = b;
        count ++;
    }
    for(int i = 0; i < 6; i ++){
        std::cout << list1[i];
    }
    std::cout << std::endl;
    
    int n = sizeof(list1) / sizeof(list1[0]);
    std::sort(list1, list1 + n);
    n = sizeof(list2) / sizeof(list2[0]);
    std::sort(list2, list2 + n);

    for(int i = 0; i < 6; i ++){
        std::cout << list1[i];
    }

    /*

    int sum = 0;

    for(int i = 0; i <= count; i++) {
        int add = list1[i] - list2[i];
        if(add < 0) {
            add = add * -1;
        }
        sum += add;
        add = 0;
    }

    std::cout << sum;
*/
    return 0;
}