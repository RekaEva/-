#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

void start(void)
{
    int n;
    cin >> n;
    set<int> st;
    vector <int> vc;
    vc.reserve(n);
    int i = 0;
    int tmp;
    while (i < n) {
        cin >> tmp;
        vc.push_back(tmp);
        i++;
    }

    int k = 0;
    for (i = 0; i < n; i++)
    {
        while (vc[i] == vc[i + 1] && i < vc.size())
            i++;
        if (st.find(vc[i]) == st.end())
        {
            st.insert(vc[i]);
        }
        else
        {
            k = 1;
            cout << "NO\n";
            break;
        }
    }
    if (k == 0)
         cout << "YES\n";

}

int main()
{
    int set;
    cin >> set;

    while (set)
    {
        start();
        set--;
    }
}