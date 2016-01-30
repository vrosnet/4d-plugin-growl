/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : Growl II
 #	author : miyako
 #	2013/10/01
 #
 # --------------------------------------------------------------------------------*/

#include "4DPluginAPI.h"

#import <Growl/Growl.h>
#import "listener.h"

// --- 1.3 SDK
void Growl_Set_notification_method(sLONG_PTR *pResult, PackagePtr pParams);
void Growl_SET_MIST_ENABLED(sLONG_PTR *pResult, PackagePtr pParams);
void Growl_Get_mist_enabled(sLONG_PTR *pResult, PackagePtr pParams);
void Growl_POST_NOTIFICATION(sLONG_PTR *pResult, PackagePtr pParams);
void Growl_Get_notification_method(sLONG_PTR *pResult, PackagePtr pParams);

void listenerLoopExecuteMethodByID();
void listenerLoopFinish();
void listenerLoop();