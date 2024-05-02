#include <iostream>
using namespace std;

int main()
{
    int x;
    int matrix[3][3]={
        {},
        {},
        {}
    };
    for (int i=0; i<=2; i++){
        for (int j=0; j<=2; j++){
            cin >> x;
            matrix[i][j]=x;
        }
    }
    int detrminan=(matrix[1][1]*matrix[2][2]-matrix[1][2]*matrix[2][1])
    -(matrix[1][0]*matrix[2][2]-matrix[1][2]*matrix[2][0])+(matrix[1][0]*matrix[2][1]-matrix[1][1]*matrix[2][0]);
    cout << detrminan;
}
