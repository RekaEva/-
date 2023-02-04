#include <iostream>

int main()
{
    int stop;
    int a;
    int b;
    int i;

    std::cin >> stop;
    int *arr = new int [stop] ;

    i = 0;
    while (i < stop)
    {
        std::cin >> a;
        std::cin >> b;
        arr[i++] = (a + b);
    }
    
    for ( i = 0; i < stop ; i ++)
    {
        std::cout << arr[i] << '\n';
    }

    return 0;
}

