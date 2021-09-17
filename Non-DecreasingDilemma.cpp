#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;
    long long arr[n + 1];
    // vector<long long> query[q];

    for (long long i = 1; i < n+1;i++){
        cin >> arr[i];
    }
    for (long long i = 0; i < q;i++){
        long long query[3];
        for (long long j = 0; j < 3; j++)
        {
            cin >> query[j];
        }

        if(query[0]==1){
            arr[query[1]] = query[2];
        }
        else{
            long long count = 0;
            for (long long x = query[1]; x <= query[2]; x++)
            {
                int y = x;
                while(arr[x]<=arr[y] && y<=query[2]){
                    if(x!=y && arr[y]<arr[y-1]){
                        break;
                    }
                    count++;
                    y++;
                }
            }
            // count += (query[2] - query[1] +1);
            cout << count << endl;
        }

    }
}
