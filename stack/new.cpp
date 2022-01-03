#include<iostream>
using namespace std;

int main()
{

    string ticket="55393";
    string modid="249";
    string modfns="1274";
    string add= modfns+","+modid+","+ticket+"\n";

    string employees="519,2891,3795,5261,5675,51366,64356,79143,86876,654,3251,3543,5254,7213,18929,23749,30713,31075,32806,56311,2635,4392,7485,16369, 25097, 28717, 30032, 36542, 37055, 43484, 43663, 73069, 77888, 79143,5275,83247,79491,75462,81134,75463,67238,46966,13010,78464,75320,27213,27004,35745,23739,64356, 519, 2891, 3795, 5261, 5675, 28613, 51366, 64356, 79143, 86876, 67238, 46966, 27218, 87207,75247";
    for(int i=0;i<employees.length();i++)
    {
        if(employees[i]==' ')
        {
            for(int j=i;j<employees.length()-1;j++)
            {
               employees[j]=employees[j+1];
            }
        }

    }
    for(int i=0;i<employees.length();i++)
    {
        if(employees[i]==',')
        {
            employees.insert(i+1,"\n");
        }
    }
    for(int i=0;i<employees.length();i++)
    {
        if(employees[i+1]=='\n')
        {
            employees.insert(i+1,"1274,249,55393");
        }
    }
    cout<<employees<<endl;


}
