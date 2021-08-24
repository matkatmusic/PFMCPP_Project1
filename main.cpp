#include <iostream>

/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1
Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
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
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
Make a pull request after you make your first commit and pin the pull request link to our DM thread.
send me a DM to check your pull request
 Wait for my code review.
 */


//    noun: towel
//    actions:
//    use towel to scrub
    towel.scrub()
//    use towel to clean
    towel.clean()
//    use towel to dry spill  
    towel.dry()

 //   noun: fader
 //   actions:
 //   use fader to siconnect signal 
    fader.disconnect()
 //   use fader to increase signal
    fader.setValue()
//    use fader to decrease signal
    fader.setValue()

    // noun: filter
    // actions
    // use filter to filter out frequency 
    filter.removeFrequency()
    // use filter to remove noise
    filter.removeNoise()
    // use filter to increase high frequency
    filter.increaseHighFrequency()

    // noun: sampler
    // actions:
    // use sampler to sample signal 
    sample.signal()
    // use sampler to play signal
    sapmple.play()
    // use sampler to play signal in reverse
    sample.playReverse()

    // noun: grinder
    // actions:
    // use grinder to grind meat 
    grinder.grndPotato()
    // use grinder to grind potato
    grinder.grndMeat()
    // use grinder to grind a carrot 
    grinder.grndCarrot()

    // noun: scrambler
    // actions:
    // use scrambler with algorithm 1 on data
    scrambler.performAlgorithm1() 
    // use scrambler with algorithm 2 on data
    scrambler.performAlgorithm2() 
    // use scrambler to descramble data
    scrambler.descramble()

    // noun: telephone
    // actions: 
    // use telephone to perform a call  
    telephone.call()
    // use telephone to send text message
    telephone.sendText()
    // use telephone to shoot photo
    telephone.shootPhoto() 

    // noun: connector
    // actions:
    // use connector to connect a terminal
    connector.connectTerminal()
    // use connector to join 2 terminals
    connector.join() 
    // use connector to disconnect
    connector.detach()

    // noun: alarm
    // actions:
    // alarm buzzes 
    alarm.buzz()
    // alarm flash light
    alarm.flash()
    // alarm turns off
    alarm.off() 

    // noun: lcdDisplay
    // actions:
    // lcdDisplay turns off  
    lcdDisplat.off()
    // lcdDisplay displays data
    lcdDisplay.diplay()  
    // lcdDisplay flashes on and off  
    lcdDisplay.flash()
 


int main()
{
    std::cout << "good to go!" << std::endl;
    return 0;    
}
