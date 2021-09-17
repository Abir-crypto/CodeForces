#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(k==1){
            string str = to_string(n);
            string ans = "";
            char d = str[0];
            for (int i = 0; i < str.size();i++){
                ans += d;
            }
            cout << ans << endl;
        }
        else{
            string str = to_string(n);
            string ans = "";
            bool lower = true;
            char d = str[1];

            map<char, int> m;

            for (int i = 2; i < str.size(); i++)
            {
                if(str[i]>d){
                    lower = false;
                }
                m[str[i]]++;
            }
            int count = 0;
            for (auto it = m.begin(); it != m.end();it++){
                count++;
            }
            if (count == k)
            {
                cout << n << endl;
            }
            else if (lower)
            {
                if (str[0] > str[1])
                {
                    cout << str[0];
                    for (int i = 1; i < str.size(); i++)
                    {
                        cout << str[1];
                    }
                    cout << endl;
                }
                else{
                cout << str[0];
                cout << str[1];
                for (int i = 2; i < str.size();i++){
                    cout << str[0];
                }
                cout << endl;
            }
                
            }
            else{

                int x = 1;
                while(str[x]==str[x-1]){
                    x++;
                }
                char d = str[x];
                d++;
                if (str[0] > d)
                {
                    for (int i = 0; i < x;i++){
                        cout << str[i];
                    }
                    for (int i = x; i < str.size();i++){
                        cout << d;
                    }
                    cout << endl;
                }
                else{
                    for (int i = 0; i < x;i++){
                        cout << str[i];
                    }
                    cout << d;
                    x++;
                    for (int i = x; i < str.size(); i++)
                    {
                        cout << str[0];
                    }
                    cout << endl;
                }
            }
        }
    }
}