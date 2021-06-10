Fire-Alarm-System

This Project is an emebeded system (arduino project) course which holds the source code for the operation of the system.  

Problem Definition
This system checks for the presence of naked flame or smoke in an enclosed space. In the absence of a naked fire or smoke, a message is prompted to the user signifying a safe environment, whereas an an alarm is sounded and a red led emits light as well as a message is prompted to the user in the presence of naked flame.

 Assumptions
Below are some hypothetical statements we have made in order to ensure the simplest design and ensuring low cost of acquring both the hardware and software;

1. The flame sensors come with a built ADC, which gives high output(1) when a naked flame or smoke is detected, whereas giving a low output(0) when no naked flame or smoke is detected.
2.When both output give a high output, an abnormal condition is considered.
3.We have 1 LED to simulation and 1 alarm(buzzer).
4. When only one of the sensors gives a high output, a dangerous condition is considered.

Contributing
Pull requests are welcome. Please open an issue first to discuss what you would like to change, for major changes.


Conclusion
The file the developer should look at first is the fire_alarm_system.ino file which is an API file.

