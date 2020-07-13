#include <bits/stdc++.h>
using namespace std;

#define mod 998244353

map<string,int> M;

long long int modInverse(long long int a, long long int m)
{
	long long int m0 = m;
	long long int y = 0, x = 1;

	if (m == 1)
	return 0;

	while (a > 1)
	{
        long long int q = a / m;
        long long int t = m;

		m = a % m, a = t;
		t = y;

		y = x - q * y;
		x = t;
	}

	if (x < 0)
	x += m0;

	return x;
}

bool startsWith(string toMatch, string mainStr)
{
    if(mainStr.find(toMatch) == 0)
        return true;
    else
        return false;
}

long long int getPower(string s){
    long long int pow = 0;
    for(int i=0; i<s.size(); i++){
        string temp = s.substr(0,i+1);
        string temp2 = temp;
        bool loop = true;
        while(loop){
            if(temp2.size() == s.size())
                break;

            if(s.substr(temp2.size(),temp.size()) == temp){
                temp2.append(temp);
                if(temp2.size() == s.size())
                    break;
            }else{
                loop = false;
            }
        }

        if(s.size() - temp2.size() == 0){
            cout << temp << " ";
            for(auto c:temp){
                string t(1,c);
                pow += M[t];
            }
        }else
        if(s.size()-temp2.size() <= temp.size()){
            if(startsWith(s.substr(temp2.size(),s.size()-temp2.size()), temp)){
                cout << temp<< " ";
                for(auto c:temp){
                    string t(1,c);
                    pow += M[t]%mod;
                }
            }
        }
    }
    return pow;
}

void test(){
    string alpha[] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    string S; cin >> S;
    long long int val;

    for(int i=0; i<26; i++){
        cin >> val;
        M[alpha[i]] = val;
    }
    long long int numerator = 0;
    long long int denominator = (S.size()*(S.size()+1))/2;
    string temp = "";
    for(int i=0; i<S.size(); i++){
        for(int j=0; j<S.size()-i; j++){
            temp = S.substr(i,j+1);
            cout << temp << "->";
            if(j == 0){
                numerator += M[temp]%mod;
                cout << temp << " ";
            }else{
                numerator += getPower(temp)%mod;
            }
            cout << endl;
        }
    }
    cout << numerator << "*";
    cout << (( (numerator % mod) * (modInverse(denominator, mod) % mod) ) % mod)%mod << "\n";
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
