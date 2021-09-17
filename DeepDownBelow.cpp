#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long largest[n] = {1};
        long long index[n];
        
        vector<long long> caves[n];
        for (long long i = 0; i < n;i++){
            long long k;
            cin >> k;
            for (long long j = 0; j < k;j++){
                long long x;
                cin >> x;
                caves[i].push_back(x);
                if(largest[i]<x)
                    largest[i] = x;
                
            }
        }

        long long neededValue[n];
        long long totallyLargestValue=0;
        long long vectorOfTotallyLargestValue=0;
        for (long long i = 0; i < n; i++)
        {
            if(largest[i]>totallyLargestValue){
                totallyLargestValue = largest[i];
                vectorOfTotallyLargestValue = i;
            }
            auto it = find(caves[i].begin(), caves[i].end(), largest[i]);
            long long indexOfVal = it - caves[i].begin();
            neededValue[i] = largest[i] + 1 - indexOfVal;
        }

        sort(neededValue, neededValue + n);

        long long count = 0;
        for (long long i = 0; i < n;i++){
            if(i != vectorOfTotallyLargestValue){
                count+=caves[i].size();
            }
        }
        // totallyLargestValue = totallyLargestValue - count;

        cout << max(neededValue[0], neededValue[n-1]-count) << endl;
    }
}