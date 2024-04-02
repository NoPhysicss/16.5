#include <iostream>
//#include <time.h>




int main()
{
    const int x = 5;
    const int y = 5;
  

    int arr [x][y];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            arr[i][j] = j + i;
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

   // struct tm buf;

   // time_t t = time(NULL);
   // localtime_s(&buf, &t);
   //buf.tm_mday.
    

    int dayi = (2 % x);
    int sum = arr[dayi][0];

    for (dayi; dayi < x; dayi)
    {
        for (int j = 1; j < y; j++)
        {
            sum += arr[dayi][j];
        }
        break;
    }
    std::cout << sum;
}
