#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        string code = "codeforces";
        int i = 0 , count = 0;
        while(s[i] != '\0')
        {
            if(s[i] != code[i])
                count++;
            i++;
        }
        cout << count << endl;
    }
    return 0;
}