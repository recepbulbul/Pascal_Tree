#include <iostream>
using namespace std;

int faktori(int j){
    int fakti=1;
    for (int i = 1; i < j+1; i++)
    {
        fakti*=i;
    }
    return fakti;
}

int sayiac(int i,int j){
    int acilmis=i;
    for (int k = 1; k < j; k++)
    {
        if (i>1)
        {
            i--;
        }
        acilmis*=i;
        
    }
    return acilmis;
}

int main(){
    int sayi,kadar=10;
    cout << "Sayi giriniz: ";                                             
    cin >> sayi;
    for (int j = 0; j < sayi; j++)
    {
        for (int b = kadar; b > 0; b--)
            {
                cout << " ";
            }
        kadar--;
        for (int i = 0; i <= j; i++)
        {
            if (i == 0 || i== j)
            {
                cout << 1 << " ";
            }
            else{
                cout << sayiac(j,i) / faktori(i) << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
  

  