#include "robot.hpp"

int main() {
    if (initClientRobot() != 0) {
        std::cout << " Error initializing robot" << std::endl;
    }
    double vLeft = 40.0;
    double vRight = 40.0;
    int *whiteArray = new int[150]; //Initialise array that's scope is set to the width of the FOV of the robot
    double width = 150;  //Width of FOV of the robot


    while (1) {  //While true loop that makes the robot continue to grab an array of white pixels for each different position in the robot's journey
        vLeft = 40.0; // Reset speeds inside the while loop
        vRight = 40.0;
        takePicture();
        for (int i = 0; i < width; i++) {

            int pix = get_pixel(cameraView, 50, i,
                                3);  //will check all the pixels along a specific row (50) to see if they're white
            int isWhite;

            if (pix >
                250) { //Store 1 in the specific array position (i) within whiteArray if a white pixel is detected (we define a white pixel to be one that has a colour value that is greater than 250)
                whiteArray[i] = 1;
                isWhite = 1;
            } else { //Store 0 in the specific array position (i) within whiteArray if a pixel that isn't white is detected
                whiteArray[i] = 0;
                isWhite = 0;
            }
        }


//Outputs the array for testing
        for (int i = 0; i < width; i++) {
            std::cout << whiteArray[i] << std::endl;
        }

//Averages the location of the white pixels to find how far the robot needs to turn
        double average = 0;
        int j = 0;
        for (int i = 0; i < width; i++) {
            if (whiteArray[i] == 1) {
                average += i + 1;
                j++;
            }
        }
        average = average / j;

        std::cout << "center of white line:" << average << std::endl; //Output for testing

//Calculates how far the average white pixels are from the center of the image/array
        int middle = width / 2;
        double error = middle - average;
        double vLeft2 = vLeft, vRight2 = vRight; // Create secondary variables for use later
        if (error <= 0) {//Adjusts left or right motor based on this information (unfinished)
            vLeft = vLeft2 - error * 1.5;
        } else {
            vRight = vRight2 + error * 1.5;
        }


        std::cout << std::endl;
        setMotors(vLeft, vRight);
        std::cout << " vLeft=" << vLeft << "  vRight=" << vRight << std::endl;

//outputting the array for testing
/*for (int i = 0; i < width; i++){
    std::cout<<whiteArray[i]<<" ";
}*/

        usleep(10000);
    } //while
} // main
