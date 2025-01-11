#include <iostream>
#include <string>
using namespace std;
                    
int main() {

    string s;
    cin >> s;

    int maxR = 1;
    int currR = 1;
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i-1]) {
            currR++;
        }
        else {
            maxR = max(maxR, currR);
            currR = 1;
        }
    }
    maxR = max(maxR, currR);
    cout << maxR << endl;


   return 0;
}