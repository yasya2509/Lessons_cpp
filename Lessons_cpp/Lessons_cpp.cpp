#include <iostream> 
using namespace std;

int main()
{
    const int size_1 = 2;
    const int size_2 = 7;
    int arr[size_1][size_2];

    for (int i = 0; i < size_1; ++i) {
        for (int j = 0; j < size_2; ++j) {
            arr[i][j] = j + i * size_2;
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    } 

	return 0;
}
