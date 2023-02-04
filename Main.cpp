 #include <iostream>

 using namespace std;
//Makimum possible Handshakes challenge 

int main(){

int n, handshakes;
cout <<" How many students are there? ";
cin >> n;


handshakes = (n * (n-1)) / 2;

cout <<" The maximum possible handshakes between " << n << "  students is " << handshakes;

 return 0;

 }












