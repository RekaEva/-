
#include <iostream>
#include <map>

// int main()
// {
//     int mans;
//     std::cin >> mans;
//     int level;

//     std::map <int, int> mp;
//     int i;
//     for (int i = 0; i < mans; i++) {
//         std::cin >> level;
//         mp[level] = i;  // добавляем новые элементы
//     }

//     std::map <int, int> :: iterator it = mp.begin();
//     std::cout << "А вот все отсортированно: " << std::endl;
//     for (int i = 0; it != mp.end(); it++, i++) {  // выводим их
//         std::cout <<"Ключ " << it->first << ", значение " << it->second << std::endl;
//     }
// }
void print_map(std::map <int, int> mp)
{
    std::cout << std::endl;
    int i;
    std::map <int, int> :: iterator out = mp.begin();
    for (i = 0; out != mp.end(); out++, i++) {  // выводим их
        std::cout << out->first << " "<< out->second << std::endl;
        // std::cout << "Номер1 " << out->first << ", номер2 " << out->second << std::endl;
    }
}

int main()
{
    int set_number;
    std::cin >> set_number;
    int mans;
    std::cin >> mans;
    int level;

    std::multimap<int, int> mp;
     int i;
    for (int i = 1; i <= mans; i++) {
        std::cin >> level;
       mp.insert(std::pair< int, int >(level, i));  // добавляем новые элементы
    }

    std::multimap <int, int> :: iterator it = mp.begin();
    // std::cout << "А вот все отсортированно: " << std::endl;
    // for (int i = 0; it != mp.end(); it++, i++) {  // выводим их
    //     std::cout <<"Level " << it->first << ", Номер " << it->second << std::endl;
    // }

    int x;
    int y;
    std::map<int, int> mp2;
    std::multimap <int, int> :: iterator it1 = mp.begin();
    for (int i = 1; it1 != mp.end(); i++) {
        x = it1->second;
        // std::cout << "x= " << x << std::endl;
        it1++;
        y = it1->second;
        // std::cout << "y= " << y << std::endl;
       mp2[x] = y;
       it1++;
    }
    print_map(mp2);
} 

