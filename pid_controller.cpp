/**********************************************
 * Self-Driving Car Nano-degree - Udacity
 *  Created on: December 11, 2020
 *      Author: Mathilde Badoual
 **********************************************/

#include "pid_controller.h"
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kpi, double Kii, double Kdi, double output_lim_maxi, double output_lim_mini) {
   /**
    TODO: Initialize PID coefficients (and errors, if needed)
   **/
   Kp = Kpi;
   Ki = Kii;
   Kd = Kdi;
   output_lim_max = output_lim_maxi;
   output_lim_min = output_lim_mini;
}


void PID::UpdateError(double cte) {
   /**
    TODO: Update PID errors based on cte.
   **/
   p_cte = cte;
   i_cte += cte*delta_time;
   d_cte = (cte - p_cte)/delta_time;
   
}

double PID::TotalError() {
   /**
    TODO: Calculate and return the total error
    * The code should return a value in the interval [output_lim_mini, output_lim_maxi]
   */
    double control;
    control = (p_cte * Kp) + (i_cte * Ki) + (d_cte * Kd);
    if (control > output_lim_max)
    {
      control = output_lim_max;
    }
    else if (control < output_lim_min)
    {
      control = output_lim_min;
    }
    return control;
}

double PID::UpdateDeltaTime(double new_delta_time) {
   /**
    TODO: Update the delta time with new value
   */
   delta_time = new_delta_time;
   return delta_time;
}