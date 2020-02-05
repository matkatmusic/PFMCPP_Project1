#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

 write out 10 nouns.
 for each of the 10 nouns, write out 3 actions it might perform, in plain english.
 write out how you'd call that action in pseudo code, in the space between each block comment
 
 If the action requires multiple words, use camelCaseToNameIt
 don't forget the semi-colon after each statement
 
 When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example)
 Noun:       arm
 action 1:   the arm extends
 action 2:   the arm flexes
 action 3:   the arm rotates conter-clockwise
 */
arm.extend();
arm.flex();
arm.rotateCounterClockwise(); //demonstrates CamelCase

/*

	I added some arguments for the actions to express what was i was thinking about. Values are arbitrary
	
 1)
 Noun: 		oscilator
 action 1:	oscilates
 action 2:	changes oscilation frequency
 action 3:	changes waveform type
 */
	oscilator.oscilate();
	oscilator.setFrequency(300); //Hz
	oscilator.changeWaveform(sine);
/*
 2)
 Noun:		filter
 action 1:	removes high frequencies only
 action 2:	changes the cutoff freq
 action 3:	resonates
 */
	filter.setType(lop);
	filter.changeCutoffFreq(120); //Hz
	filter.resonate(1);
/*
 3)
 Noun:		delayEffect
 action 1:	turns On
 action 2:	selects delay time
 action 3:	selects dry/wet mix
 */
	delayEffect.enable();
	delayEffect.setTime(240); //millis
	delayEffect.setWetLevel(0.7);
/*
 4)
 Noun:		virtualSoundSource
 action 1:	rotates around a virtual point to create a circular trajectory
 action 2:	move to a desired virtual point
 action 3:	changes volume
 */
	virtualSoundSource.rotateAroundPoint(20, 5); //XY coords system
	virtualSoundSource.moveToPoint(30, 10); //XY coords system
	virtualSoundSource.setVolume(0.3);
/*
 5)
 Noun:		smartphone
 action 1:	vibrates
 action 2:	drains battery
 action 3:	receives sms
 */
	smartphone.vibrate(100); //millis
	smartphone.useCurrentFromBattery(); 
	smartphone.receiveSMS();

/*
 6)
 Noun:		mixerChannel
 action 1:	sets a input gain level
 action 2:	enables the filter section
 action 3:	pans(the action of panning?)
 */
	mixerChannel.setInputLevel(3);
	mixerChannel.bypass(false);
	mixerChannel.pan(-0.5);
/*
 7)
 Noun:		sequencer
 action 1:	starts the playback
 action 2:	advances step
 action 3:	goes to desired step
 */
	sequencer.play();
	sequencer.advance();
	sequencer.goToStep(15);
/*
 8)
 Noun:		sampler
 action 1:	records a sample to buffer
 action 2:	plays a sample from memory
 action 3:	pitches down the sample
 */
	sampler.record();
	sampler.play(3); //sample indexed at 3 
	sampler.changePitch(12) //semitones
/*
 9)
 Noun:		tree
 action 1:	falls in the forest
 action 2:	has no observers
 action 3:	sparks phylosophical discussions
 */
	tree.fall();
	tree.hasObservers(false);
	tree.makesASound((opinion) ? true : false);
/*
 10)
 Noun:		razvan
 action 1:	drinks water
 action 2:	brushes teeth
 action 3:	sleeps
 */
	razvan.drink(water);
	razvan.brushTeeth(2 * 60000); //millis
	razvan.sleep(8 * hour2millis);
#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
