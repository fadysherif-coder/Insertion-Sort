#include <iostream>
using namespace std;
int main()
{

    int  arr[] = {1, 7, 4, 9, 3};
    int min;
    int index = 0;
    for (int i = 0 ; i < 5 ; i++){
        min = arr[i];
        index = i;

        for (int j = i; j < 5; j++ ){

            if ( min > arr[j] ){

                min = arr[j];
                index = j;
            }
        }
        for (int k = index; k > i; k-- ){
            arr[k] = arr[k-1];
        }
        arr[i] = min;
    }

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}