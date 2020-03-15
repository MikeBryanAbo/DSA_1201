#include <iostream>
#define SIZE 10
using namespace std;

class stck {
private:
    int top;
public:
    int num[SIZE];
        stck();
        int push(int);
        int pop(int);
        int isEmpty();
        int isFull();
        void displayItems();
};

stck::stck(){
    top=-1;
}

int stck ::isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;
}


int stck::isFull(){
if(top==(SIZE-1))
    return 1;
else
    return 0;
}
int stck::push(int n){
    if (isFull()){
            return 0;
}
    ++top;
    num[top]=n;
    return n;
}

int stck::pop(int n){
int temp;
if (isEmpty())
    return 0;
        temp=num[n];
        for (int i=n; i<top; i++){
                num[i]=num[i+1];
        }
    --top;
    return temp;
}

void stck::displayItems(){
int i;
cout <<"Your stack is:\n";
    if(isEmpty())
    {
        cout<<"Empty!!";
    }
    for(i=(top); i>=0; i--)
        cout << num[i] << " \n";
}
int main()
{

stck stk;

int dis, n, temp, dis2;
do
{
    cout << endl;
    cout << "0 - Exit."<< endl;
    cout << "1 - Push Item."<< endl;
    cout << "2 - Pop Item." << endl;
    cout << "3 - Display Item (PRINT STACK)"<< endl;

    cout << "Enter your choice: ";
    cin >> dis;

    switch(dis){
    case 0: break;
    case 1:
        cout << "Enter item to insert: ";
        cin>> n;
        temp = stk.push(n);
        if(temp==0){
                cout << "Your stack is full!!"<<endl;
        }
        else{
                cout<< temp<< " is inserted successfully!!" <<endl;
        }
        break;

    case 2:
        cout << "Which index position do you want to delete?: ";
        cin >> dis2;

        temp=stk.pop(dis2);
        if(temp==0)
            cout<< "Stack is empty."<<endl;
        else
            cout << temp << " was removed (popped)."<<endl;
        break;
    case 3:
        stk.displayItems();


        break;

    default:
        cout<< "Invalid choice!!"<<endl;
    }
}
while(dis!=0);
    return 0;
}
