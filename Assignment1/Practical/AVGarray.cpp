// find avg number in array usning functions

#include <iostream>
using namespace std;

int findAVG(int arr[], int size)
{
   
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    double average = (double)sum / size;

    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Average: " << average << endl;

}
int main() {
    int myarray[] = {1,2,3,4,5,6};
    int size = sizeof(myarray) / sizeof(myarray[0]);
    cout<<findAVG(myarray, size);

    return 0;
}
