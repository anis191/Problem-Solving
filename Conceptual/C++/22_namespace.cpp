#include<iostream>
using namespace std;

namespace student{
    int id;
    string name;

    class GPA{
        public:
        float ssc;
        float hsc;
    };

    void cgpa(GPA student_data){
        float cg = (student_data.ssc + student_data.hsc) / 2;
        cout << "CGPA: " << cg << endl;
    }
}

using namespace student;

int main(){
    id = 2314;
    name = "Anisul Alam";

    GPA anis;
    anis.ssc = 4.99;
    anis.hsc = 4.79;

    cgpa(anis);
}