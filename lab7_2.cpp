//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
#include <iostream>
#include <string> 
using namespace std;

int main() {
   string x; 
   int y;
   string z; 
   string c; 
   string t; 
cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
cout << "?????: ";
getline(cin,x);
cout << "Fahsai: Wow!!! "<< x << " is a really cool name.\n";
cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
cout <<  x << ": ";
cin >> y;
cout << "Fahsai: I think you may be GEAR " <<y/10000000-12<<". I have a free movie ticket for you.\n";
cout <<"Fahsai: Let's go to the cinema together!!!\n";
cout << "Fahsai: What movie do you want to watch?\n";
cin.ignore();
cout <<  x << ": ";
getline(cin,z);
cout << "Fahsai: So....which day are you free to go with me?\n";
cout <<  x << ": ";
getline(cin,c);
cout << "Fahsai: " << c << "....that is OK!!! I'm looking forward to watching " << z << " with you.\n";
cout <<  x << ": ";
getline(cin,t);
cout << "Fahsai: 555+ see you " << c << ". Bye Bye \\(^ ^)/\n";
    return 0;
}
