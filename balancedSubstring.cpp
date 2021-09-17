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
        int numOfA=0;
        int numOfB = 0;
        bool isDone = false;
        for (int i = 0; i < n - 1; i++)
        {
            if(s[i]=='a' && s[i+1]=='b'){
                cout << i+1 << " " << i + 2 << endl;
                isDone = true;
                break;
            }
            else if(s[i]=='b' && s[i+1]=='a'){
                cout << i+1 << " " << i + 2 << endl;
                isDone = true;
                break;
            }
        }
        if(!isDone){
            cout << -1 << " " << -1 << endl;
        }
    }
}