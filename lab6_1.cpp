#include<iostream>
using namespace std;


int number[] = {};
int main(){
int x = 1;
        int i = 0;
        while(x != 0){
            if(x != 0){
                cout << "Enter an integer: ";
                cin >> x;
                number[i] = x;
                i++;
            }
            else{
                i = 0;
            }
}
int number_of_odd = 0;
int number_of_even = 0;
i = 0;
x = 1;
        while(x != 0){
            if(number[i] %2 == 0){
                number_of_even++;
                x = number[i];
                i++;
            }
            else{
                number_of_odd++;
                x = number[i];
                i++;
            }   
            }
number_of_even--;       
cout << "#Even numbers = ";
cout << number_of_even;
cout << "\n";
cout << "#Odd numbers = ";
cout << number_of_odd;
return 0;
}