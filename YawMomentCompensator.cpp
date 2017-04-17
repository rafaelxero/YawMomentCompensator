// -*- C++ -*-
/*!
 * @file  YawMomentCompensator.cpp * @brief Yaw Moment Compensator component * $Date$ 
 *
 * $Id$ 
 */
#include "YawMomentCompensator.h"

// Module specification
// <rtc-template block="module_spec">
static const char* yawmomentcompensator_spec[] =
  {
    "implementation_id", "YawMomentCompensator",
    "type_name",         "YawMomentCompensator",
    "description",       "Yaw Moment Compensator component",
    "version",           "0.1",
    "vendor",            "AIST",
    "category",          "example",
    "activity_type",     "SPORADIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    // Configuration variables
    ""
  };
// </rtc-template>

YawMomentCompensator::YawMomentCompensator(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_qRefIn("qRef", m_qRef),
    m_basePosIn("basePos", m_basePos),
    m_baseRpyIn("baseRpy", m_baseRpy),
    m_forceRIn("forceR", m_forceR),
    m_forceLIn("forceL", m_forceL),
    m_qModOut("qMod", m_qMod),
    m_tauZOut("tauZ", m_tauZ),
    m_zmpOut("zmp", m_zmp)

    // </rtc-template>
{
}

YawMomentCompensator::~YawMomentCompensator()
{
}


RTC::ReturnCode_t YawMomentCompensator::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("qRef", m_qRefIn);
  addInPort("basePos", m_basePosIn);
  addInPort("baseRpy", m_baseRpyIn);
  addInPort("forceR", m_forceRIn);
  addInPort("forceL", m_forceLIn);

  // Set OutPort buffer
  addOutPort("qMod", m_qModOut);
  addOutPort("tauZ", m_tauZOut);
  addOutPort("zmp", m_zmpOut);

  // Set service provider to Ports

  // Set service consumers to Ports

  // Set CORBA Service Ports

  // </rtc-template>

  // <rtc-template block="bind_config">
  // Bind variables and configuration variable

  // </rtc-template>
  return RTC::RTC_OK;
}


/*
RTC::ReturnCode_t YawMomentCompensator::onFinalize()
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t YawMomentCompensator::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t YawMomentCompensator::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t YawMomentCompensator::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t YawMomentCompensator::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t YawMomentCompensator::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t YawMomentCompensator::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t YawMomentCompensator::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t YawMomentCompensator::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t YawMomentCompensator::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t YawMomentCompensator::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


extern "C"
{
 
  void YawMomentCompensatorInit(RTC::Manager* manager)
  {
    coil::Properties profile(yawmomentcompensator_spec);
    manager->registerFactory(profile,
                             RTC::Create<YawMomentCompensator>,
                             RTC::Delete<YawMomentCompensator>);
  }
  
};



