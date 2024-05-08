#ifndef __STARTUP_PRESENTER_H
#define __STARTUP_PRESENTER_H

#include "StartUpView.h"
#include "StartUpModel.h"

namespace Page
{

class Startup : public PageBase
{
public:

public:
    Startup();
    virtual ~Startup();

    virtual void onCustomAttrConfig();//自定义的属性配置
    virtual void onViewLoad();
    virtual void onViewDidLoad();
    virtual void onViewWillAppear();//  页面简要展示时使用
    virtual void onViewDidAppear();// 页面已经展示时调用
    virtual void onViewWillDisappear();// 将要消失
    virtual void onViewDidDisappear();// 已经消失
    virtual void onViewDidUnload();

private:
    static void onTimer(lv_timer_t* timer);
    static void onEvent(lv_event_t* event);
    StartupView View;
    StartupModel Model;
};

}

#endif
