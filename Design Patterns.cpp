//============================================================================
// Name        : Design.cpp
// Author      : Lakshman
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class singleton {
  private:
    static bool instanceFlag;	//in cl.pri
    static singleton *single;
    static int stat;
    string s;
    singleton()	{	}	//private constructor
    singleton(const singleton& rhs) {	}
    singleton& operator =( const singleton& rhs) {	cout << "ovrLd  = lax" << endl;	return *single;	}
    int i;
  public:
    static singleton* getInstance();
    void method (int a);
    ~singleton() {	instanceFlag = false;	delete single; /* closeFilesResourcesLogit */  }
};

bool singleton::instanceFlag = false;
singleton* singleton::single = NULL;
int singleton::stat= 0;

singleton* singleton::getInstance() {
	if(! instanceFlag) { single = new singleton;
    instanceFlag = true; }
  return single;
}

void singleton::method(int a) {
  s.assign("laxmnkmr");
  if(this==single) { cout << "called a[" << a << "][" << ++(single->stat) << "] times, singletonCl_addr[" << this << "]\n"; }
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	singleton *sc1,*sc2=NULL;
	sc1 = singleton::getInstance();
	sc1->method(1);
	cout<<"dangl:1["<<sc1<<"]2["<<sc2<<"]"<<endl;
	sc2 = singleton::getInstance();
	sc2->method(11101);
	cout<<"dangl:1["<<sc1<<"]2["<<sc2<<"]"<<endl;
	cout<<endl;  return 0;
}
