#pragma once


class Logger{
public:
  enum Level{LevelError, LevelInfo, LevelStaceTrack};
  void Log(char* message, Level level);
};
