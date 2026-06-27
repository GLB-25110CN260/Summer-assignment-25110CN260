#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));

    int num=rand()%100+1;
    int guess;

    while(true)
    {
        cout<<"Guess the number (1-100): ";
        cin>>guess;

        if(guess>num)
            cout<<"Too High!\n";
        else if(guess<num)
            cout<<"Too Low!\n";
        else
        {
            cout<<"Congratulations! You guessed the correct number.";
            break;
        }
    }

    return 0;
}