# AVC_Project
AVC Group Project for Engineering 101

# Team Name: #include \<Team26>

# Team Members:
* Jacob Chapman
* Charles Perera
* Jessica Karmawan
* Morgan Treleaven

Communication tool:
Discord

Github: https://github.com/oikz/AVC_Project

# Roles:
* Jessica Karmawan - Project Manager (organising team meetings, reporting regularly on progress)

* Charles Perera - Software Architect (writing core code and extending functionality)

* Jacob Chapman - Software Architect (partially shared) & Software writing, testing and documentation (debugging software and committing to git, writing test cases and documenting performance against milestones)

* Morgan Treleaven - Software writing, testing and documentation (debugging software and committing to git, writing test cases and documenting performance against milestones)


# Role Jobs (Initial)
* Charles writes code for reading array of white pixels
* Jacob writes code for making robot turn and figures out how to make robot turn
* Jessica & Morgan person oversee/test bugs etc

* Build on this for Completion and Challenge



# Due Dates:
* Final Code Due 19th June
* Group Log/Report Due 24th June
* Individual Log based on commit messages throughout
* Wiki Discussion of progress due 12th and 19th June


# Milestones:
## Complete Plan & Github Setup - Due Thursday 4th June
*    Tasks:
*    Setup Github repo and invite everyone
*    Push given files to github and have everyone clone/pull files
*    (Optional) Use a CLion compatible version of the project
*    Discuss plan with team and organise due dates etc
*    Organise roles etc
*    Plan further meetings

## Core Code/Testing            - Due Thursday 11th June
*    Tasks:
*    Split workload
*    Extract array of colours from image
*    Figure out how the robot needs to respond
*    Sort out the motors and how to make the robot turn to correct itself
*    Test on the course

## Completion Code/Testing      - Due Shortly after Core Code
*    Figure out how to make robot work with two lines
*    i.e. have robot make two arrays and correct its direction from that
*    Build on Core Code
    
## Challenge Code/Testing       - Due Thursday 18th June
*    Make robot able to pathfind based on presence of red outline of the course 
*    Potentially make it always turn left in the case of multiple choices?
*    Also potentially make the robot always turn 90 degrees left when it sees the red somewhere in the middle of its FOV
*    Theoretically robot should be able to navigate any course that only contains Red Walls

## Reflection                   - Due Wednesday 24th June
* Report should include following sections:
*    Task which your code solved
*    Approach your team took to solve the task: programming language, OS, hardware. Imagine that it was your choice.
*    Architecture - how your code is structured
*    Solution - what final version of software is capable of doing. Subsections: Image Processing and Motor Control. Algorithms you used.
*    Team dynamic how well team worked together and is team capable of doing bigger project
*    State Of The Art Review of autonomous driving software. Should include at least five references. Does not have to be very deep.
*    To do how your code can be adapted to autonomous driving, what should be added
*    Recommendations Go - no go for bigger project. 


## Meeting Times:
Roughly every 2 days starting 4th June at 3PM then any time


# Install

## Windows (Can cause issues/not fully tested)
* Method is not fully tested as working so may cause some issues that require troubleshooting (i.e. may require adding MinGW to system PATH)
* Download SFML 
* Install MinGW compiler that matches SFML (i.e. Download 64-bit 7.3.0 MinGW for 64-bit SFML)
* Relevant MinGW download links available on SFML download page
* Clone repository/download repository as ZIP
* Compile and build with makefiles with mingw32-make for AVC_server and AVC_robot
* Run server.exe
* Run robot.exe

## Mac
* Install Homebrew  
* Run ```Brew install sfml```  
* Clone repository/Download repository as ZIP
* Compile and build both AVC_server and AVC_robot using provided makefiles with ```make```
* Run server
* Run robot

## Linux
* Download SFML and unzip
* Clone Repository/Download repository as ZIP
* Compile and build AVC_server and AVC_robot with provided makefiles
* Run server
* Run robot
