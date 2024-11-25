#include <iostream>

using namespace std;

void Logical_operations(int,int);

int main() {
    string var1,var2,Operation,symbol;
    int Operator,T_value;
    cout << "LOGICAL CONNECTIVES AND TRUTH TABLE\n\nEnter variable 1: ";
    cin >> var1;
    cout << "Enter variable 2: ";
    cin >> var2;
    cout << "************************************************************\n";
    cout << "[1]-Disjunction OR\n[2]-Conjunction AND\n[3]-Exclusive OR\n[4]-Implication\n[5]-Biconditional\nYour choice:  ";
    cin >> Operator;
    if(Operator == 1){
        Operation = "OR ";
        symbol = "v";
    }
    else if(Operator == 2){
        Operation = "AND";
        symbol = "^";
    }
    else if(Operator == 3){
        Operation = "Exclusive OR ";
        symbol = "XOR";
    }
    else if(Operator == 4){
        Operation = "Implication";
        symbol = "->";
    }
    else if(Operator == 5){
        Operation = "Biconditional";
        symbol = "<->";
    }
    cout << "************************************************************\nSelect Truth Value\n[1]-F/T\n[2]-0/1\nYour choice; ";
    cin >> T_value;
    cout << "************************************************************\n";
    cout << Operation+" TRUTH TABLE\n";
    cout << var1+"\t"+var2+"\t"+var1+symbol+var2 << endl;
    Logical_operations(Operator,T_value);
    return 0;
}
void Logical_operations(int Operator, int T_value){
    int a = 0,b = 0;
    string v1, v2, output;
    bool result;
    if (T_value == 1) {
        for (; a <= 1; a++) {
            for (b = 0; b <= 1; b++) {
                // Assign the truth values to v1 and v2 based on the values of a and b
                if(a == 0){
                    v1 = "F";
               }
                else {
                    v1 = "T";
                }
                if(b == 0){
                    v2 = "F";
                }
                else{
                    v2 = "T";
                }
                // Perform logical operation
                if(Operator == 1){
                    result = a || b;
                }
                else if(Operator == 2){
                    result = a && b;
                }
                else if (Operator == 3){
                    result = a ^ b;
                }
                else if ( Operator == 4){
                    result = !a || b;
                }
                else if (Operator == 5){
                    result = (a && b) || (!a && !b);
                }
                if(result){
                    output = "T";
                }
                else
                    output = "F";
                // Output the truth values of a, b, and the result
                cout << v1 << "\t" << v2 << "\t" << output << endl;
            }
        }
    }
    else if(T_value == 2){
        for(; a <= 1; a++){
            for(b = 0; b<=1;b++){
                
				if(Operator == 1){
                    result = a || b;
                }
                else if(Operator == 2){
                    result = a && b;
                }
                else if (Operator == 3){
                    result = a ^ b;
                }
                else if ( Operator == 4){
                    result = !a || b;
                }
                else if (Operator == 5){
                    result = (a && b) || (!a && !b);
                }
                // Output the truth values of a, b, and the result
                cout << a << " \t" << b << "\t" << result << endl;
            }
        }
    }
}