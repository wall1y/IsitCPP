//Задание 21
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <regex>

int main()

{
  std::string src;
std:: ifstream fin("source") ;
char ch;
while (fin.get (ch)) // чтение символа из файла
  src+=ch;
fin.close () ;
std::cout<< "Исходный текст: " << src << std::endl;
std::string reverseText;
//std::string line = "one? tw3o     three \n qwe qaz";
std::stringstream aa(src);
while (!aa.eof()) {
  std::string s;
  aa >> s;
  std::string reverseWord;
  for(int i=s.length()-1;i>=0;i--)
    reverseWord+=s[i];
  reverseText+=reverseWord + " ";

}
std::cout<< "Перевернутые слова: " << reverseText << std::endl;
    return 0;
}
