#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, c;
    cin >> c >> n;
    string encrypt, decrypt;
    cin >> encrypt >> decrypt;

    string arr[n];
    // for (int i = 0; i < n;i++){
    //     cin.ignore();
    //     getline(cin, arr[i]);
    //     // cout << i << endl;
    // }

    map<char, char> mymap;

    for (int i = 0; i < c;i++){
        mymap[encrypt[i]] = decrypt[i];
    }

    // auto it = mymap.find('a');
    // bool check = it == mymap.end();
    // cout << check << endl;

    for (int i = 0; i < n;i++){
        string str = "";
        for (int j = 0; j < arr[i].size(); j++)
        {
            if(mymap.find(arr[i][j]) != mymap.end()){
                str += mymap[arr[i][j]];
            }
        }
    }

    // for (auto i = mymap.begin(); i != mymap.end(); i++){
    //     cout << i->first << " " << i->second << endl;
    // }
}