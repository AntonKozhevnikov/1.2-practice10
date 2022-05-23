#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[]={1,4,23,9,32,84};
    int Size=6;
    for (int i=0; i<Size;i++)
    {
        cout << *(arr+i) << ", ";
    };
    return 0;
}

