#include <string>
#include <list>
#include <cassert>
#include <iostream>
#include "PartitionAnyType.h"
using namespace std;

bool MoreThanSix(string name) {
    if (name.length() > 6)
        return true;
    else
        return false;
}
bool lessThan(int number, int poivt) {
    if (number < poivt)
        return true;
    else 
        return false;
}
int main(int argc, char** argv) {
    string array[] = {"apple", "banana", "grape", "blackberry", "orange", "watermelon"};
    int size = 6;
    string* middle = partition(array, size, MoreThanSix);
    for (string* i = array; i < middle; i++) {
        cout<<*i<<"\t";
    }
    cout<<endl;
    for (string* i = middle; i < array + size; i++) {
        cout<<*i<<"\t";
    }
}
