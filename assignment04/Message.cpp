
#include <iostream>
#include <string>
#include "Message.h"
using namespace std;
Message :: Message()
{}
Message :: Message(const string &athr,const string &sbjct,const string &body)
:author(athr), subject(sbjct), body(body)
{}
void Message:: display() const
{
    cout << subject << endl;
    cout <<"from " << author <<": " << body << endl;
    
    
}