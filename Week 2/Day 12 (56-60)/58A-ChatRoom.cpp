#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s, ans, str;
    int h = 0, l = 0, e = 0, o = 0;
    cin >> ans;

    for (int i = 0; i < ans.length(); i++)
    {
        if (ans[i] == 'h')
        {
            for (int j = i; j < ans.length(); j++)
            {
                if (ans[j] == 'e')
                {
                    for (int k = j; k < ans.length(); k++)
                    {
                        if (ans[k] == 'l')
                        {
                            for (int l = k + 1; l < ans.length(); l++)
                            {
                                if (ans[l] == 'l')
                                {
                                    for (int m = l; m < ans.length(); m++)
                                    {
                                        if (ans[m] == 'o')
                                        {
                                            cout << "YES";
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "NO";
    return 0;
}