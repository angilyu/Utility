namespace wenjing{
namespace util{

int compactString(char* string, char ch) {
    char* pos = string;
    // TODO: THE NAME SUCKS
    bool lastIsCh = false;
    int count = 0;

    while (*pos != '\0') {
        if (*pos == ch && lastIsCh == true) {
            ++count;
        } else {
            if (count > 0)
                *(pos - count) = *pos;
        }
        lastIsCh = *pos == ch;
        pos++;
    }

    *(pos - count) = '\0';
    return count;
}

} // end namespace util
} // end namespace wenjing
