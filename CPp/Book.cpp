#include<iostream>
#import"book.h";
using namespace std;
class Novel:Book{
	private: string cat;
	public: Novel(){
		cat="Fiction";
                 	}
	        Novel(int id,string name,double price,string cat):Book(id,name,price){
	        	this->cat=cat;
			}
			void price(){
				cout<<"Price is 400"<<endl;
			}
			void category()
			{
				cout<<"category is novel"<<endl;
			}
};

