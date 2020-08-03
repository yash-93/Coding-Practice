/*#include <bits/stdc++.h>
using namespace std;

int query(int si, int ss, int se, int qs, int qe, int *st, vector<int> &arr){
    if(qs>se || qe<ss)
        return 0;

    if(ss>=qs && se<=qe)
        return st[si];

    int mid = (ss+se)/2;
    int l = query(2*si, ss, mid, qs, qe, st, arr);
    int r = query(2*si+1, mid+1, se, qs, qe, st, arr);

    return l+r;
}

void buildTree(int si, int ss, int se, int *st, vector<int> &arr){
    if(ss == se){
        st[si] = arr[ss];
        return;
    }

    int mid = (ss+se)/2;

    buildTree(2*si, ss, mid, st, arr);
    buildTree(2*si+1, mid+1, se, st, arr);

    st[si] = st[2*si] + st[2*si+1];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,s,q;
    cin >> n >> m >> s >> q;
    vector<int> cups;
    cups.assign(n,0);
    int ball;
    for(int i=0; i<m; i++){
        cin >> ball;
        cups[ball-1] = 1;
    }

    int a,b;
    for(int i=0; i<s; i++){
        cin >> a >> b;
        swap(cups[a-1], cups[b-1]);
    }

    int x = (int)(ceil(log2(n)));
    int max_size = 2*(int)pow(2, x) - 1;
    int *st = new int[max_size]();

    buildTree(1, 0, n-1, st, cups);

    for(int i=0; i<q; i++){
        cin >> a >> b;
        cout << query(1, 0, n-1, a-1, b-1, st, cups) << " ";
    }

    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;

void preCompute(vector<int> arr, int n, int pre[])
{
	pre[0] = arr[0];
	for (int i = 1; i < n; i++)
		pre[i] = arr[i] + pre[i - 1];
}

int rangeSum(int i, int j, int pre[])
{
	if (i == 0)
	return pre[j];

	return pre[j] - pre[i-1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,s,q;
    cin >> n >> m >> s >> q;
    vector<int> cups;
    cups.assign(n,0);
    int ball;
    for(int i=0; i<m; i++){
        cin >> ball;
        cups[ball-1] = 1;
    }

    int a,b;
    for(int i=0; i<s; i++){
        cin >> a >> b;
        swap(cups[a-1], cups[b-1]);
    }

	int pre[n];
	preCompute(cups, n, pre);
	for(int i=0; i<q; i++){
        cin >> a >> b;
        cout << rangeSum(a-1, b-1, pre) << " ";
    }

	return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

void NumArray(vector<int> &nums, vector<int> &memo) {
    int summ = 0;
    for (int n : nums) {
        summ += n;
        memo.push_back(summ);
    }
}

int sumRange(int i, int j, vector<int> memo) {
    return memo[j+1] - memo[i];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,s,q;
    cin >> n >> m >> s >> q;
    vector<int> cups;
    cups.assign(n,0);
    int ball;
    for(int i=0; i<m; i++){
        cin >> ball;
        cups[ball-1] = 1;
    }

    int a,b;
    for(int i=0; i<s; i++){
        cin >> a >> b;
        swap(cups[a-1], cups[b-1]);
    }

    vector<int> memo = {0};

    NumArray(cups, memo);

    for(int i=0; i<q; i++){
        cin >> a >> b;
        cout << sumRange(a-1,b-1, memo) << " ";
    }
    return 0;
}

