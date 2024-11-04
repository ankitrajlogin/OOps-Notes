

/*
The error is occurring because in C++, member objects like Camera and MusicPlayer need to be accessed using their variable names, not the class names. When you create an instance of SmartPhone, the camera and musicPlayer objects (as declared in the SmartPhone class) should be accessed through their instance names, not the class name.
*/

#include <iostream>
using namespace std;

class Camera {
public:
    void takePhoto() {
        cout << "Taking a photo." << endl;
    }

    void powerOn() {
        cout << "Camera powerOn" << endl;
    }
};

class MusicPlayer {
public:
    void playMusic() {
        cout << "Playing music." << endl;
    }

    void powerOn() {
        cout << "MusicPlayer powerOn" << endl;
    }
};

class SmartPhone {
private:
    Camera camera;          // Member object of type Camera
    MusicPlayer musicPlayer; // Member object of type MusicPlayer

public:
    void makeCall() {
        cout << "Making a call." << endl;
    }

    void powerOn() {
        camera.powerOn();       // Access the powerOn function of Camera instance
        musicPlayer.powerOn();   // Access the powerOn function of MusicPlayer instance
    }

    void takePhoto() {
        camera.takePhoto();
    }

    void playMusic() {
        musicPlayer.playMusic();
    }
};

int main() {
    SmartPhone myPhone;
    myPhone.takePhoto();  
    myPhone.playMusic();  
    myPhone.makeCall();   

    myPhone.powerOn(); // Calls both Camera and MusicPlayer powerOn functions
    
    return 0;
}
