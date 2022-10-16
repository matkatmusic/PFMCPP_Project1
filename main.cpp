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
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: Dog
//  action 1: The dog barks.
dog.bark()
//  action 2: The dog sleeps.
dog.sleep()
//  action 3: The dog eats.
dog.eat()

//  2)
//  Noun: Radio
//  action 1: The radio receives signals.
radio.receive()
//  action 2: The radio transmits signals.
radio.transmit()
//  action 3: The radio changes frequencies.
radio.setFrequency()

//  3) musicPlayer
//  Noun:
//  action 1: The music player plays a song.
musicPlayer.play()
//  action 2: The music player stops playing a song.
musicPlayer.stop()
//  action 3: The music player opens a new file.
musicPlayer.openFile()

//  4)
//  Noun: Car 
//  action 1: The car accelerates.
car.accelerate();
//  action 2: The car slows down.
car.break();
//  action 3: The car changes gear. 
car.changeGear();

//  5)
//  Noun: Bird
//  action 1: The bird flys.
bird.fly()
//  action 2: The bird sings.
bird.sing()
//  action 3: The bird lays an egg.
bird.layEgg()

//  6)
//  Noun: Student
//  action 1: The student reads.
student.read();
//  action 2: The student takes notes.
student.takeNotes()
//  action 3: The student takes exam.
student.takeExam()

//  7) 
//  Noun: Teacher
//  action 1: The teacher lectures.
teacher.lecture();
//  action 2: The teacher grades assignments.
teacher.gradeAssignment();
//  action 3: The teacher takes attendance.
teacher.takeAttendance(); 

//  8)
//  Noun: Librarian 
//  action 1: The librarian locates a book.
librarian.locateBook();
//  action 2: The librarian checks out a books.
librarian.checkOutBook();
//  action 3: The librarian checks in a book. 
librarian.checkInBook();

//  9)
//  Noun: Phone
//  action 1: The phone makes a call.
phone.placeCall()
//  action 2: The phone connects an incoming call.
phone.connectIncommingCall()
//  action 3: The phone hangs up.
phone.hangUp();

//  10)
//  Noun: Calculator 
//  action 1: The calculator adds two numbers.
calculator.sum()
//  action 2: The calculator subtracts two numbers
calculator.diff()
//  action 3: The calculator multiplies two numbers.
calculator.multiply() 


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
