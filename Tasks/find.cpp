#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector <int> vc = {1, 4, 8, 5, 4, 2, 6, 3};
    int x;
    int j;
   std::vector <int> xs;

    int i = 0;
    for (j =1 ; j < vc.size(); j++)
    {
         x = vc[i] - vc[ i + j];
         x = abs(x);
         std::cout << "разница " << vc[i] << " - " << vc[ i + j] << " = " << x << std::endl;
         if (x == 1 )
         {
            xs.push_back(x);
            break;
         }
        else{
            xs.push_back(x);
            if (xs.back() < xs.front() && xs.size() > 1)
                xs.erase(xs.begin());
        }
    }
    std::cout << "минимальная разница между  " << vc[i]  << " и " << vc[ i + j] << " = " << x << std::endl;

    // while (i < vc.size())
    // {  
    //     for (j =1 ; j < vc.size(); j++)
    //     {
           
    //         x = vc[i] - vc[ i + j];
    //         std::cout << "разница " << x << std::endl;
    //     }
    //     i++;
    // }

}