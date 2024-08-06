#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        char op;
        cin >> a >> op >> b;
        
        switch (op) {
            case '+':
                cout << a + b << endl;
                break;
            case '-':
                cout << a - b << endl;
                break;
            case '*':
                cout << a * b << endl;
                break;
            case '/':
                if (b == 0) {
                    cout << "khong tinh duoc" << endl;
                } else {
                    cout << a / b << endl;
                }
                break;
            case '%':
                if (b == 0) {
                    cout << "khong tinh duoc" << endl;
                } else {
                    cout << a % b << endl;
                }
                break;
            default:
                cout << "khong tinh duoc" << endl;
        }
    }
    
    return 0;
}