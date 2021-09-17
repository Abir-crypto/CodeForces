#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int x = n;
        cout << 2 << endl;
        for (n; n > 1; n--)
        {
            cout << x << " " << n - 1 << endl;
            x = x + n - 1;
            x = round((double)x / 2);
        }
        
    }
}