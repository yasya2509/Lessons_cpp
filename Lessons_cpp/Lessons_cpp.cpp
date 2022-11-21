#include <iostream> 
using namespace std;

int main()
{
    const int size_1 = 2;
    const int size_2 = 4;
 
    int arr_first[size_1][size_2] = {
        {1,2,3,5},
        {2,9,9,9}
    };
    int arr_second[size_1][size_2] = {
        {9,8,7,5},
        {8,1,1,1}
    };

   

    for (int i = 0; i < size_1; ++i) {
        for (int j = 0; j < size_2; ++j) {

            arr_first[i][j] += arr_second[i][j];
            cout << arr_first[i][j] << ' ';

           // cout << arr[i][j] << ' ';
        }
        cout << endl;
    } 

	return 0;
}
