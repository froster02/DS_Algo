#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Student{
    //MEMBER FUNCTIONS
    private:
        int age;
        string str;
        string str1;
        int standard;
    public:
        //SET PARAMETERS
        void set_age(int a){ 
            age = a;
        }
        void set_first_name(string s){
            str = s;
        }
        void set_last_name(string s1){
            str1 = s1;
        }
        void set_standard(int std){
            standard = std;
        }
        //GET PARAMETERS
        int get_age(){
            return age;
        }
        string get_first_name(){
            return str;
        }
        string get_last_name(){
            return str1;
        }
        int get_standard(){
            return standard;
        }
        string to_string(){
            cout<<age<<","<<str<<","<<str1<<","<<standard<<endl;
        }
} ;
int main(){
    cout<<endl;
    cout<<"*******************************************************************"<<endl<<endl;
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    cout<<"\n*******************************************************************"<<endl<<endl<<endl;
}