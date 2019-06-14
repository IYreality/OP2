#include<string>
class User{
public:
    void changeName(string name);
    void changeOld(int old);
    void changeMailbox(string mailBox);
    void changePassword(string password);
    int getId();
private:
    string name;
    int id;
    int old;
    string mailBox;
    string password;
};