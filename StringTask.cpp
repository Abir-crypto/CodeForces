#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    string newstr = "";
    for (int i = 0; i < str.size(); i++)
    {
        char c = str[i];
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c=='y')
        {
        }
        else{
            newstr.append(".");
            newstr += c;
        }
    }
    cout << newstr << endl;
}