#ifndef MOVINGPUSHBUTTON_H
#define MOVINGPUSHBUTTON_H

#include <QPushButton>

class MovingPushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit MovingPushButton(const QString& text = NULL,
                              QWidget *parent = 0,
                              int areaWidth = 0, int areaHeight = 0);

signals:

public slots:

private:
    int areaWidth;
    int areaHeight;
};

#endif // MOVINGPUSHBUTTON_H
