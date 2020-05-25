#include <bits/stdc++.h>
using namespace std;

vector<string> split_string(string);

int findEntryWithLargestValue(map<int, int> sampleMap)
{
    pair<int, int> entryWithMaxValue = make_pair(0, 0);
    int sum = 0;

    map<int, int>::iterator currentEntry;
    for (currentEntry = sampleMap.begin(); currentEntry != sampleMap.end(); ++currentEntry)
    {
        sum += currentEntry->second;
        if (currentEntry->second > entryWithMaxValue.second)
        {
            entryWithMaxValue = make_pair(currentEntry->first, currentEntry->second);
        }
    }

    return sum - entryWithMaxValue.second;
}

int equalizeArray(vector<int> arr) {
    int res = 0;

    map<int, int> freq;

    for(int i=0; i<100; i++){
        freq.insert(pair<int, int>(i+1, 0));
    }

    for(int i=0; i<arr.size(); i++){
        freq[arr[i]]++;
    }

    res = findEntryWithLargestValue(freq);

    return res;
}

int main()
{
    int n, val;
    cin >> n;

    vector<int> arr;

    for(int i=0; i<n; i++){
        cin >> val;
        arr.push_back(val);
    }

    cout << equalizeArray(arr);

    return 0;
}
