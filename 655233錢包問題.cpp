#include <iostream>
using namespace std;
int main() {
    float cash;
    // cash為浮點數
    int i,j,k;
    // i為千位數 j為百位數 k為個位數
    int total = 0;
    cout << "你有多少錢?" << "\n";
    cin >> cash;
    i = cash / 1000;
    j = cash - i * 1000;
    k = cash;
    cash -= k;
    while (cash > 0 && cash != 0) {
        if (cash >= 0.5) {
            cash -= 0.5;
            total += 1;
        } else if (cash > 0) {
            total += cash / 0.1;
        }
        cash *= 10;
    }
    while (j > 0) {
        if (j % 10 >= 5) {
            j -= 5;
            total += 1;
        }
        total += j % 10;
        j /= 10;
    }
    total += i;
    cout << "你至少需要" << total << "個貨幣";
}
