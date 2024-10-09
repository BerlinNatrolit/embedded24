// A short example on how inheritance work in c++

#include <iostream>

using namespace std;

// class Animal;
class Mammal {
    private:                                        //private only visible to mammal
        int maxNumberOfLegs = 4;
        string mammalBenefit = "palate bone";
    protected:                                      // protected is visible to mammal and everything that inherits mammal, but nothing else.
        string prot = "this is protected";
    public:                                         // public is visible to everything.
        string getMammalBenefit() {
            return mammalBenefit;
        }
};

// Class rider
class Rider {
    public:
        string description = "Rider";
};

// Class primate extends mammal and rider.
// Remember that you can extend as private or public.
class Primate : public Mammal, public Rider {
    public:
        string primateBenefit = "opposable thumb";
        void printBenefits() {
            cout << "Benefits of primate: " << endl << primateBenefit << endl << getMammalBenefit() << endl;
            cout << "This Primate is a " << description << endl;
            cout << prot;
        }
};

// Humans extend primate.
class Human : Primate {

};

int main() {

    Primate primate;

    primate.printBenefits();
    primate.getMammalBenefit();
    return 0;
}