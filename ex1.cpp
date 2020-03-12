#include <iostream>
#include <iomanip>
#include <vector>

void printHeader (const std::vector <std::string> &fields);
int getInteger (std::string msg_);

int main (){

    std::vector <std::string> fieldNames = { "ITEM", "QUANTIDADE", "VALOR UNITARIO"};
    printHeader (fieldNames);

    return EXIT_SUCCESS;
}

void printHeader (const std::vector <std::string> &fields){

    for (std::string field : fields)
        std::cout << "+" << std::setw (field.length() + 3) << std::setfill('-');
    
    std::cout << "+" << std::endl;

    for (std::string field : fields)
        std::cout << "| " << field << " ";
    
    std::cout << "|" << std::endl;

    for (std::string field : fields)
        std::cout << "+" << std::setw (field.length() + 3) << std::setfill('-');
    
    std::cout << "+" << std::endl;

}

int getInteger (std::string msg_){

    
    std::cout << "Insira  o número: ";
}