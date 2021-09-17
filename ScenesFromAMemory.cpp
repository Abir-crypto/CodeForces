#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    while (t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        bool isFound = false;
        string ans="";
        char singleAns;
        for (int i = 0; i < k; i++)
        {
            if(s[i]=='2' || s[i]=='3' || s[i]=='5' || s[i]=='7'){
                
            }
            else{
                isFound = true;
                singleAns = s[i];
                cout << 1 << endl;
                cout << s[i] << endl;
                break;
            }
        }
        if(isFound){
            continue;
        }
        bool ansFound = false;
        for (int i = 0; i < k; i++)
        {
            if(ansFound){
                break;
            }
            
            for (int j = i + 1; j < k; j++)
            {
                ans = "";
                ans += s[i];
                ans += s[j];

                int x = stoi(ans);
                auto it = find(primes.begin(), primes.end(), x);
                if(it == primes.end()){
                    cout << 2 << endl;
                    cout << ans << endl;
                    ansFound = true;
                    break;
                }
            }
        }
    }
}