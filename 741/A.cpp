#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long l, r;
        cin >> l >> r;
        int mod = 0;
        if(l < r/2+1){
            l = r / 2 + 1;
            cout << r % l << endl;
            continue;
        }
        cout << r - l << endl;
    }
}