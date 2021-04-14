#include <iostream>
using namespace std;

string RemoveSpaces(string userString){
  int space;

  for (int i = 0; i < userString.size(); i++){
    if(userString.find(" ") != string::npos){

      space = userString.find(" ");
      
      userString.replace(space,1,"");
    }
  }
  return userString;
}


int main() {
  
string userInput,noSpaces;

cout << "Enter a string" << endl; 

getline(cin,userInput);
noSpaces = RemoveSpaces(userInput);

cout<< noSpaces;

return 0;

}
