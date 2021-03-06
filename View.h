#ifdef VIEW_H
#define VIEW_H

#include"Model.h"
#include"Controller.h"

class View{
    private:
        Controller *controller;
        Model *model;
    public:
        View(); //Initialize: Make an UI thread
        ~View();
    //For controller
        int setController(Controller *pController);
    //For model
        int setModel(Model *pModel);
    //For this

        int update();
};

#endif
