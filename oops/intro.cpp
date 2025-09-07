#include <iostream>
#include <cstring>
using namespace std;

class Hero
{
private:
    int health;

public:
    char wealth;
    char *name;

    Hero()
    {
        cout << "simple constructor called ......." << endl;
        name = new char[100];
    }
    // parameterized constructor

    // Hero(int health){       yaha hum us health ki bat karre hai jiska sope sabse nazdeek hai
    //     health = health;
    // }

    // parameterized constructor
    Hero(int health)
    {
        cout << "this-> " << this << endl;
        this->health = health;
    }

    Hero(int health, char wealth)
    {
        cout << "this-> " << this << endl;
        this->health = health;
        this->wealth = wealth;
    }

    // copy constructor
    Hero(Hero &temp)
    {
        // why pass bt reference : otherwise loop creating copy and copy and copy
        cout << "copy constructor called ......." << endl;
        this->health = temp.health;
        this->wealth = temp.wealth;
    }


    void print()
    {
        cout << "name " << this->name << endl;
        cout << "health " << this->health << endl;
        cout << "wealth " << this->wealth << endl;
    }

    int getHealth()
    {
        return health;
    }
    char getWealth()
    {
        return wealth;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setWealth(char ch)
    {
        wealth = ch;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
};

int main()
{
Hero suresh(70,'C');


Hero hero1;
hero1.setHealth(12);
hero1.setWealth('D');
char name[7] = "Babbar";
hero1.setName(name);
hero1.print();
 //use default copy constructor

 Hero hero2(hero1);
 hero2.print();


    cout << ".................................." << endl;
    Hero S(70, 'C');
    S.print();
    // copy constructor
    Hero R(S);
    R.print();
    cout << ".................................." << endl;
    Hero h1(10);
    cout << "address of h1-> " << &h1 << endl;
    cout << "size :" << sizeof(h1) << endl; // garbage value
    cout << "health is " << h1.getHealth() << " garbage value" << endl;
    cout << "wealth is " << h1.getWealth() << " garbage value" << endl;
    h1.setHealth(12);
    h1.setWealth('h');
    cout << "health is " << h1.getHealth() << endl;
    cout << "wealth is " << h1.getWealth() << endl;
    cout << ".................................." << endl;

    Hero *h2 = new Hero;
    cout << "health is " << (*h2).getHealth() << endl;
    cout << "wealth is " << (*h2).getWealth() << endl;

    h2->setHealth(15);
    h2->setWealth('v');

    cout << "health is " << (*h2).getHealth() << endl;
    cout << "wealth is " << (*h2).getWealth() << endl;

    return 0;
}
