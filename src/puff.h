#pragma once

#include <QWidget>
#include <QSvgRenderer>

class Puff : public QWidget
{
  Q_OBJECT  

  public:
    Puff(QWidget *parent = 0);

  protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);

  private:
    QPoint p;
    QSvgRenderer rdr;
};

