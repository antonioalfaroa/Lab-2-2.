#include<iostream> 
using std::cout;
using std::cin;
using std::endl;
class sample{
  private:
int a; 
char b; 
float c;
  
  public:
void get_data(){
    cout<<"Enter an integer value : ";
    cin>>a;cout<<endl;
    cout<<"Enter a character value : ";
    cin>>b;cout<<endl;
    cout<<"Enter a float value : ";
    cin>>c;cout<<endl;
    }
void print_data(){
    cout<<"Values read from keyboard are : "<<endl<<endl;
    cout<<"Integer value : "<<a<<endl<<endl;
    cout<<"Character value : "<<b<<endl<<endl;
    cout<<"Float value : "<<c<<endl<<endl;
    }
};
int main(void){
  sample s;
  s.get_data(); 
  s.print_data();
  
  return 0;
  }