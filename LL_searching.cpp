#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Employee
{
    string emp_name;
    int salary;
    int emp_id;
    Employee *next;
};

Employee *Cloudo_Tech = NULL;

void add_employee()
{
   //Creating Employee 
  
    Employee *emp = new Employee;
    cin>>emp->emp_name;
    cin>>emp->emp_id;
    cin>>emp->salary;
  
  //Inserting Employee in the beginning of the list
  
    emp->next = Cloudo_Tech;
    Cloudo_Tech = emp;
    
}

void search_employee(int emp_id)
{
    struct Employee *ptr;
    ptr=Cloudo_Tech;
    int found=0;
    
    while(ptr!=NULL){
        if(ptr->emp_id==emp_id){
            cout<<ptr->emp_name<<" "<<ptr->salary;
            found++;
        }
        ptr=ptr->next;
    }
    if(found==0){
        cout<<"Employee does not exist";
    }

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     
    int n;
    cin>>n;     //Reading number of employees
  
    for(int i=0; i<n; i++)        //adding employees in the list
      add_employee();

    int emp_id;
    cin>>emp_id;
    search_employee(emp_id);  
    
    return 0;
}