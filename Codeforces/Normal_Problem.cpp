/*##########################################################
############################################################
###                                                      ###
###             Author: ISMAM HASAN OVI                  ###
###            Created: 15-12-2024 | 21:26:24            ###
###                                                      ###
############################################################
##########################################################*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string a;
        cin >> a;

        string b;
        for(int i=a.size()-1; i>=0; i--){
            if(a[i] == 'p'){
                b += 'q';
            }
            else if(a[i] == 'q'){
                b += 'p';
            }
            else{
                b += 'w';
            }
        }
        cout << b << endl;
    }

    return 0;
}