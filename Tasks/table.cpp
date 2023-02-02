#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void    printmat(vector< vector <int > > mat, int R, int C)
{
    cout << "\n";
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C ; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

void    start(void)
{
    int R;
    int C;
    cin >> R;
    cin >> C;
    int i;
    int j;
    vector < vector< int > > mat;
    for (int i = 0; i < R; i++)
    {
        vector<int> v;
        for (int j = 0; j < C; j++) {
            int n;
            cin >> n;
            v.push_back(n);
        }
        mat.push_back(v);
    }
    int n_cl;
    cin >> n_cl;
    int pos_cl;

    int x = 0;
    while (x < n_cl)
    {
        cin >> pos_cl;
        i = 0;
        for (j = pos_cl - 1; i < R; i++)
        {
            for (int k = 0; k < R - 1; ++k)
            {
                if (mat[k + 1][j] < mat[k][j])
                {
                    mat[k].swap(mat[k + 1]);
                }
            }
        }
        x++;
    }
    printmat(mat, R, C);
}

int main()
{
    int set;
    cin >> set;
    int q = 0;
    while (q < set)
    {
        start();
        q++;
    }
    return 0;
    
}

