#include <iostream>

using namespace std;

class Student{
	
	public:
		
		string name;
		int age;
		char gender;
		int year;
		string course1,course2,course3,course4;
		float grade1,grade2,grade3,grade4;
		
		Student(){
			
			cout<<"Implicit constructor was called(Student)"<<endl<<endl;
			
		}
		
		Student(string u_name,int u_age,char u_gender,int u_year,string u_course1,string u_course2,string u_course3,string u_course4){
			
			cout<<"Contructor with parameters was called(Student)"<<endl<<endl;
			name=u_name;
			age=u_age;
			gender=u_gender;
			year=u_year;
		}
		
		void setname(string u_name){
			
			name=u_name;
			
		}
		
		void setage(int u_age){
			
			age=u_age;
			
		}
		
		void setgender(char u_gender){
			
			gender=u_gender;
			
		}
		
		void setyear(int u_year){
			
			year=u_year;
			
		}
		
		void setcourse1(string u_course1){
			
			course1=u_course1;
			
		}
		
		void setcourse2(string u_course2){
			
			course2=u_course2;
			
		}
		
		void setcourse3(string u_course3){
			
			course3=u_course3;
			
		}
		
		void setcourse4(string u_course4){
			
			course4=u_course4;
			
		}
		
		string getname(){
			
			return name;
			
		}
		
		int getage(){
			
			return age;
			
		}
		
		char getgender(){
			
			return gender;
			
		}
		
		int getyear(){
			
			return year;
			
		}
		
		string getcourse1(){
			
			return course1;
			
		}
		
		string getcourse2(){
			
			return course2;
			
		}
		
		string getcourse3(){
			
			return course3;
			
		}
		
		string getcourse4(){
			
			return course4;
			
		}
		
		void getstudent(){
			cout<<"Name = ";
			cin>>name;
			cout<<endl;
			cout<<"Age = ";
			cin>>age;
			cout<<endl;
			cout<<"Gender = ";
			cin>>gender;
			cout<<endl;
			cout<<"Year = ";
			cin>>year;
			cout<<endl;
			cout<<"Course 1 = ";
			cin>>course1;
			cout<<endl;
			cout<<"Course 2 = ";
			cin>>course2;
			cout<<endl;
			cout<<"Course3 = ";
			cin>>course3;
			cout<<endl;
			cout<<"Course4 = ";
			cin>>course4;
			cout<<endl;		}
		
		void printstudent(){
		
		cout<<" Name : "<<name<<endl;
		cout<<" Age : "<<age<<endl;
		cout<<" Gender: "<<gender<<endl;
		cout<<" Year: "<<year<<endl;
		cout<<" Course 1 = "<<course1<<endl;
		cout<<" Course 2 = "<<course2<<endl;
		cout<<" Course 3 = "<<course3<<endl;
		cout<<" Course 4 = "<<course4<<endl;
		cout<<endl<<"-------------------------------------------"<<endl<<endl;
		}
		
		void getgrades(){
			
			cout<<"Grade 1 = ";
			cin>>grade1;
			cout<<endl;
			cout<<"Grade 2 = ";
			cin>>grade2;
			cout<<endl;
			cout<<"Grade 3 = ";
			cin>>grade3;
			cout<<endl;
			cout<<"Grade 4 = ";
			cin>>grade4;
			cout<<endl;
			
		}
		
