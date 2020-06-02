#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: 		phone 
//  action 1:	the phone calls another phone
phone.call();
//  action 2:	the phone connects to a network
	phone.connect();
//  action 3: 	the phone vibrates
	phone.vibrate();

//  2)
//  Noun:		wampler
//  action 1:	the sampler incoming audio signal to a buffer (foo)
sampler.record(foo);
//  action 2:	the sampler playsback an audio file
sampler.playback(foo);
//  action 3:	the sampler alters at playerback speed of a sample 
sampler.speed(foo);

//  3)
//  Noun: 		cat 
//  action 1:	The cat meows
cat.meow();
//  action 2:	the cat purs
cat.pur();
//  action 3:	the cat sleeps
cat.sleep();
 
//  4)
//  Noun:		plant 
//  action 1:	the plant grows
plant.grow();
//  action 2:	the plant photpsynthesizes 
plant.photosyntesize();
//  action 3:	the plant wilters
plane.wilter();
 
//  5)
//  Noun:		legion
//  action 1:	the legion marches to a location foo
legion.march(foo);
//  action 2:	the legion encamps for the night
legion.camp();
//  action 3:	the legion position into maniples
legion.postion();
 
//  6)	
//  Noun		multiFX:
//  action 1:	The unit processing the input with a chorus effect
multiFX.chorus();
//  action 2:	The unit processing the input with a bitreduction effect
multiFX.bitReduction();
//  action 3:	the effects unit outputs a signal
multiFX.output();
	
//  7)
//  Noun:		RGB light
//  action 1:	set the brightness of the red light  by a integer 0 - 255
light.setRed(122);
//  action 2:	set the brightness of the green light  by a integer 0 - 255
light.setGreen(22);
//  action 3:	set the brightness of the blue light  by a integer 0 - 255
light.setBlue(200);
 
//  8)		
//  Noun:		cell	
//  action 1:	the cell performs mitosis 
cell.divide();
//  action 2:	the cell moves its flangelum 
cell.activeTransport();
//  action 3:	the cell processes glucose
cell.metabolize();
 
//  9)
//  Noun:		CD drive	
//  action 1:	the CD drive reads data
cdDrive.read();
//  action 2:	the CD drive writes data
cdDrive.write();
//  action 3:	the drive opens the disk tray
cdDrive.open();
 
//  10)
//  Noun:		A totally non branded smart speaker
//  action 1:	set an alarm
alecksa.setalarm();
//  action 2:	play a song
alecksa.play();
//  action 3:	pause the playback of audio
alecksa.pause();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
