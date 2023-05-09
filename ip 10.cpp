#include <iostream>
using namespace std;

int main() {
    char str[100];
    char *p;
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    p = str;

    while (*p != '\0') {
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' ||
            *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U') {
            vowels++;
        } else if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z')) {
            consonants++;
        }

        p++;
    }

    cout << "No. of vowels: " << vowels << endl;
    cout << "No. of consonants: " << consonants << endl;

    return 0;
}
