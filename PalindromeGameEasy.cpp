#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int numOfZero = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0'){
                numOfZero++;
            }
        }
        // cout << numOfZero << endl;
        if (numOfZero == 1)
        {
            cout << "BOB" << endl;
        }
        else if(numOfZero%2==0){
            cout << "BOB" << endl;
        }
        else{
            cout << "ALICE" << endl;
        }
    }
}