##Polymorphism

From Textbook -

<p>
Object-oriented programming languages support polymorphism, which is characterized by the phrase
"one interface, multiple methods." In simple terms, polymorphism is the attribute that allows one
interface to control access to a general class of actions. The specific action selected is
determined by the exact nature of the situation.
</p>

<p>
To put things in perspective here the interface could be a function-name and the specific action selected
means selecting appropriate function, determined by the exact nature of the situation meaning - based on user inputs
</p>

<p>
Real Time Example - Thermostat - We may have our heating system run by coal, gas or electricity but the thermostat is common,
we set appropriate temperature and thermostat does the needy based on what the heating system is running.
<You can think of some more examples and contribute here>
</p>

<p>
Coding Example - Similarly we have to add two integers a and b and we are not sure if they are integers, float, double or characters.
Naive way to create a code for this scenario would be creating individual functions for each data type and check the type of use input
and run the appropriate fucntion

addInt(int a , int b)
addFloat(float a, float b)
.
.
.

Instead of that hassle we can implement multiple methods with single name and let the compiler pick the right function based on the user input
add(int a, int b)
add(float a, float b)
.
.
.

</p>
<p>
Compile-time Polymorphism - Imlemented using Function Overloading

Run-time Polymorphism - Implemented using Function Over-riding
