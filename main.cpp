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
//  Noun: Employee
//  action 1: Employee.PerformTask()

//  action 2: Employee.ClockIn()

//  action 3: Employee.Rotate()

//  2)
//  Noun: Student
//  action 1: Student.GoToSchool()

//  action 2: Student.GoToClass()

//  action 3: Student.DoHomework()

//  3) BusDriver
//  Noun:
//  action 1: BusDriver.StartBus()

//  action 2: BusDriver.MakeStop()

//  action 3: BusDriver.GoToStation()

//  4) Doctor
//  Noun:
//  action 1: Doctor.PerformCheckup()

//  action 2: Doctor.OrderBloodwork()

//  action 3: Doctor.PerformSurgery()

//  5)
//  Noun: Elevator
//  action 1: Elevator.GotoNthFloor()

//  action 2: Elevator.Stop()

//  action 3: Elevator.Open()

//  6)
//  Noun: Fireman
//  action 1: Fireman.GetSuitedUp()

//  action 2: Fireman.SlideDownPole()

//  action 3: Fireman.PutOutFire()

//  7)
//  Noun: ConvenienceClerk
//  action 1: ConvenienceClerk.StockShelves()

//  action 2: ConvenienceClerk.RingUpCustomer()

//  action 3: ConvenienceClerk.TakeDownThief()

//  8)
//  Noun: Thief
//  action 1: Thief.PutOnMask()

//  action 2: Thief.CallDriver()

//  action 3: Thief.RobConvenienceStore()

//  9)
//  Noun: Marine
//  action 1: Marine.GoToBootCamp()

//  action 2: Marine.FlyJet()

//  action 3: Marine.SaluteCaptain()

//  10)
//  Noun: Musician
//  action 1: Musician.PlayInstrument()

//  action 2: Musician.WriteSong()

//  action 3: Musician.ReadMusic()



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
