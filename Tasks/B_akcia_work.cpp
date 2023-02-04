#include <iostream>
#include <vector>
#include <algorithm>

int ft_one_kassa(void)
{
    int set_buyer;
    std::cin >> set_buyer;
    std::vector <int> arr_b;

    int i = 0;
    int price;

    while (i < set_buyer)
    {
        std::cin  >> price;
        arr_b.push_back(price);
        i++;
    }
    sort (arr_b.begin(), arr_b.end());
    int pos_price = 0;
    int final_price = 0;
    i = 0;
    while (i < set_buyer)
    {
        int counter = 1;

        while (arr_b.size() > i + 1 && arr_b[i + 1] == arr_b[i])
        {
            i++;
            counter++;
        }
        price = arr_b[i];
        int count = 0;
        count =  ((counter ) / 3) * 2 + ((counter ) % 3);
        int pos_price = 0;
        pos_price = ((counter / 3) * 2 + (counter % 3)) * price;
        final_price += pos_price;
        i++;
    }
    return (final_price);

}

int main()
{
    int set_all;
    std::cin >> set_all;
    std::vector <int> final;

    int j = 0;
    while (j < set_all)
    {
        final.push_back(ft_one_kassa());
        j++;
    }

    for (int j = 0; j < final.size(); j++) 
    {
        std::cout << final[j] << '\n';
    }
    return (0);
}