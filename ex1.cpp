#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void printHeader (const vector <string> &fields);
int getInteger (string msg_);

int main (){

    vector <string> fieldNames = { "ITEM", "QUANTIDADE", "VALOR UNITARIO"};
    printHeader (fieldNames);

    return EXIT_SUCCESS;
}

void printHeader (const vector <string> &fields){

    for (string field : fields)
        cout << "+" << setw (field.length() + 3) << setfill('-');
    
    cout << "+" << endl;

    for (string field : fields)
        cout << "| " << field << " ";
    
    cout << "|" << endl;

    for (string field : fields)
        cout << "+" << setw (field.length() + 3) << setfill('-');
    
    cout << "+" << endl;

}

int getInteger (string msg_){

    
    cout << "Insira  o número: ";
}