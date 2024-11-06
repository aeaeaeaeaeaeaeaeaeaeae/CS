#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

void func1(std::vector<int>& x) {
    int min = 10000;
    for (int i : x) {
        min = std::min(min, i);
    }
    for (int& i : x) {
        i *= min;
    }
}

void print(const std::vector<int>& x) {
    for (int i : x) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void func2(const std::set<int>& set1, const std::set<int>& set2) {
    std::set<int> set;
    for (int i : set1) {
        if (set2.find(i) != set2.end()) {
            set.insert(i);
        }
    }
    for (int i : set) {
        if (i % 2 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> a = { 11, 12, 13, 14, 15 };
    std::vector<int> b = { 15, 16, 17, 18, 19 };

    func1(a);
    func1(b);

    std::cout << "Number 1" << std::endl;
    print(a);
    print(b);

    std::set<int> setA = { 1, 2, 3, 4, 5 };
    std::set<int> setB = { 1, 2, 3 };

    std::cout << "Number 2" << std::endl;
    func2(setA, setB);

    return 0;
}