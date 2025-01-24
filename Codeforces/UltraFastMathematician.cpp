/*##########################################################
############################################################
###                                                      ###
###             Author: ISMAM HASAN OVI                  ###
###            Created: 23-01-2025 | 01:02:56            ###
###                                                      ###
############################################################
##########################################################*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    string result = "";
    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] == s2[i]) {
            result += '0';
        } else {
            result += '1';
        }
    }
    cout << result << endl;
    return 0;
}