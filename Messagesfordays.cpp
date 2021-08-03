//4. dia de semana

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{ 
	int day, monday , friday , saturday, sunday, other;
	
	cout<<"Write a day of the week: "<<endl;
	cin>>day;
	
	if (day== monday){
		cout<<"Monday: First day to work"<<endl;
	}
	else if(day== friday){
		cout<<"Friday: Last day to work"<<endl;
	}
	else if (day== saturday or sunday){
		cout<<" Enjoy the weekend"<<endl;
	}
	else if(day== other){
		cout<<" Other day: go to work! "<<endl;

	}
		
	getch();
	
    return 0;
}

