#ifndef INFOTAINMENT_H
#define INFOTAINMENT_H


class Infotainment
{

private:

    int speed = 0;
    int lastSpeed = 0;
    int throttle = 0;

public:
    Infotainment();
    int getSpeed();
    void setSpeed(int value);
    int getThrottle();
    void setThrottle(int value);
    int getLastSpeed();
    void setLastSpeed(int value);
};

#endif // INFOTAINMENT_H
