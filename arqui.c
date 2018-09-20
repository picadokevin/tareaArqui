#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int convertion(int number,int base,string bas);

int main()
{
   int number;
   int base;
   string bas;
   cout << "Ingrese un nùmero para pasarlo a decimal";
   cin >> number;
   cout <<"Ingrese la base";
   getline( cin, bas );
   base= atoi(bas.c_str());
   cout <<convertion(number,base,bas);
   
   return 0;
}

// Function to convert number to decimal
int convertion(int number,int base,string bas)
{
    int decimalNumber = 0, i = 0, rem;
     if(base==16){
      for(int i=0; i<bas.length(); i++)
{
 
char c=bas[i];
 
switch(c)
{
    case 'a':cout<<""<<endl;
    break;
    case 'b':cout<<""<<endl;
    break;
    
}
}
          
}else{
    while (number != 0)
    {
        rem = number % 10;
        number /= 10;
        decimalNumber += rem * pow(base, i);
        cout<< rem *pow(base ,i);
        cout<< "\n";
        
        ++i;
    }
     }
    return decimalNumber;
}








