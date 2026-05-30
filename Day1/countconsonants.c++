#include<iostream>
using namespace std;

int main() {
    string str;
    int count = 0;

    cout << "Enter the string: ";
    getline(cin, str);

    for(char ch : str) {
        if(((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) &&
           ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
           ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            count++;
        }
    }

    cout << "Consonants = " << count;

    return 0;
}