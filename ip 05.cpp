#include <iostream>
#include <cstring>

class String {
public:
    String(const char* str) {
        length = std::strlen(str);
        buffer = new char[length + 1];
        std::strcpy(buffer, str);
    }
    
    String(const String& other) {
        length = other.length;
        buffer = new char[length + 1];
        std::strcpy(buffer, other.buffer);
    }
    
    ~String() {
        delete[] buffer;
    }
    
    bool operator==(const String& other) const {
        return std::strcmp(buffer, other.buffer) == 0;
    }
    
private:
    char* buffer;
    size_t length;
};

int main() {
    String str1("apple");
    String str2("orange");
    
    if (str1 == str2) {
        std::cout << "The strings are equal." << std::endl;
    } else {
        std::cout << "The strings are not equal." << std::endl;
    }
    
    return 0;
}
