
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

#include <iostream>
#include <map>  // подключили библиотеку
 
using namespace std;
 
int main() {
  setlocale(0, "");
  map <string, string> mp;  
  mp["book"] = "книга";     
 
  map <string, string> :: iterator it, it_2;
 
  it = mp.find("book");
  cout << it->second << endl;
 
  it_2 = mp.find("books");
 
  if (it_2 == mp.end()) {
      cout << "Ключа со значением 'books' нет\n";
  }
 
//   system("pause");
  return 0;
}











using namespace std;
int main() {
    setlocale(0, "");
    map <int, int> mp;
    
    cout << "Введите количество элементов: "; int n; cin >> n;
 
    for (int i = 0; i < n; i++) {
        cout << i << ") "; int a; cin >> a;
        mp[a] = i;  // добавляем новые элементы
    }
 
    map <int, int> :: iterator it = mp.begin();
    cout << "А вот все отсортированно: " << endl;
    for (int i = 0; it != mp.end(); it++, i++) {  // выводим их
        cout << i << ") Ключ " << it->second << ", значение " << it->first << endl;
    }
    
    // system("pause");
    return 0;
}


3
6
2 1 3 1 1 4
2
5 5
8
1 4 2 5 4 2 6 3