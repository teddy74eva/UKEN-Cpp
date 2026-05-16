#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Stos {

    public:
        Stos(){}
        void push(const string& s){ imiona_.push_back(s); }
        string pop(){ 
            //if (imiona_.empty()) return "";
            string ostatnie_imię = imiona_.back();
            imiona_.pop_back();
            return ostatnie_imię;
        }
        bool empty(){ return imiona_.empty(); }

    private:
        vector <string> imiona_;


};


int main() {
    Stos st;
    st.push("Anna");
    st.push("Barbara");
    st.push("Celina");
    cout << st.pop() << endl;
    cout << st.pop() << endl;
    cout << st.empty() << endl;
    cout << st.pop() << endl;
    cout << st.empty() << endl;
}