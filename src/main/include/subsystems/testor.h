/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include <rev/CANSparkMax.h>
#include <rev/CANEncoder.h>

class testor : public frc::Subsystem {
 private:
 static std::shared_ptr<rev::CANSparkMax> CSM_NEO_test;
 static std::shared_ptr<rev::CANEncoder> CE_NEO_test;

 public:
  testor();
  void InitDefaultCommand() override;
  void test_default();
};
