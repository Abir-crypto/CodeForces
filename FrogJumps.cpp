#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int numOfL = 0;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'R')
            {
                if(numOfL<count){
                    numOfL = count;
                }
                count = 0;
            }
            else{
                count++;
            }
        }
        
        if (numOfL < count)
        {
            numOfL = count;
        }
        cout << numOfL + 1 << endl;
    }
}