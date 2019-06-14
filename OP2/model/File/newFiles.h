#include<iostream>

using  namespace std;
//四种类型的文件
enum types{unkown = 0,mesh=1,bin=2,txt=3};
string getTypeOfInt(int type){
    switch (type){
        case 0:
            return "unkown";
        case 1:
            return "mesh";
        case 2:
            return "bin";
        case 3:
            return "txt";
    }

}
class File{
public:
    File(){//默认类型为未知
        file.name = "unkown";
        file.type = 0; 
    }
    string getName(){return this.name;}
    string getType(){return getTypeOfInt(this.type);}
private:
    string name;//filename
    int type;
};

class meshFile:public File {
public :
    string getName(){return this.name;}
    string getType(){return getTypeOfInt(this.type);}

private :
    meshFile(){
        this.name = "unkown";
        this.type = 1;
    }
    meshFile(string name){
        this.name = name;
        this.type = 1;
    }
};
class binFile :public File{
public :
    string getName(){return this.name;}
    string getType(){return getTypeOfInt(this.type);}

private :
    binFile(){
        this.name = "unkown";
        this.type = 2;
    }
    binFile(string name){
        this.name = name;
        this.type = 2;
    }
};
class txtFile :public File{
public :
    string getName(){return this.name;}
    string getType(){return getTypeOfInt(this.type);}

private :
    txtFile(){
        this.name = "unkown";
        this.type = 3;
    }
    txtFile(string name){
        this.name = name;
        this.type = 3;
    }
};
class unkownFile :public File{
public :
    string getName(){return this.name;}
    string getType(){return getTypeOfInt(this.type);}

private :
    unkownFile(){
        this.name = "unkown";
        this.type = 0;
    }
    unkownFile(string name){
        this.name = name;
        this.type = 0;
    }
};
