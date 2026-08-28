#include <iostream>

using namespace std;

int main() {

     //Character type
    
    char middle_initial {'J'}; 
    cout << "My middle initial is " << middle_initial << endl;


     //integer types
    unsigned short exam_score {55}; // same as unsigned short int exam_score {55};
    cout << "My exam score was " << exam_score << endl;

    int countries_represented {65}; 
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;

    long people_in_florida {261000000};
    cout << "There are about " << people_in_florida << " people in Florida" << endl;

    long long people_on_earth {7'600'000'000LL};
    cout << "There are about " << people_on_earth << " people on earth" << endl;

    long long distance_to_alpha_centauri {94'61'000'000'000};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;


    //floating point types
    float car_payment {69.69};
    cout << "My car payment is " << car_payment << endl;
    
    double pi {3.14159};
    cout << "Pi is " << pi << endl;

    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number" << endl;


    //boolean type
    bool game_over {false};
    cout << "The value of the game over is " << game_over << endl;
    

    //overflow example
    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2}; // product is -15488 due to overflow
    cout << "The product of " << value1 << " and " << value2 << " is " << product << endl; 
    return 0;
}