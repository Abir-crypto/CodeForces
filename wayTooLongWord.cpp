#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s.size()>10){
            string str = "";
            str += s[0];
            str.append(to_string(s.size()-2));
            str += s[s.size() - 1];

            cout << str << endl;
        }
        else{
            cout << s << endl;
        }
    }
}