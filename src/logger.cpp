#include <iostream>
#include "logger.h"


void Logger::Log(char* message, Level level){
  switch (level) {
    case LevelInfo:
      std::cout << "[INFO]:" << message << "\n";
      break;
    case LevelError:
      std::cout << "[Error]:" << message << "\n";
      break;
    case LevelStaceTrack:
      std::cout << "[StaceTrack]:" << message << "\n";
      break;
  }
}
