/**
 * @file UserModuleState enum classss Interface
 *
 * These are the possible states in which a UserModule can be found. 
 * These states are orthogonal to the states or transitions defined by CCM. 
 * UserModeuleStates are a way for whatever controls and owns the module to know what is going on in the threads managed by the module.
 *
 * This is part of the DUNE DAQ Application Framework, copyright 2020.
 * Licensing/copyright details are in the COPYING file that you should have received with this code.
 */

#ifndef app_framework_base_UserModules_UserModuleState_hh
#define app_framework_base_UserModules_UserModuleState_hh


namespace appframework {
/**
 * @brief The UserModuleState class an enum 
 *
 * These states should report the status of the internal Module's threads from outside
 * 
 */
enum struct UserModuleState : int16_t {
    kError = -1 , 
    kUnknown = 0 ,
    kOk
};

}  // namespace appframework

#endif  // app_framework_base_UserModules_UserModuleState_hh
