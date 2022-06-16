/*Problem
Chef is a class teacher. He has n students in his class. Chef recently conducted an exam. The scores of all the n students is given to you. His students are very competitive and will start fighting if there is more than one student who topped the exam. It is your job to figure out whether his students will start fighting or not, so that Chef can go prepared to the class.

Input
The first line of each test case contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains an integer n, denoting the number of students.
The next line contains n space-separated integers, i-th of which will be score denoting the score of the i-th student.

Output
For each test case, output in a new line, "fight:(" if there is more than one topper, otherwise output "peace:)" (without quotes).

Input
3
3
1 2 3
3
2 1 2
4
3 2 4 2

Output
peace:)
fight:(
peace:)


*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){

    int testcases;
    cin>>testcases;

    while (testcases--){

    int no_students;
    cin>>no_students;

    int A[no_students];
    //int total_count=0;
    {
        for(int i=0; i<no_students; i++)
            cin>>A[i];
    }
        sort(A,A+no_students);
        int result=*max_element(A,A+no_students);

        if(A[no_students-2]<result){
            cout<<"peace:)"<<endl;
        }else if
        (A[no_students-2]==result){
                cout<<"fight:("<<endl;
            }
        }
        return 0;
}

