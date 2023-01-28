#include <iostream>
#include <vector>

void ft_bubble(std::vector<int>& vec, int set_buyer)
{
    int		sort;
	int		i;
	int		tmp;

	sort = -1;
	while (sort != 0)
	{
		sort = 0;
		i = 0;
		while (i < set_buyer)
		{
			if ((i + 1) < set_buyer && vec[i] > vec[i + 1])
			{
				tmp = vec[i];
				vec[i] = vec[i + 1];
				vec[i + 1] = tmp;
				sort = -1;
			}
			i++;
		}
        
	}

}

// && (arr_b.size() < (i + 1))

// int ft_position_price(int &i, std::vector<int> arr_b, int price)
// {
//     price = 0;
//     int counter = 1;
//     while (arr_b[i + 1] == arr_b[i])
//     {
//         i++;
//         counter++;
    
//     }
//     price = arr_b[i];
//     int count = 0;
//     // std::cout << "counter 1111     " << counter << '\n';
//     count =  ((counter ) / 3) * 2 + ((counter ) % 3);
//     // std::cout << "count " << count << '\n';
//     int pos_price = 0;
//     pos_price = ((counter / 3) * 2 + (counter % 3)) * price;
//     std::cout << "количество товара  = " << counter << " по цене " << price << '\n';
//     std::cout << "количество позиций  = " << count << " итоговая цена " << pos_price << '\n';
//     counter = 0;
//     count = 0;
//     return (pos_price);
// }


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
   
    
    ft_bubble(arr_b, set_buyer);

    int pos_price =0;
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
        std::cout << "количество товара  = " << counter << " по цене " << price << '\n';
        std::cout << "количество позиций  = " << count << " итоговая цена " << pos_price << '\n';

        // pos_price = ft_position_price(i, arr_b, price);

        final_price += pos_price;
        i++;
    }
    std::cout << "final_price " << final_price << '\n';
    return (final_price);

}

int main()
{
    int set_all;
    std::cin >> set_all;
    // int final_set_price;
    std::vector <int> final;

    // final_set_price = ft_one_kassa();
    final.push_back(ft_one_kassa());
    std::cout << final[0] << '\n';
    // final.push_back(ft_one_kassa());
    // std::cout << final[1] << '\n';






    
    // int j = 0;
    // while (j < set_all)
    // {
    //     // final_set_price = ft_one_kassa();
    //     //  std::cout << " return " <<final_set_price << '\n';
    //     final.push_back(ft_one_kassa());
    //     j++;
    // }

    // for (int j = 0; j < final.size(); j++) 
    // {
    //     std::cout << final[j] << '\n';
    // }
    return (0);
}

