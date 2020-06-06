#include "robot.hpp"
int main(){
    sf::TcpSocket socket;
	if (initClientRobot() !=0){
		std::cout<<" Error initializing robot"<<std::endl;
	}
    double vLeft = 40.0;
    double vRight = 40.0;
    takePicture();
    SavePPMFile("i0.ppm",cameraView);


    int* whiteArray = new int[10]; //Initialise array (fixed atm but will need to be changed to width of FOV of robot)
    double width=10; //Width of fov of robot - set to 10 as test

    //Fixed array used for testing
    /*for (int i=0; i < 8; i++) {
        whiteArray[i] = 0;
    }
    for (int i=8; i < 10; i++) {
        whiteArray[i] = 1;
    }*/



    while(1){ //While true loop to make the robot continue to change its direction
        vLeft = 40.0; // Reset speeds inside the while loop
        vRight = 40.0;
        //Creates a somewhat random array of size 10 containing 1's and 0's
        for (int i=0; i<width; i++) {
            whiteArray[i] = rand() % 2;
        }

        //Outputs the array for testing
        for (int i=0; i <width; i++) {
            std::cout << whiteArray[i] << std::endl;
        }

        //Averages the location of the white pixels to find how far the robot needs to turn
        double average = 0;
        int j=0;
        for (int i=0; i<width; i++){
            if (whiteArray[i] == 1){
                average+=i+1;
                j++;
            }
        }
        average=average / j;

        std::cout<<"center of white line:"<<average<<std::endl; //Output for testing

        //Calculates how far the average white pixels are from the center of the image/array
        int middle = width/2;
        double error = middle - average;
        double vLeft2=vLeft, vRight2=vRight; // Create secondary variables for use later
        if (error<=0){//Adjusts left or right motor based on this information (unfinished)
            vLeft = vLeft2+2;
        } else {
            vRight = vRight2+2;
        }

      setMotors(vLeft,vRight);//Set motor speed based on the calculation above
      std::cout<<" vLeft="<<vLeft<<"  vRight="<<vRight<<std::endl;
       usleep(10000);
  } //while
} // main