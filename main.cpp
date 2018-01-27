#include <iostream>
#define ELEMAN_SAYISI 5

using namespace std;

int arr[5]{3,6,7,4,5};


typedef struct{

    unsigned int bit0 : 1;
    unsigned int bit1 : 1;
    unsigned int bit2 : 1;
    unsigned int bit3 : 1;
    unsigned int bit4 : 1;
    unsigned int bit5 : 1;
    unsigned int bit6 : 1;
    unsigned int bit7 : 1;
    unsigned int rsvd : 24;

}SeeBitsStc;
bool readMemory(void* pVoid)
{
   
}

bool seeBits(void* pVoid)
{
    SeeBitsStc* pBits = static_cast<SeeBitsStc*>(pVoid);

    cout<< pBits->bit0 << endl;
    cout<< pBits->bit1 << endl;
    cout<< pBits->bit2 << endl;
    cout<< pBits->bit3 << endl;
    cout<< pBits->bit4 << endl;
    cout<< pBits->bit5 << endl;
    cout<< pBits->bit6 << endl;
    cout<< pBits->bit7 << endl;
}
class Person{

public:
    int x;
    Person(int x){
        this->x = x;
    }
    Person(){

    }

    string lastName;
    string firstName;

protected:
private:


};
int main()
{
    Person person;
    Person personn(3);
    Person* pPerson = &personn;

    pPerson->firstName = "Koray";
    pPerson->lastName = "asd";

    cout<< pPerson->firstName << endl;
    cout<< pPerson->x << endl;

}




