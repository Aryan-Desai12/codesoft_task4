#include<bits/stdc++.h>
using namespace std;

void display(string task[],int t_count){
    cout<<"Tasks To Do :"<<endl;
    cout<<"----------------------------"<<endl;

    for(int i = 0 ;i<t_count;i++){
            cout<<"Task "<<i<<" : "<<task[i]<<endl;
    }
    cout<<"----------------------------"<<endl;
}

int main(){

    string task[10] = {""};
   int count = 0;

   int option = -1;
   while(option!=0){
    cout<<"------To DO List------"<<endl;
    cout<<"1 - To Add new task."<<endl;
    cout<<"2 - To View the task"<<endl;
    cout<<"3 - To Delete the task"<<endl;
    cout<<"0 - To Terminate the list"<<endl;

    cin>>option;

    switch(option){
        case 1:
           if(count > 9){
            cout<<"-----List is FULL!!-----"<<endl;
           }
           else{
            cout<<"Enter a New Task : ";
            cin.ignore();
            getline(cin,task[count]);
            count++;
           }
           break;

        case 2:
           display(task,count);
           break;
        
        case 3:
            int del = 0;
            cout<<"Enter a Task to delete : ";
            cin>>del;

            if(del<0 || del>9){
                cout<<"Enter a valid Task no."<<endl;
                break;
            }

            for(int i = del ;i<count ; i++){
                task[i] = task[i+1];
            }
            count--;

            break;
    }

   }

    return 0;
}