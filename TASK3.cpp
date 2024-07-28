#include <bits/stdc++.h>
using namespace std;


class ToDoList{
    private:
    vector<string> tasks;
    vector<bool> isCompleted;

    public:
    ToDoList(){
        tasks.clear();
        isCompleted.clear();
    }

    void takeChoice(){
        cout << "Enter: " << endl;
        cout << "-> 1 to add a new task" << endl;
        cout << "-> 2 to view all tasks" << endl;
        cout << "-> 3 to mark a task as completed" << endl;
        cout << "-> 4 to remove a task" << endl;
        cout << "-> -1 to exit" << endl;
    }

    void addTask(string input){
        tasks.push_back(input);
        isCompleted.push_back(false);
    }

    void changeCompletionStatus(int index){
        if(index > tasks.size() || index <= 0){
            cout << "Please provide a valid index" << endl;
            return;
        }
        isCompleted[index-1] = true;
    }

    void removeTask(int index){
        if(index > tasks.size() || index <= 0){
            cout << "Please provide a valid index" << endl;
            return;
        }
        tasks.erase(tasks.begin() + index - 1);
        isCompleted.erase(isCompleted.begin() + index - 1);
    }

    void viewList(){
        for(int i=0; i<tasks.size(); i++){
            string status = "";
            if(isCompleted[i]) status = "Completed";
            else status = "Pending";
            cout << i+1 << ". " << tasks[i] << " -> " << status << endl;
        }
    }
};


int main(){
    ToDoList todo;
    int x = 0;
    cout << "To-Do List" << endl;
    todo.takeChoice();
    cin >> x;
    while(x != -1){
        if(x == 1){
            cout << "Enter your task" << endl;
            string s;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, s);
            todo.addTask(s);
        }
        else if(x == 2){
            todo.viewList();
        }
        else if(x == 3){
            cout << "Enter the index of task you to mark as completed or enter -1 to cancel the operation" << endl;
            int index;
            cin >> index;
            if(index == -1) {
                todo.takeChoice();
                cin >> x;
                continue;
            }
            else {
                todo.changeCompletionStatus(index);
            }
        }
        else if(x == 4){
            cout << "Enter the index of task you to remove or enter -1 to cancel the operation" << endl;
            int index;
            cin >> index;
            if(index == -1) {
                todo.takeChoice();
                cin >> x;
                continue;
            }
            else {
                todo.removeTask(index);
            }
        }
        else{
            cout << "Choose a valid operation" << endl;
        }
        todo.takeChoice();
        cin >> x;
    }
    cout << "You have exited To Do List. Have a nice day!";
    return 0;
}
