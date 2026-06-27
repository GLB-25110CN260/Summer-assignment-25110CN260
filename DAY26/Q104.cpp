#include<iostream>
using namespace std;
int main()
{
    int ch,score=0;
    cout<<"***** QUIZ APPLICATION *****\n\n";

    cout<<"Q1. What is the capital of India?\n";
    cout<<"1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cin>>ch;

    if(ch==2){
        cout<<"Correct!\n\n";
        score++;
    }
    else
        cout<<"Wrong! Correct Answer: Delhi\n\n";

    cout<<"Q2. C++ was developed by?\n";
    cout<<"1. Bjarne Stroustrup\n2. Dennis Ritchie\n3. James Gosling\n4. Guido van Rossum\n";
    cin>>ch;

    if(ch==1){
        cout<<"Correct!\n\n";
        score++;
    }
    else
        cout<<"Wrong! Correct Answer: Bjarne Stroustrup\n\n";

    cout<<"Q3. Which symbol is used for comments in C++?\n";
    cout<<"1. ##\n2. //\n3. **\n4. &&\n";
    cin>>ch;

    if(ch==2){
        cout<<"Correct!\n\n";
        score++;
    }
    else
        cout<<"Wrong! Correct Answer: //\n\n";

    cout<<"Q4. How many days are there in a week?\n";
    cout<<"1. 5\n2. 6\n3. 7\n4. 8\n";
    cin>>ch;

    if(ch==3){
        cout<<"Correct!\n\n";
        score++;
    }
    else
        cout<<"Wrong! Correct Answer: 7\n\n";

    cout<<"Q5. Which keyword is used to define a function in C++?\n";
    cout<<"1. function\n2. def\n3. void\n4. define\n";
    cin>>ch;

    if(ch==3){
        cout<<"Correct!\n\n";
        score++;
    }
    else
        cout<<"Wrong! Correct Answer: void\n\n";

    cout<<"=========================\n";
    cout<<"Your Score = "<<score<<" / 5\n";

    if(score==5)
        cout<<"Excellent!";
    else if(score>=3)
        cout<<"Good Job!";
    else
        cout<<"Better Luck Next Time!";

    return 0;
}