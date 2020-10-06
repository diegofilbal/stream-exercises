#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main (){

    vector <int> numbers;
    int val;

    ifstream ifs;
    ifs.open("input_ex2.txt");

    while (ifs >> val)
        numbers.push_back(val);

    ifs.close();

    ofstream ofs;
    ofs.open ("output_ex2.txt");

    for (int i{0}; i < (int) numbers.size(); i++){
        ofs << numbers.at(numbers.size() - 1 - i) << "\n";
    }
    
    ofs.close();

    return 0;
}