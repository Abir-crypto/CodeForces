#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        bool oneNotFound = true;
        bool zeroFound = false;
        for (int i = 0; i < str.size()-1; i++)
        {
            if(oneNotFound){
                if(str[i]=='1' && str[i+1]=='1'){
                    oneNotFound = false;
                }
            }
            else{
                if(str[i]=='0' && str[i+1]=='0'){
                    zeroFound = true;
                    cout << "NO" << endl;
                    break;
                }
            }
            
        }
        if(!zeroFound){
            cout << "YES" << endl;
        }
    }
}