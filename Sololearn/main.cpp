#include <iostream>

using namespace std;

int main()
{
    int userMark;

    cin>>userMark;
    if(userMark<40){
        cout<<"Congrats you've failed"<<endl;
    }
    else if(userMark>40 && userMark<60){
        cout<<"It's alright"<<endl;
    }
    else{
        cout<<"Damn look at them grades"<<endl;
    }
}
//I will be an amazing C++ programmer
