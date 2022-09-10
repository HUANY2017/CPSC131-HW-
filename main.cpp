#include <iostream>
#include "vector131.h"

using namespace std;

int main(){

    vector131 vector131;
    cout <<"\nCrated a emtpy linked-list.\n";
    cout <<"Adding 1,2,3,4,5 to the list in order:\n";
    vector131.push_back(1);
    vector131.push_back(2);
    vector131.push_back(3);
    vector131.push_back(4);
    vector131.push_back(5);
    cout<<"Print the list: ";
    vector131.print();

    vector131.resize();

    cout <<"\nAdding 1,2,3,4,5 to the list in reverse order:\n";
    vector131.push_front(1);
    vector131.push_front(2);
    vector131.push_front(3);
    vector131.push_front(4);
    vector131.push_front(5);
    cout<<"Print the list: ";
    vector131.print();
  
    return 0;
}
