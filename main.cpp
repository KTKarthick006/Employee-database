# include <iostream>
using namespace std;

class staff
{
    public :
        int code ;
        string name ;
};

class teacher : public staff
{
    public :
        string subject ;
        string publication ;
};

class officer : public staff
{
    public:
        int grade;
};

class typist : public teacher , public officer
{
    int speed;
};

class regular : public typist
{

};

class casual : public typist
{
    int wage;
};