		void printgrades(){
			
			cout<<" Grade 1 = "<<grade1<<endl;
			cout<<" Grade 2 = "<<grade2<<endl;
			cout<<" Grade 3 = "<<grade3<<endl;
			cout<<" Grade 4 = "<<grade4<<endl;
			float final;
			final=(grade1+grade2+grade3+grade4)/4;
			cout<<endl<<endl;
			cout<<"Final grade = "<<final<<endl<<endl;
			cout<<"-----------------------------------------"<<endl;
	
		}
	
		
	~Student(){
		
		cout<<"Destructor was called(Student)"<<endl<<endl;
		
	}
			
};

	class Teacher : public Student {
		
		string subject;
	
		public:
			
			Teacher():Student(){
				
				cout<<"Implicit constructor was called(Teacher)"<<endl<<endl;
				
			}
			
			Teacher(string u_subject,string u_name,int u_age,char u_gender,int u_year,string u_course1,string u_course2,string u_course3,string u_course4):
				Student( u_name, u_age,u_gender,u_year,u_course1,u_course2,u_course3,u_course4){
					
					cout<<"Contructor with parameters was called(Teacher)"<<endl<<endl;
					
				}
			
			void setsubject(string u_subject){
				
				subject=u_subject;
				
			}
			
			string getsubject(){
				
				return subject;
				
			}
			
			void getteacher(){
			cout<<"Name = ";
			cin>>name;
			cout<<endl;
			cout<<"Age = ";
			cin>>age;
			cout<<endl;
			cout<<"Gender = ";
			cin>>gender;
			cout<<endl;
			cout<<"Subject = ";
			cin>>subject;
			cout<<endl;
		}
			
			void printteacher(){
		
		cout<<" Name : "<<name<<endl;
		cout<<" Age : "<<age<<endl;
		cout<<" Gender : "<<gender<<endl;
		cout<<" Subject : "<<subject<<endl;
		cout<<endl<<"--------------------------------------"<<endl<<endl;
		}
			void checkenroll(){
		 	int n,m;
		 	cout<<"Introduce number of students"<<endl;
		 	cin>>n;
		 	cout<<endl;
		 	cout<<"Introduce number of teachers"<<endl;
		 	cin>>m;
		 	cout<<endl;
		 	Student student[n];
		 	Teacher teacher[m];
		 	for(int i=0;i<n;i++){
		 		for(int j=0;j<m;j++){
		 			if(student[i].getcourse1()==teacher[j].getsubject()||student[i].getcourse2()==teacher[j].getsubject()||student[i].getcourse3()==teacher[j].getsubject()||student[i].getcourse4()==teacher[j].getsubject())
		 				cout<<"Student "<<(i+1)<<"is enrolled in teacher's "<<(j+1)<<"Course"<<endl;
		 }
		 
		 }}
		
			
			~Teacher(){
				
				cout<<"Destructor was called(Teacher)"<<endl<<endl;
				
			}	
	};		
		
	
	
	int main(){
		 int selection;
		 char display;
		 int n;
		 cout<<"Introduce number of students : ";
		 cin>>n;
		 Student student[n];
		 for(int i=0;i<n;i++){
		 	
		 	cout<<"Student "<<(i+1)<<endl;
		 	student[i].getstudent();
		 }
		 	
			 
			 int m;
		 cout<<"Introduce number of teachers : ";
		 cin>>m;
		 Teacher teacher[m];
		 for(int j=0;j<m;j++){
		 	
		 	cout<<"Teacher "<<(j+1)<<endl;
		 	teacher[j].getteacher();
		 }
		 cout<<"Introduce grades : ";
			for(int l=0;l<n;l++){
				
				cout<<"Student "<<(l+1)<<endl;
				student[l].getgrades();
			}
		 
		 
		 int OK=1;
		 do{	cout<<"1.Display student details"<<endl<<endl<<endl;
		 		cout<<"2.Display teacher details"<<endl<<endl<<endl;
		 		cout<<"3.Display courses enrollment"<<endl<<endl<<endl;
		 		cout<<"4.Display student grades"<<endl<<endl<<endl;
		 		cout<<"5.Exit"<<endl<<endl<<endl;
		 
		 cout<<"Choose your selection"<<endl<<endl;
		 cin>>selection;
		 	
		 	if(selection==1)
		 		{
		 			for(int i=0;i<n;i++){
		 		
		 		cout<<"Student details : "<<(i+1)<<endl;
		 		student[i].printstudent();
			 }	
			 	cout<<endl<<endl<<endl;
			 	cout<<"----------------------------------------------------------------"<<endl<<endl<<endl;
				 }
			
				 else
				 	
			if(selection==2){
			
			for(int j=0;j<m;j++){
		 		
		 		cout<<"Teacher details : "<<(j+1)<<endl;
		 		teacher[j].printteacher();
			 }
			 	cout<<endl<<endl<<endl;
			 	cout<<"----------------------------------------------------------------"<<endl<<endl<<endl;
			}
		 	
		 	else
		 	
		 	if(selection==3){
		 		for(int i=0;i<n;i++){
		 		for(int j=0;j<m;j++){
		 			if(student[i].getcourse1()==teacher[j].getsubject()||student[i].getcourse2()==teacher[j].getsubject()||student[i].getcourse3()==teacher[j].getsubject()||student[i].getcourse4()==teacher[j].getsubject())
		 				cout<<"Student "<<(i+1)<<"("<<student[i].getname()<<")"<<" is enrolled in teacher's "<<(j+1)<<"("<<teacher[j].getname()<<")"<<" Course"<<"("<<teacher[j].getsubject()<<")"<<endl;
		 }
		 		cout<<endl<<"------------------------------------"<<endl;
		 }
		  	cout<<endl<<endl<<endl;
			 	cout<<"----------------------------------------------------------------"<<endl<<endl<<endl;
		 }
		 	
		 else
		 
		 	if(selection==4){
		 		for(int l=0;l<n;l++){
		 		cout<<"Grades information : "<<(l+1)<<endl;
		 		student[l].printgrades();
			 }
			 	cout<<endl<<endl<<endl;
			 	cout<<"----------------------------------------------------------------"<<endl<<endl<<endl;
			 }
		 	
		 	else
		 	if(selection==5){
		 		OK=0;
		 		cout<<"Program ended"<<endl<<endl;}
		 
		 else
		 		
		 cout<<"Invalid selection"<<endl;
		 		
			 }while(OK==1);
		}
		 
		
		 
		 
		 

