/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/TimedRobot.h>
#include <frc/commands/Command.h>
#include <frc/smartdashboard/SendableChooser.h>

#include <cameraserver/CameraServer.h>

#include "OI.h"
#include "subsystems/CargoIntake.h"
#include "subsystems/Drive.h"
#include "subsystems/Pneumatics.h"
#include "subsystems/Elevator.h"
#include "subsystems/Rabbit.h"
#include "subsystems/testor.h"

#include "RevDigit.h"

#include <rev/CANSparkMax.h>



class Robot : public frc::TimedRobot {
 public:
  cs::UsbCamera cam;
  static RevDigit m_revDigit;
  static OI m_oi;
  static Pneumatics pneumatics;
  static CargoIntake cargoIntake;
  static Drive drive;
  static Elevator elevator;
  static Rabbit rabbit;
  static testor Testor;
  static frc::Joystick pilot;

  void RobotInit() override;
  void RobotPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;

 private:

};
