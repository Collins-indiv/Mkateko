#include <iostream>
using namespace std;
class GRADEBOOK
{
  public:
     GRADEBOOK(string name)
     {
        SetCourseName(name);
     }
     void SetCourseName(string name)
     {
        CourseName = name;    
     }
     string GetCourseName()
     {
       return CourseName;
     }
     void DisplayMassage()
     {
        cout<<"Welcome to your course: "<<GetCourseName();
     }
   private:
      string CourseName;

};

int main()
{
   GRADEBOOK MYGRADEBOOK1("APPLIED MATHEMATICS AND MATHS MODELING");
   GRADEBOOK MYGRADEBOOK2("INTRODUCTION TO OOB 101 ");
   MYGRADEBOOK1.DisplayMassage();
   MYGRADEBOOK2.DisplayMassage();
   
   
   

  return 0;
}
