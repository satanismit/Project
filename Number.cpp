#include<iostream>
#include<ctime>
using namespace std;

int rand_num(){
    return rand()%10 + 1;
}
class casino{
   public : 

    long long amount_money ;
    int betting_money ;
    int guess_number ;

      void  Depositemoney()
      {
          cout << "Enter Deposit amount to play game : $";
          cin>>amount_money;
          // while(true){
         if(amount_money==0){
            cout<<"sorry you are lose all your money you balance now is 0 "<<endl;
        }
        cout<<"enter bitting amount"<<endl;
        cin>>betting_money;
        if(betting_money>amount_money){
            cout<<"you dont have enogh money "<<endl;
             }
        //}
      }

      void GuessNumber()
      {

          
      }
};
 int main()
{
    casino c1 ;
    c1.Depositemoney();
    c1.GuessNumber();
    return 0;
}
