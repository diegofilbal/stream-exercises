#include <iostream>
#include <vector>
#include <fstream>

int main (){

    std::vector <int> numbers;
    int val;

    std::ifstream ifs;
    ifs.open("input.txt");

    while (ifs >> val)
        numbers.push_back(val);

    ifs.close();

    std::ofstream ofs;
    ofs.open ("invertido.txt");

    for (int i{0}; i < (int) numbers.size(); i++){
        ofs << numbers.at(numbers.size() - 1 - i) << "\n";
    }
    
    ofs.close();

    return 0;
}