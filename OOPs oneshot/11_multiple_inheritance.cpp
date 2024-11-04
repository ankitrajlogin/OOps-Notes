/*************************************  


Multiple inheritance is a type of inheritance in object-oriented programming where a single derived class inherits from more than one base class. In C++, this allows the derived class to acquire the attributes and behaviors of multiple parent classes, providing it with functionalities from several sources.

Key Features of Multiple Inheritance:
Combined Functionality: The derived class has access to the properties and methods of all its base classes, allowing it to inherit multiple functionalities.
Increased Flexibility: Multiple inheritance is helpful when a class logically requires features from more than one class, allowing you to mix different functionalities in a single class.
Complexity and Ambiguity: Multiple inheritance can lead to complications, such as the Diamond Problem, where ambiguity arises due to inheritance paths from multiple classes sharing a common base.
 */

#include <iostream>
using namespace std;


class Camera {
public:
    void takePhoto() {
        cout << "Taking a photo." << endl;
    }

    void powerOn(){
        cout << "Camera pwerOn" << endl ; 
    }
};


class MusicPlayer {
public:
    void playMusic() {
        cout << "Playing music." << endl;
    }

    void powerOn(){
        cout << "MusicPlayer powerOn" << endl ;
    }
};




class SmartPhone : public Camera, public MusicPlayer {
public:
    void makeCall() {
        cout << "Making a call." << endl;
    }

    // You can call powerOn() from a specific base class by qualifying it with the base class name and the scope resolution operator (::). Here’s how you would modify your main() function to specify which powerOn() method to call:

    void powerOn(){
        Camera::powerOn() ; 
        MusicPlayer::powerOn() ; 
    }


};

int main() {
    SmartPhone myPhone;
    myPhone.takePhoto();  
    myPhone.playMusic();  
    myPhone.makeCall();   

    // the SmartPhone class inherits from both Camera and MusicPlayer, each of which has a powerOn() function. When you call myPhone.powerOn(), it’s ambiguous which powerOn() function to use—the one from Camera or the one from MusicPlayer. This is a classic example of ambiguity in multiple inheritance.

    // To resolve this ambiguity, you need to explicitly specify which base class's powerOn() function you want to call. Here’s how you can handle this situation:

    myPhone.powerOn() ;

    return 0;
}
