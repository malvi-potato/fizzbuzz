#include <iostream>

using namespace std;

void fizzbuzz(int n);

int main()
{
        int n;
        cin >> n;
        fizzbuzz(n);


    return 0;

}
void fizzbuzz(int n){

    if(n % 3 == 0){
        cout << "fizz" << endl;
    }

    else if (n % 5 == 0){
         cout << "buzz" << endl;
    }

   // else if (n % 3,5)
   else
        cout << " "<< n << endl;


}
