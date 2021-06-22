#include <bits/stdc++.h>
using namespace std;
/*
 * Complete the 'isBalanced' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
unordered_map<char, char> mp = {{'{', '}'}, {'(', ')'}, {'[', ']'}};
vector<char> catalog = {'(', '{', '['};

string isBalanced(string s)
{
    stack<char> st;
    for(char ch:s){
         if (count(catalog.begin(), catalog.end(), ch))
                {
                    st.push(ch);
                }
                else{
                    if(st.empty())  return "NO";
                    char ch2 = st.top();
                    st.pop();
                      if (!(ch == mp[ch2]))
                    {
                       return "NO";
                    }

                }
    }
    if(st.empty())  return "YES";
    else return "NO";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
    return 0;
  }
