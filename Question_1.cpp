#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int daysUntillExpiration = rand()% 11;
    if(daysUntillExpiration <= 0){
        cout<<"Your subscription has expired.";
    }
    else if(daysUntillExpiration <= 1){
        cout<<"Your subscription expires within a day"\n"Renew now and save 20%"<<endl;
    }
    else if(daysUntillExpiration <= 5){
        cout<<"Your subscription expires in"<<daysUntillExpiration<<"days"\n"Renew now save 10%"<< endl;
    }
    else if(daysUntillExpiration <= 10){
        cout<<"Your subscription will expires soon. Renew now!";
    }
    return 0;
}