#include <iostream>
#include <string>
using namespace std;
//چون نمیتوان یک ماتریس سه در سه رو در یک ماتریس سطری یا همون بردار سه مولفه ای ضرب کرد باید یا بردار را در ماتریس ضرب کنیم 
//یا اینکه ماتریس رو در یک ماتریس ستونی با سه درایه ضرب کنیم
//من یک بردار یا همون ماتریس سطری سه درایه ای رو در ماتریس مورد نظر ضرب میکنم
int main()
{
    int x , y;
    int matrix1[3][3]={
        {},
        {},
        {}
    };
    cout << "enter the matrix numbers \n";
    for (int i=0; i<=2; i++){
        for (int j=0; j<=2; j++){
            cin >> x;
            matrix1[i][j]=x;
        }
    }
    int bordar[3]={};
    cout << "enter the bordar numbers" << endl;
    for (int i=0; i<=2; i++){
        cin >> y;
        bordar[i]=y;
    }
    int d1=bordar[0]*matrix1[0][0]+bordar[1]*matrix1[1][0]+bordar[2]*matrix1[2][0];
    int d2=bordar[0]*matrix1[0][1]+bordar[1]*matrix1[1][1]+bordar[2]*matrix1[2][1];
    int d3=bordar[0]*matrix1[0][2]+bordar[1]*matrix1[1][2]+bordar[2]*matrix1[2][2];
    cout << "haselzarb is: " << "[" << d1 << "," << d2 << "," << d3 << "]";
}
// i hate c++!