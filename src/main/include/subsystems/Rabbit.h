/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019-2020 FRC Team 5308. All Rights Reserved.                */
/* Author: Cetian Liu                                                          */                                                  */
/* Filename: Rabbit.h                                               */
/* Project: Allen-Test-V2                                                    */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>

#include <ctre/Phoenix.h>
#include <rev/CANSparkMax.h>
#include <rev/CANEncoder.h>
#include <rev/CANSparkMaxLowLevel.h>
#include <frc/WPILib.h>


class Rabbit : public frc::Subsystem {
 public:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities

  /*Rabit: */
  static std::shared_ptr<frc::Joystick> JOY_rab;

  static std::shared_ptr<WPI_TalonSRX> TAL_rab;
  static std::shared_ptr<rev::CANSparkMax> CSM_rab;
  
  static std::shared_ptr<rev::CANEncoder> CE_rab;

  static std::shared_ptr<frc::Solenoid> SOL_rab;

  /*Deanck*/
  static std::shared_ptr<frc::Solenoid> SOL_delift;
  static std::shared_ptr<frc::DoubleSolenoid> SOL_deDick;


 public:
  Rabbit();
  void InitDefaultCommand() override;
  void Periodic() override;
};
