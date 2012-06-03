//3. String compaction: how can we remove the extra white spaces(more than one consecutive white spaces), in place?
#include <iostream>
using namespace std;
void compactString(char* string) {
    // TODO CHECK NULL
    char* pRead = string;
    char* pActual = string;
    bool preBlank = false;

    // WARNING: NO pRead != '\0'
    // NO: pRead == NULL
    while (*pRead != '\0') {
        if (*pRead == ' ' && preBlank == true) {
            // TODO ADD THE FOLLOWING
            // Do nothing
        } else {
            *pActual = *pRead;
            pActual++;
        }

        preBlank = *pRead == ' ';
        /*
        if (*pRead == ' ') {
            preBlank = true;
        } else {
            preBlank = false;
        }
        */
        pRead++;
    }
    *pActual = '\0';
}
int main(int argc, char** argv) {
    // char string[] = "   hello  world   !";
    char string[] = "         ";
    cout<<"Start:"<<string<<":End"<<endl;
    compactString(string);  
    cout<<"Start:"<<string<<":End"<<endl;
}
