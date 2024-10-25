//#project_1:-Making CGPA Calculator
#include<iostream>
using namespace std;
int n;
//making structure for different types of variables
struct arrays{
    string subj_name;
    float credits;
    float ecredits;
    float epoint;
    string grade;
};

struct elements{
    string name;  
    int rno;
    float total_epoint;  
    float total_credit;  
    float sgpa;
};

//assign structure 
arrays cgpa[1000];  
elements b;
//function for taking input of name and roll no
void input_basic(){
    cout << "Enter your name" << endl;
    cin >> b.name;
    cout << "Enter your roll no" << endl;
    cin >> b.rno;
}
//function to take input of no. of subject,name,credit and ecredit
void input_credit(int &n){  
    cout << "Enter no. of subjects: ";
    cin >> n;

    for(int i = 0; i < n; i++)  
    {
        cout << "Enter the name of subject " << i + 1 << endl;
        cin >> cgpa[i].subj_name;
    }

    for(int i = 0; i < n; i++)
    {
        cout << "Enter the credit of " << cgpa[i].subj_name << endl;
        cin >> cgpa[i].credits;
    }

    for(int i = 0; i < n; i++)
    {
        cout << "Enter the earned credit of " << cgpa[i].subj_name << endl;
        cin >> cgpa[i].ecredits;
    }
}
//function to make calculator to obtain cgpa
void calculator(int n){
    b.total_epoint = 0;  
    b.total_credit = 0;  

    for(int i = 0; i < n; i++)
    {
        cgpa[i].epoint = cgpa[i].credits * cgpa[i].ecredits;
        b.total_epoint += cgpa[i].epoint;
        b.total_credit += cgpa[i].credits;
    }
//formula
    b.sgpa = b.total_epoint / b.total_credit;
}
//function to assign grade according to earned credit
void grade(int n){
    for(int i=0;i<n;i++){
        if(cgpa[i].ecredits==10){
            cgpa[i].grade="O";
        }
        else if(cgpa[i].ecredits>=9.5){
            cgpa[i].grade="A+";
        }
        else if(cgpa[i].ecredits>=9){
            cgpa[i].grade="A";
        }
        else if(cgpa[i].ecredits>=8.5){
            cgpa[i].grade="B+";
        }
        else if(cgpa[i].ecredits>=8){
            cgpa[i].grade="B";
        }
        else if(cgpa[i].ecredits>=7.5){
            cgpa[i].grade="C+";
        }
        else if(cgpa[i].ecredits>=7){
            cgpa[i].grade="C";
        }
        else if(cgpa[i].ecredits>=6.5){
            cgpa[i].grade="D+";
        }
        else{
            cout<<"INVALID";
        }
    }
}
//function to print all the data in tabulur form
void print(int n){
    cout << "Name: " << b.name << "\t\t" << "Roll No: " << b.rno << "\t\t" << "SGPA: " << b.sgpa << endl;
    cout << "\nSubject\t\t\t\Credits\tEarned Credits\tEarned Point\tGrade\n";
    
    for (int i = 0; i < n; i++) {  
        cout << cgpa[i].subj_name << "\t\t\t"
             << cgpa[i].credits << "\t\t"
             << cgpa[i].ecredits << "\t\t"
             << cgpa[i].epoint << "\t\t"
             << cgpa[i].grade<< endl;
    }
}

int main(){
    //declared all the function in main
    int n;
    input_basic();
    input_credit(n);
    calculator(n);
    grade(n);
    print(n);
        return 0;
    }
    //Now let check the output  
