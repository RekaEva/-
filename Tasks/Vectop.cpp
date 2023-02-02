// #include <vector>
// #include <iostream>

// using namespace std;


// int main()
// {
//     int x;
//     int y;

//     cin >> x;
//     cin >> y;

//     vector<int> ln;
//     // ln.reserve(x);
//     vector < vector < int > > vc;
//     // vc.resize(y - 1);
//     int i = 0;
//     int j = 0;
    
//     while (j < y)
//     {
//         i = 0;
//         while (i < x)
//         {
//             int n;
//             cin >> n;
//             ln.push_back(n);
//             i++;
//         }
//         vc.push_back(ln);
//         j++;
//     }

//     print(vc, x, y);
//     return (0);
// }


#include <iostream>
#include <vector>
using namespace std;
 
// #define R 4
// #define C 5

template<class T>
void printVector(vector<vector<int>> const &mat) {
    cout << "\n";
    for (vector<int> row: mat)
    {
        for (int val: row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main()
{
    int R;
    int C;
    cin >> R;
    cin >> C;
    // создание экземпляра векторного объекта типа vector<int> а также
    // используем функцию `push_back()` для изменения размера
    vector<vector<int>> mat;
    for (int i = 0; i < R; i++)
    {
        // построить vector из int
        vector<int> v;
        for (int j = 0; j < C; j++) {
            int n;
            cin >> n;
            v.push_back(n);
        }
 
        // отодвигаем назад над одномерным вектором
        mat.push_back(v);
    }
    
    int x = 1;
    int y = 2;
    cout << "\n";
    cout << mat[x][y];
    // printVector(mat);
 
    return 0;
}