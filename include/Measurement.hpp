#ifndef MEASUREMENT_HPP
#define MEASUREMENT_HPP

#include <math.h>
#include <iostream>
#include <chrono>
#include <ctime>
#include <list>
#include <cassert>
#include "PointCloud.hpp"

using namespace std::chrono;

class Measure {


public:
  Measure();
  ~Measure();

  // Time Measurement Functions
  time_point<system_clock> createTimeStamp();
  // void printTimeStamp(time_point<system_clock>);
  std::time_t calcTimeSpan(time_point<system_clock>, time_point<system_clock>);
  void printTimeSpan(std::time_t);
  void startWatch();
  std::time_t stopWatch();

  // PointCloud Analytics Functions
  float meanSquaredErrorPC(PointCloud<Vec<float>, Vec<float>>, PointCloud<Vec<float>, Vec<float>>);

private:
time_point<system_clock> m_start_time;
};


#endif // #ifndef  MEASUREMENT_HPP
