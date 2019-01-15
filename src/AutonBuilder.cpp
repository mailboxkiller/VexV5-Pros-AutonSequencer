#include "AutonBuilder.h"
#include "logger.h"

Logger logger;

void AutonBuilder::ScreenInit(){
  
}

void AutonBuilder::AddMotor(MotorGroups group, pros::Motor motor){
  m_Motors.push_back({group, motor});
  logger.Log("added Motor", logger.LevelInfo);
}

void AutonBuilder::AddMovement(MovementTypes movement, float Distants){
  m_Movements.push_back({movement, Distants, m_defaltDelay});
  logger.Log("added movement", logger.LevelInfo);
}

void AutonBuilder::AddMovement(MovementTypes movement, float Distants, int delay){
  m_Movements.push_back({movement, Distants, delay});
  logger.Log("added movement", logger.LevelInfo);
}
