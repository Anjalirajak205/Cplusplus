#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int u= 0, l= 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            u++;
        else
            l++;
    }

    
    if (u > l) {
        
        for (int i = 0; i < str.length(); i++) {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;   
        }
    } else {
        
        for (int i = 0; i < str.length(); i++) {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;   
    }

    cout << str;
    return 0;
}
}