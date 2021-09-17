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
        for (int i = 0; i < n;i++){
            cin >> arr[i];
        }
        int itr=0;
        for (int i = 0; i < n - 1;i++){
            bool check = false;
            for (int j = 0; j < n - 1 - i; j++)
            {
                if(arr[j]>arr[j+1]){
                    swap(arr[j], arr[j + 1]);
                    check = true;
                }
            }
            if(!check){
                break;
            }
            itr++;
        }
        cout << itr << endl;
    }
}