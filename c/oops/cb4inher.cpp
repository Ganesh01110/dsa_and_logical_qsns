// yt-codebeauty
#include <iostream>
using std::string;


// abstract class 
class AbstartEmployee{
   virtual void AskForPromotion()=0;
};

class Employee:AbstartEmployee {
private:
    string Company;
    int Age;

protected:
    string Name;

    // private is the default, if nothing defined
    // need to define setter and getter method for this
 public :
    void setName(string name) {
        Name = name;
    }
    string getName(){
        return Name;
    }

     void setCompany(string company) {
        Company = company;
    }
    string getCompany(){
        return Company;
    }

     void setAge(int age) {
        // wecan add validator with condition
        if(age>=18)
        Age = age;
    }
    int getAge(){
        return Age;
    }
    
    void IntroduceYOurself(){
        std::cout<<"Namme -"<< Name << std::endl;

        std::cout<<"company -"<< Company<< std::endl;

        std::cout<<"age -"<< Age << std::endl;
    }

    Employee(string name, string company, int age) {
        Name = name; 
        Company = company;
        Age = age;

    }

    void AskForPromotion() {
        if (Age>=30)
          std::cout<<Name<<" is eligible for promotion "<<std::endl;
        else
          std::cout<<Name<<" is not eligible for promotion "<<std::endl;
    }
};

class Developer:public Employee {
// Developer is a subclass where employee now is a superclass
public:
   string FavProgrammingLanguage;

   Developer(string name, string company, int age, string favProgrammingLanguage): Employee(name, company, age){
        FavProgrammingLanguage = favProgrammingLanguage;
   }
   void FixBug() {
      std::cout << Name <<" Fixing bug in " << FavProgrammingLanguage << std::endl;
   }
};

class Teacher:Employee {
    string Subject;
    void PrepareLesson(){
        std::cout << Name << "is preparing " << Subject << " lesson" << std::endl;
    }
}

int main(){


    Employee employee1 = Employee("ganesh"," yt" , 24);

    Employee employee2 = Employee("abc","y1-2" , 32);
    employee2.IntroduceYOurself();

    employee1.AskForPromotion();
    employee2.AskForPromotion();
    
    Developer d=Developer("ganesh","yt",23,"cpp");
    d.FixBug();

}
