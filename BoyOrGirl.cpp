#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    cin >> str;

    map<char, int> m;
    for (int i = 0; i < str.size(); i++)
    {
        cout << "for index of " << str[i] << " ->";
        cout << m[str[i]] << " ";
        // m[str[i]]++;
        cout << m[str[i]] << endl;
    }

    int count = 0;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
        count++;
    }
    // cout << m['7'] << endl;
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
}