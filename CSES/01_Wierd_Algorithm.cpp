#include <iostream>
using namespace std;
                    
int main() {

    long long n;
    cin >> n;

    //print init value
    cout << n << " ";

    while(n != 1) {
        if(n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        cout << n << " ";
    }

   return 0;
}