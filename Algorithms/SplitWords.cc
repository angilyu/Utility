#include <iostream>
#include <vector>
#include <set>
using namespace std;
typedef set<string> Dict;
typedef void OnSplitted(const vector<string>& v);
Dict dictionary;

void split(const char* str, const Dict& dict, OnSplitted onSplitted, vector<string>& v) {
    const char* pos = str;
    while (*pos != '\0') {
        string s(str, pos + 1);
        pos++;
        if (dict.find(s) != dict.end()) {
            v.push_back(s);
            if (*pos == '\0') {
                onSplitted(v);
            } else {
                split(pos, dict, onSplitted, v);
            }
            v.pop_back();
        }
    }
}
void split(const char* str, const Dict& dict, OnSplitted onSplitted) {
    vector<string> v;
    split(str, dict, onSplitted, v);
}
void print(const vector<string>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout<<v[i]<<"\t";
    }
    cout<<endl;
}
int main(int argc, char** argv) {
    dictionary.insert("how");
    dictionary.insert("are");
    dictionary.insert("you");
    dictionary.insert("howa");
    dictionary.insert("re");
    dictionary.insert("you");

    char line[] = "howareyou";
    cout<<line<<endl;
    split(line, dictionary, print);
}
