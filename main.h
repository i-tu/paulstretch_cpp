/*
   Copyright (C) 2006-2011 Nasca Octavian Paul
Author: Nasca Octavian Paul

This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License 
as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License (version 2) for more details.

You should have received a copy of the GNU General Public License (version 2)
along with this program; if not, write to the Free Software Foundation,
Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
*/

#ifndef MAIN_H
#define MAIN_H

#include "globals.h"
#include "Input/AInputS.h"
#include "Output/AOutputS.h"
#include "ProcessedStretch.h"
#include "Player.h"
#include "JAaudiooutput.h"
#include "PAaudiooutput.h"


    struct {
      REALTYPE render_percent;
      bool cancel_render;
    }info;

    ProcessParameters ppar;
    bool wav32bit;
    void update_process_parameters();//pt. player
    struct{
      double fftsize_s,stretch_s;
      int mode_s;
    }gui_sliders;    
    FFTWindow window_type;
    REALTYPE volume;

    int get_optimized_updown(int n,bool up);
    int optimizebufsize(int bufsize);
    std::string getfftsizestr(int fftsize);

    struct {
      int bufsize;
      double stretch;
      double onset_detection_sensitivity;
    }process;

    struct {
      int samplerate;
      int nsamples;
      std::string filename;
      FILE_TYPE intype;
    }wavinfo;//input

    REALTYPE seek_pos;


#endif

