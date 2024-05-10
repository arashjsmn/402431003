#include <iostream>
using namespace std;

int array[7]={10,20,30,40,50};
void printArray(int x=0, int y=(sizeof(array)/sizeof(array[0]))){
    for (int i=x; i<y; i++){
        cout << array[i]*2 << endl;
    }
}
int main()
{
    printArray();
}