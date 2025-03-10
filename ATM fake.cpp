#include<iostream>
#include<math.h>
using namespace std;
void ruttien(int X)
{
    int menhgia[] = {500,200,100,50,20,10,5,2,1};
   int tongto=0;
    for (int i =0;i<9;i++)
    {
        if(X >= menhgia[i])
        {
            tongto += X / menhgia[i];
            X %= menhgia[i];
        }
    }
     cout << tongto << endl;
}
int main()
{
    int X;
    int k;
    cout << "";
    cin >> k;
    for (int p=0;p<k;p++)
    {
    cout << "";
    cin >> X;
    ruttien(X);
    }
    return 0;
}