#include <iostream>
#include <vector>

using namespace std;

class Animal
{
    public:
        virtual void speak(void) = 0;
};
class Sheep : public Animal
{
    public:
        void speak(void)
        {
            cout << "Sheep says: \t\tbaa!" << endl;
        }
};
class Cow : public Animal
{
    public:
        void speak(void)
        {
            cout << "Cow says: \t\tmoo!" << endl;
        }
};
class Frisian : public Cow
{
    void speak(void)
    {
        cout << "Frisian Cow says: \tmoo (in black and white)!" << endl;
    }
};

int main()
{
    vector<Animal*> container;

    int num = 0;

    cout << "Enter a number: ";
    cin >> num;

    Animal* animal = nullptr;

    for (int a = 0; a < num; a++)
    {
        switch (rand() % 3)
        {
            case 0:
                animal = new Sheep();
                break;
            case 1:
                animal = new Cow();
                break;
            case 2:
                animal = new Frisian();
                break;
        }
       
        container.push_back(animal);

        container[a]->speak();
    }
}