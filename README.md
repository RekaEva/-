# -
решаю задачи на С++

#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
#include <limits>
#include <unordered_set>


using namespace std;

void solve() {
    int count = 0;
    cin >> count;
    vector<int> v;
    unordered_set<int> st;
    v.reserve(count);
    while (count) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
        --count; 
    }
    count = v.size();
    int a, b, min_value;
    for (int i = 0; i < count; ++i) {
        min_value = numeric_limits<int>::max();
        a = -1; b = -1;
        while (st.find(i) != st.end())
            ++i;
        for (int j = i + 1; j < count; ++j) {
            while (st.find(j) != st.end())
                ++j;
            if (min_value > abs(v[i] - v[j])) {
                min_value = abs(v[i] - v[j]);
                a = i; b = j;
            }
        }
        st.insert(a); st.insert(b);
        if (min_value != numeric_limits<int>::max())
            cout << a + 1 << ' ' << b + 1 << endl;
    }
    cout << endl;
}

int main() {
    int t = 0;

    cin >> t;
    while (t) {
        solve();
        --t;
    }
}

/*

int find_pair(std::vector <int > vc, int i)
{
    int j = 1;
    int min = 10000;
    int cur;
    
    while (j <= vc.size())
    {
        cur = vc[i] - vc[i + j];
        cur = abs(cur);

    }
    return (j);
}

int main()
{
    //  int set_number;
    // std::cin >> set_number;
    int mans;
    std::cin >> mans;
    int level;

    std::vector <int> vc ;
    for (int j = 0; j < mans; j++)
    {
        std::cin >> level;
        vc.push_back(level);
    }
    std::vector <int> st;


    int i = 0;
    int y;
    while (st.size() <= mans)
    {
       std::cout << " " << std::endl;
       if (st.find(i) == st.end())
       {
            std::cout << " !!! " << std::endl;
            y = find_pair(vc, i);
            st.push_back(i);
            st.push_back(y);
       }
       i++;
    }

    std::set <int> :: iterator it = st.begin();
    for (int p = 0; st.size() > 0; it++)
    {
        std::cout << " " << *it;
        it++;
        std::cout << " " << *it;
        std::cout << std::endl;
    }


} 


автоцикл
    for (auto e : v)
        cout << e << ' ';
    cout << endl;
}

*/


https://codelessons.ru/cplusplus/map-v-c-chto-eto-i-kak-s-etim-rabotat.html

http://xn--e1akicaccic2c.xn--p1ai/pdf/cppmingw/ch19-cpp-poisk-minimalnogo-maksimalnogo-znacheniy.html
