#include <bits/stdc++.h>
using namespace std;

void test(){
    string s;
    cin >> s;
    string p;
    cin.ignore();
    getline(cin,p);

    map<char,int> char_count;
    string f(1, p[0]);
    size_t s_size = s.size();
    size_t p_size = p.size();

    for(int i=0; i<s_size; i++){
        char_count[s[i]] += 1;
        if(i<p_size)
            char_count[p[i]] -= 1;
    }

    string anagram = "";

    for(auto it=char_count.begin(); it!=char_count.end(); it++){
        for(int i=0; i<it->second; i++){
            anagram.push_back(it->first);
        }
    }

    string temp(anagram);
    temp.append(f);
    sort(temp.begin(), temp.end(), greater<char>());
    string res = "";



    if(anagram.find( f ) == -1){
        res.append(anagram.substr(0,temp.size()-temp.find(f)-1));
        res.append(p);
        res.append(anagram.substr(temp.size()-temp.find(f)-1,  anagram.size()-temp.size()-temp.find(f)-1));
    }else{
        string res1 = "";
        res1.append(anagram.substr(0,anagram.find(f)));
        res1.append(p);
        res1.append(anagram.substr(anagram.find(f), anagram.size()-anagram.find(f)));
        res.append(anagram.substr(0,temp.size()-temp.find(f)-1));
        res.append(p);
        res.append(anagram.substr(temp.size()-temp.find(f)-1,  anagram.size()-temp.size()-temp.find(f)-1));
        if(res1 < res)
            res = res1;
    }

    cout << res << endl;
}

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--)
	    test();

	return 0;
}
