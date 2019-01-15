#pragma once
#include <list>
#include <string>
#include "main.h"



class AutonBuilder{
public:
  AutonBuilder(){
    ScreenInit();
  }
  enum MotorGroups{RightDrive, LeftDrive, MotorGroup1, MotorGroup2, MotorGroup3, MotorGroup4, MotorGroup5, MotorGroup6};
  enum MovementTypes {FORWARD, REVERSE, RIGHT, LEFT, MOVE, MOVE_RELITIVE, MOVE_ABOSLUTE};
  void AddMotor(MotorGroups group, pros::Motor motor);
  void AddMovement(MovementTypes movement, float Distants);
  void AddMovement(MovementTypes movement, float Distants, int delay);
private:
  void ScreenInit();
  struct m_Movement{MovementTypes move; float value; int delay;};
  struct m_Motor{MotorGroups group; pros::Motor motor;};
  int m_defaltDelay=150;
  std::list<m_Movement> m_Movements;
  std::list<m_Motor> m_Motors;
};
