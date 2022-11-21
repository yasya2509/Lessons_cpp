#include <iostream> 
using namespace std;

int main()
{
    const int size_1 = 2;
    const int size_2 = 3;
    int arr[size_1][size_2] = {
        {5,6,7},
        {8,9,0}
    };
    for (int i = 0; i < size_1; ++i) {
        for (int j = 0; j < size_2; ++j) {
            //arr[i][j] = 
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    } 

	return 0;
}
