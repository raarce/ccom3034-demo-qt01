#include "movingpushbutton.h"

MovingPushButton::MovingPushButton(const QString& text,
                                   QWidget *parent,
                                   int areaWidth, int areaHeight) :
    QPushButton(text, parent), areaWidth(areaWidth), areaHeight(areaHeight)
{
}
