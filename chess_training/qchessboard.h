#ifndef QCHESSBOARD_H
#define QCHESSBOARD_H

#include <QtCore>
#include <QtGui>
#include <QtWidgets>


const int INIT_X_POS = 10;
const int INIT_Y_POS = 10;

class QChessBoard
{
public:
    QChessBoard(QWidget *parent_window);


private:
    void InitChessboard();
    QFrame *squares[64];
    QWidget *parent_window;
    int x_pos, y_pos;

private:

};

#endif // QCHESSBOARD_H
