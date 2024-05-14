#include <iostream>
#include <cstring>

bool substr(const char* a, const char* b) {
    if (strlen(a) < strlen(b) || *b == '\0') {
        return false;
    }

    bool found = false;

    for (int i = 0; i <= strlen(a) - strlen(b); ++i) {
        if (*(a + i) == *b) {
            found = true;
            for(int j = 1; j < strlen(b); ++j) {
                if (*(b + j) != *(a + i + j)) {
                    found = false;
                    break;
                }
            }
            if (found) break;
        }
    }
    return found;
}

int main() {
    const char* a = "Hello world";
    const char* b = "rld";
    const char* c = "banana";
    std::cout << std::boolalpha << substr(a, b) << " " << substr(a, c);
    return 0;
}