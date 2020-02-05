#include <iostream>
using namespace std;

int findMSB(int num) {
    int result = 1;
    while(num) { // 5 
        num /= 2;
        result <<= 1;
    }
    return result / 2;
}
int main() {
    int num;
    cin >> num;
    int result = findMSB(num);
    cout << result;
    return 0;
}