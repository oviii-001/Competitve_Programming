#include <iostream>
using namespace std;
                    
int main() {
    int n;
    cin >> n;
    
    long long tsum = (long long)n*(n+1)/2;
    long long gsum = 0;

    for(int i = 0; i < n-1; i++) {
        int x;
        cin >> x;
        gsum += x;
    }
    long long missing = tsum - gsum;
    cout << missing << endl;

   return 0;
}