#include <iostream>

using namespace std;

int main()
{
    int num;
    printf("digite um numero de 1 a 6");
    scanf("%d", &num);
    try
    {
        if (num < 1 || num > 6){
        throw num;
        }else
        cout << num << endl;
    } 
    catch (int a)
    {
     cout << "valor invalido " << a << endl;
    }
}