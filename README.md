# Control-and-Trajectory-Tracking-for-Autonomous-Vehicles
## Steps :
1- Build the PID controller object

2- PID controller for throttle

3- PID controller for steer

4- Evaluate the PID efficiency
## PID


![Uploading GIF.gif…]()

![Graph1](https://github.com/AhmedMahmoudAhmedMahmoud/Control-and-Trajectory-Tracking-for-Autonomous-Vehicles/assets/130584964/285c2b47-65a0-4d07-853d-5a26d39f5607)
![Graph2](https://github.com/AhmedMahmoudAhmedMahmoud/Control-and-Trajectory-Tracking-for-Autonomous-Vehicles/assets/130584964/f90f2110-b572-481a-9df2-32cecfd9d495)

## Add the plots to your report and explain them :
The vehicle's steering control data is shown in the first figure, indicating a steep oscillation as the vehicle transitions from one side to the other. The PID values are selected in a way that the proportional gain is given the largest weight, followed by the derivative gain to keep the steering response values within reasonable limits. The integral gain is set to penalize the cumulative uncorrected steering error in a consecutive time interval

The second graph depicts the throttle control data collected during the test. The controller's error quickly reaches a steady state after an initial rise time, and it can be seen that the controller remained at a high value for most of the test. Nonetheless, the graph shows that the throttle error gradually decreases over time. This indicates that the throttle controller is better tuned than the steering controller.

## What is the effect of the PID according to the plots, how each part of the PID affects the control command?
The effect of the proportional term is directly proportional to the magnitude of the error. This means that larger errors result in larger control commands, particularly at the point of peak error in the steering. On the other hand, the integral term increases over time as the error persists, while the derivative effect is proportional to the rate of change of the error. This means that rapid changes in the error result in increased derivative effect, which can help reduce overshoot and ringing.

## How would you design a way to automatically tune the PID parameters?
The gain values of a controller are crucial for its behavior and performance. The proportional gain amplifies the current error signal and determines the controller's aggressiveness in responding to it, with a high value possibly leading to overshooting and instability. The integral gain determines how the controller responds to accumulated error over time, eliminating steady-state error, and a high value can cause instability and oscillation. The derivative gain reduces overshoot and oscillation by responding to the rate of change of the error and a high value can cause instability and overshooting.

## How would you design a way to automatically tune the PID parameters?
Different methods can be used to tune PID controllers for optimal performance. One common method is the Ziegler-Nichols method, which involves adjusting the gains of the controller to meet specific performance criteria. Another approach is model-based tuning, which uses a mathematical model of the system to simulate its response to different control inputs and adjust the controller's parameters accordingly.

## (Optional) What would you do to improve the PID controller?
The PID controller is a widely used control system that is simple and easy to implement in many systems. However, tuning the PID controller to achieve optimal control performance can be a challenging task that requires expertise and experience. There are different methods for tuning the PID controller, including the Ziegler-Nichols method and model-based tuning.
