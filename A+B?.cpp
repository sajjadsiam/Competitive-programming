#include <iostream>
#include <string>
using namespace std;

int main() {
    int p;
    cin >> p;
    string x;

    while (p > 0) {
        cin >> x;

        string num1_str = x.substr(0); 
        string num2_str = x.substr(2);    
        int num1 = stoi(num1_str);
        int num2 = stoi(num2_str);

        int q = num1 + num2;
        cout << q << endl;

        p--;
    }

    return 0;
}
