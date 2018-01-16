#include <iostream>
#include <string>
using namespace std;

class domba{
	public:
		string bobot;
		string warnaBulu;
};

int main(){
	domba dombaGarut,dombaBatur;
	
	dombaGarut.bobot = "30-60 kg ";
	dombaBatur.bobot = "80-90 kg ";
	
	dombaGarut.warnaBulu = "Putih, Hitam, Cokelat ";
	dombaBatur.warnaBulu = "Putih ";
	
	cout <<"Domba Garut berwarna " <<(dombaGarut.warnaBulu);
	cout <<"Domba Garut bobotnya mencapai " <<(dombaGarut.bobot)<<endl;
	
	cout <<"Domba Batur berwarna " <<(dombaBatur.warnaBulu);
	cout <<"Domba Batur bobotnya mencapai " <<(dombaBatur.bobot);
}

