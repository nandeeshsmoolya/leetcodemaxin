class Solution {
public:
    string interpret(string command) {
        string temp;
        for(int i=0;i<command.size(); i++){
            if(command[i]=='(' && command[i+1]==')'){
                temp=temp+"o";
            }
            else if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')'){
                temp=temp+"al"; i+=2;
            }
            else if(command[i]==')') continue;
            else temp+=command[i];   
        }
        return temp;
    }
};