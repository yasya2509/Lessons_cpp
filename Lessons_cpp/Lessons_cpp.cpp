#include <iostream> 
using namespace std;

int main()
{
    const int size_1 = 5;
    const int size_2 = 5;
 
    int arr[size_1][size_2];
       

    for (int i = 0; i < size_1; ++i) {
        for (int j = 0; j < size_2; ++j) {
            if (i == j)
                arr[i][j] = 1;
            else
                arr[i][j] = 0;

            arr[i][j];
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    } 

	return 0;
}
