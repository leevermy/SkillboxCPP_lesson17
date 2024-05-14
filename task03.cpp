#include <iostream>
#include <cstring>

bool substr(const char* a, const char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    
    if (lenA < lenB || *b == '\0') {
        return false;
    }

    for (int i = 0; i <= lenA - lenB; ++i) {
        bool found = true;
        for (int j = 0; j < lenB; ++j) {
            if (a[i + j] != b[j]) {
                found = false;
                break;
            }
        }
        if (found) return true;
    }
    return false;
}

int main() {
    const char* a = "Hello world";
    const char* b = "rld";
    const char* c = "banana";
    std::cout << std::boolalpha << substr(a, b) << " " << substr(a, c);
    return 0;
}