#include<iostream>
using namespace std;

class homedetails{
	public:
	int rooms;
	int fens;
	string name;
	string flowerpot;
	string homearea;
	

};
main(){
     homedetails obj;
     cout<<"enter the rooms in home :";
     cin>>obj.rooms;
	
	cout<<"enter the fens in home :";
    cin>>obj.fens;
    
	cout<<"enter the name of home :";
    cin>>obj.name;
    
	cout<<"enter flowerpot which colour   :";
    cin>>obj.flowerpot;
    
	cout<<"enter the house area in home:";
    cin>>obj.homearea <<endl<<endl;
    
    cout<<"give some home details :-"<<endl<<endl;
    cout<<obj.rooms<<endl;
	cout<<obj.fens<<endl;
	cout<<obj.name<<endl;
	cout<<obj.flowerpot<<endl;
	cout<<obj.homearea<<endl;

	
}
