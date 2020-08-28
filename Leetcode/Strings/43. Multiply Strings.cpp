/*class Solution {
public:
    string multiply(string num1, string num2) {
        string prod("");
        for(auto c1=num2.rbegin(); c1!=num2.rend(); c1++){
            string temp = "";
            int val1 = *c1 - '0';
            int carry = 0;
            for(auto c2=num1.rbegin(); c2!=num1.rend(); c2++){
                int val2 = *c2 - '0';
                int p = (val2 * val1) + carry;
                temp.insert(0,to_string(p%10));
                cout << carry << " ";
                carry = p/10;
                cout << temp << endl;
            }
            carry = 0;
        }
        return prod;
    }
};*/

class Solution {
public:
    string multiply(string num1, string num2)
    {
        int n = num1.size();
        int m = num2.size();
        string s(n + m, '0');
        for(int i = n - 1; i >= 0; i--)
        {
            for(int j = m - 1; j >= 0; j--)
            {
                int p = (num1[i] - '0') * (num2[j] - '0') + (s[i + j + 1] - '0');
                s[i+j+1] = p % 10 + '0';
                s[i+j] += p / 10 ;
            }
       }
       for(int i = 0; i < m + n; i++)
       {
          if(s[i] !='0')
			  return s.substr(i);
       }
       return "0";
    }
    
};