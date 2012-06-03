#include <iostream>
#include <vector>
#include <set>

using namespace std;

typedef set<string> Dict;
typedef void OnSplitted(const vector<string>& v);

Dict dict;

// ---- Split ----
int getWord(const char* begin, const char* findAfter, const Dict& dict) {
    while (*findAfter != '\0') {
        string s(begin, findAfter + 1);
        if (dict.find(s) != dict.end())
            return findAfter - begin + 1;
        ++findAfter;
    }

    return -1;
}
void split(const char* str, const Dict& dict, 
           OnSplitted onSplitted, vector<string>& v) {
    const char* pos = str;
    while (*pos != '\0') {
        int size = getWord(str, pos, dict);
        if (size == -1)
            return;

        pos = str + size;
        string word(str, pos);

        v.push_back(word);

        if (*pos != '\0') {
            split(pos, dict, onSplitted, v);
        } else {
            onSplitted(v);
        }

        v.pop_back();
    }
   
}
void split(const char* str, const Dict& dict, OnSplitted onSplitted) {
    vector<string> v;
    split(str, dict, onSplitted, v);
}

// ----- Test Function ----- 
void printVector(const vector<string>& v) {
    cout<<"found words: ";
    for (size_t i = 0; i < v.size(); ++i) {
        cout<<v[i]<<", ";
    }
    cout<<endl;
}

int main(char** argv, int argc) {
    dict.insert("liu");
    dict.insert("kai");
    dict.insert("liuk");
    dict.insert("ai");

    split("liukai", dict, printVector);
    split("kaiai", dict, printVector);
    split("", dict, printVector);

    return 0;
}
