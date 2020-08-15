#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
  std::cout << "MAGIC 8-BAALL\n";
  srand(time(NULL));
  int answer= std::rand() % 10;
  //std::cout <<endl<<answer;
if(answer == 1)
std::cout <<"It is certain";
else if( answer==2 )
std::cout << "it is decidedly so";
else if( answer==3 )
std::cout << "Without a doubt";
else if( answer==4 )
std::cout << "Yes - definitely";
else if( answer==5 )
std::cout << "you may rely on it ";
else if( answer==6 )
std::cout << "as i see ti , yes.";
else if( answer==7 )
std::cout << "most likely.";
else if( answer== 8)
std::cout << "";
else if( answer== 9)
std::cout << "Outlook good";
else 
std::cout << "Very doubtful";

}
