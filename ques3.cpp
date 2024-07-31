#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main(void)
{
    string s, temp;
    map<string, int> mp;
    cout << "Enter paragraph:" << endl;
    getline(cin, s);
    vector<string> words;
    int start = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            temp = s.substr(start, i - start);
            mp[temp]++;
            start = i + 1;
        }
    }
    temp = s.substr(start, s.length() - start);
    mp[temp]++;
    map<string, int>::iterator it = mp.begin();
    cout << endl;
    cout << "Word -> Frequency:" << endl;
    while (it != mp.end())
    {
        cout << it->first << ": " << it->second << endl;
        ++it;
    }
    cout << endl;
    return 0;
}