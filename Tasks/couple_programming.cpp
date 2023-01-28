#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <vector>

int main()
{
    // int set_number;
    // std::cin >> set_number;
    int mans;
    std::cin >> mans;
    int level;


    std::map <int, int> mp;
    int i;
    for (int i = 0; i < mans; i++) {
        std::cin >> level;
        mp[i] = level;  // добавляем новые элементы
    }

    std::map <int, int> :: iterator out = mp.begin();
    // for (i = 0; out != mp.end(); out++, i++) {  // выводим их
    //     std::cout << "Номер " << out->first << ", level " << out->second << std::endl;
    // }
//    while (true)
//    {
//         std::cin >> x;
//         i = x;
//         out = mp.find(x);
//         std::cout << " level " << out->second << std::endl;
//    }

    int j = 0;
    int pair = 22;

    std::map <int, int> :: iterator it = mp.begin();
    std::vector <int> vec;

    i = 0;
    while (mp.size() > 1)
    {
       for (i = 0; it != mp.end(); it++)
       {
            it->second 
       }
    }

    std::cout << "finish " << it->second << std::endl;


    
    std::map <int, int> :: iterator out2 = mp2.begin();
    for (i = 0; out2 != mp2.end(); out2++, i++) {  // выводим их
        std::cout << "Номер " << out2->first << ", level " << out2->second << std::endl;
    }

    return 0;
}

