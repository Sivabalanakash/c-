#include <iostream>
#include <string>
using namespace std;
class legs
{
	public:
    int num_chicken_legs;
    int num_cow_legs;
    int num_pig_legs;
    int total_legs;
		legs(int num_chicken_legs,int num_cow_legs,int num_pig_legs)
		{
			total_legs = num_chicken_legs*2 + num_cow_legs*4 + num_pig_legs*4;
		}
		void display() {
        cout << "The total number of legs is " << total_legs << endl;
    }
};
int main() {
    int num_chickens, num_cows, num_pigs;
    cout << "Enter the number of chickens: ";
    cin >> num_chickens;
    cout << "Enter the number of cows: ";
    cin >> num_cows;
    cout << "Enter the number of pigs: ";
    cin >> num_pigs;
    legs legs(num_chickens, num_cows, num_pigs);
    legs.display();
    return 0;
}
