#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int secret_number=rand()%1000 +1;
    int guess;
    int attempts=0;
    char c;
    do{
        cout<<"Enter your guess! :";
        cin>>guess;
        if(guess<secret_number)
            cout<<"Too low"<<endl;
        else if(guess>secret_number)
            cout<<"Too high."<<endl;
        else 
            {
                cout<<"Congratulations you guess the right number in "<<attempts<<" attempts";
                break;
            }
            
            cout<<"Do you want to try again! if yes press ('y' or 'Y')";
            cin>>c;

    }while(guess!=secret_number && (c=='y' || c=='Y'));
    return 0;
    }