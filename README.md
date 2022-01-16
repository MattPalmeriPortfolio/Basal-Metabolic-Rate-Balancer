# Basal-Metabolic-Rate-Balancer

Contents
---------------------
* File Contents
* Introduction
* Algorithm
* Requirements

## File Contents
	
	Basal_Metabolic_Balancing_Calculator.cpp (program file containing code)

## Introduction
Book practice project from Problem Solving With C++ Chapter 4. Project 5.
Program determines the number of calories a person needs to consume of their favorite food to balance out their basal metabolic rate combined with a period of physical activity. Demonstrates ability to take input, execute math formulas, and output results in c++.

Written using Microsoft Visual Studio. 

## Algorithm
    1. take input from user
			1a. person's weight in pounds
			1b. estimate for intensity of physical activity
				1ba. output activity-intensity chart to guide user on relative intensity of their exercise
			1c. length of physical activity in minutes
			1d. calories per serving of user's favorite food
		2. calculate basal metabolic rate
			2a. 70 * (weight / 2.2)^0.756
		3. calculate physical activity calories
			3a. 0.0385 * intensity * weight * length of exercise
		4. calculate the # of servings per day they must eat of their favorite food
			4a. basal metabolic cost + physical activity cost / (calories per serving - (calories per serving * 0.1))
		5. output the servings per day to user

## Requirements
No requirements or modules needed for running this program. 
