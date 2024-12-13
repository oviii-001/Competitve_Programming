/*##########################################################
############################################################
###                                                      ###
###             Author: ISMAM HASAN OVI                  ###
###            Created: 18-10-2024 | 02:18:09            ###
###                                                      ###
############################################################
##########################################################*/

#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int count = 1;
    for(int i=1; i<s.length(); i++){
        if(s[i] == s[i-1]){
            count++;
            if(count == 7){
                cout << "YES" << endl;
                return 0;
            }
        }
        else{
            count = 1;
        }
    }
    cout << "NO" << endl;

    return 0;

}