//========================================================================
//  This software is free: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License Version 3,
//  as published by the Free Software Foundation.
//
//  This software is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  Version 3 in the file COPYING that came with this distribution.
//  If not, see <http://www.gnu.org/licenses/>.
//========================================================================
/*!
  \file    vis_util.h
  \brief   Vision support functions
  \author  James R. Bruce, (C) 1999-2002
*/
//========================================================================

#ifndef __VIS_UTIL_H__
#define __VIS_UTIL_H__

#include <math.h>

inline double gaussian(double x)
{
  return(exp(-(x*x)/2));
}

inline double gaussian(double x,double var)
{
  return(exp(x*x / (-2*var)));
}

inline double GaussianVsUniform(double x,double var,double u)
{
  double g = gaussian(x,var);
  return(g / (g + u));
}

template <class item>
void add_bucket(item *bucket,int max,item &it)
{
  int i;

  if(it.conf < bucket[max-1].conf) return;

  i = max-2;
  while(i>=0 && it.conf>bucket[i].conf){
    bucket[i+1] = bucket[i];
    i--;
  }
  bucket[i+1] = it;
}

#endif
