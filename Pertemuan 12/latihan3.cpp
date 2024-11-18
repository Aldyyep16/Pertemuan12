#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
 srand (time(0)) ;
 const char* hadiah[] = {"Mobi", "Pulsa 100k", "Voucher belanja","Tiket liburan"};
 int index = rand() %4;
 cout<<"Anda mendapatkan hadiah:" <<hadiah[index]<< endl;

 return 0;
  }

