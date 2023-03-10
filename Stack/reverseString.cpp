#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string name = "ananya";
    stack <char> s;

    for(auto i : name) {
        char ch = i;
        s.push(ch);
    }

    string ans;
    while(!s.empty()) {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout << "reversed string is : " << ans << endl;
    
    return 0;
}