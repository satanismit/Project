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
          p:
          int n;
          char k;

          cout<<endl<<"-----------------------------------------";
          cout<<endl<<"enter one number (1 to 10):";
          cin>>n;
          int r=rand_num();
          if(n>0 && n<10)
          {

            if (r==n){
                    amount_money +=(betting_money*10);
                    cout<<endl<<"\t\t WINNER.. \n Your balance is now :"<<amount_money<<endl;
            }
            else{

                amount_money -=betting_money;
                cout<<endl<<"Winning number is :"<<r;
                cout<<endl<<"\t\t LOSER..\n Your balance is now :"<<amount_money;
            }
            cout<<endl<<"-----------------------------------------";
          }
          else{
             cout<<endl<<"wrong number,try again..";
             goto p;
          }

      }
};
 int main()
{
    casino c1 ;
    c1.Depositemoney();
    c1.GuessNumber();
    return 0;
}
