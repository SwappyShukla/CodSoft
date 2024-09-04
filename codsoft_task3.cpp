#include <iostream>
#include <vector>
#include <limits>


using namespace std;


void showMenu();

void addTask(vector<string> &tasks);
void viewTasks(const vector<string> &tasks);
void deleteTask(vector<string> &tasks);

int main() {
    vector<string> tasks;
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                deleteTask(tasks);
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}

void showMenu() {
    cout << "\n===== To-Do List Manager =====\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Delete Task\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

void addTask(vector<string> &tasks) {
    string task;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
    cout << "Enter task to add: ";
    getline(cin, task);
    tasks.push_back(task);
    cout << "Task added successfully.\n";
}

void viewTasks(const vector<string> &tasks) {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
    } else {
        cout << "\n--- Tasks ---\n";
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

void deleteTask(vector<string> &tasks) {
    if (tasks.empty()) {
        cout << "No tasks to delete.\n";
    } else {
        int index;
        viewTasks(tasks); // Show current tasks
        cout << "Enter index of task to delete (1-" << tasks.size() << "): ";
        cin >> index;

        if (index >= 1 && index <= static_cast<int>(tasks.size())) {
            tasks.erase(tasks.begin() + index - 1);
            cout << "Task deleted successfully.\n";
        } else {
            cout << "Invalid index. No task deleted.\n";
        }
    }
}
