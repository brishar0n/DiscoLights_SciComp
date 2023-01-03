# ┌(・。・)┘♪ Disco Lights System using Finite State Machine (FSM)

## What exactly is a 'Finite State Machine'? 💭
Now, a Finite State Machine (FSM for short) is a system where different inputs can alter the changes in each state present. Other examples of FSM include a ticket machine, an alarm clock, and many more.

#

## Components of the FSM ⚙️
Few things to note before I elaborate further on this FSM, this system won't remember change and the user can't request money back.

### States
There are 4 states in this case:

- State A: Disco lights are off, button isn't pressed/off (Basically the idle and initial stage)
- State B: Disco lights are on, button is pressed
- State C: Disco lights are on, button isn't pressed
- State D: Disco lights are off, button is pressed

To further elaborate on the process of the Disco Lights utilizing FSM, here's a state diagram, along with the transition table and karnaugh maps, I put together:

![State-Diagram](images/State-Diagram.png)

### Transition Table
![State-Table](images/State-Table.png)

### Karnaugh Maps and Combinational Boolean Equations
These combinational boolean equations will come in handy in writing the code for the mylib.c to jot down the possible outcomes.
![Karnaugh-Maps](images/Karnaugh-Maps.png)

#

## Results & Visualisation:
![1](images/1.png)
![2](images/2.png)
![3](images/3.png)

its party party time