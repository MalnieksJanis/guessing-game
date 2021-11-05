#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;


int main ()
{
	int randNumber;
  int userNumber;
  bool win = false;
  unsigned seed = time (0);
  int meginajumuskaits = 0;

  srand(seed);
  randNumber= 1+ rand()%100;

  cout << "Uzmini ciparu no 1 līdz 100. Tev ir 10 mēģinājumi" << endl;
  cin >> userNumber;
 meginajumuskaits++;
  while (!win && meginajumuskaits<10){
   
    if (userNumber < randNumber){
      cout << "Pārāk mazs skaitlis. Mini vēlreiz." << endl;
  
      cin >> userNumber ;
      meginajumuskaits++;
    } else if (userNumber > randNumber){
  
      cout << "Pārāk liels cipars. Mini vēlreiz" << endl;
      cin >> userNumber;
      meginajumuskaits++;
      
    } else {
      cout << "Tu uzminēji!!!" << endl;
      cout << "Tu uzminēji ar "  <<meginajumuskaits << " reizēm" << endl;
      win = true;
    }
  }
  if(userNumber!=randNumber && meginajumuskaits==10) 
    {
        cout<< "Jus zaudejat, pareiza atbilde ir"<<endl; 
		cout << randNumber <<endl;}
system ("pause"); 
return 0; 
}
