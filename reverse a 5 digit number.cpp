// Name : Ishan Danech
//PRN : 24070123047
//Batch : ENTC A2
 #include <iostream>
using namespace std;
int main() {
    int num = 23065;
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;           
        reversed = reversed * 10 + digit; 
        num = num / 10;                 
    }
    cout <<"Reversed number:"<< reversed<< endl;
    return 0;
}