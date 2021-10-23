#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    //function<void(int)> f;
    auto f = [&a](){
        a=a+5;
    };
    f();
    cout << a << endl;
    return 0;
}
