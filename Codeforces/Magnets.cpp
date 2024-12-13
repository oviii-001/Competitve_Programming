/*##########################################################
############################################################
###                                                      ###
###             Author: ISMAM HASAN OVI                  ###
###            Created: 18-10-2024 | 00:42:24            ###
###                                                      ###
############################################################
##########################################################*/

#include <iostream>
using namespace std;

int main(){
    int n; //test case
    cin >> n;

    int arr[n]; //magnets
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int count = 1;
    for(int i=0; i<n-1; i++){
        if(arr[i] != arr[i+1]){
            count++;
        }
    }
    cout << count << endl;  //output

    return 0;
}