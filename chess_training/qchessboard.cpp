#include "qchessboard.h"
#include <QtGui>
#include <QtCore>
#include <QtWidgets>

QChessBoard::QChessBoard(QWidget *main_window)
{
    parent_window = main_window;

    y_pos = INIT_Y_POS;
    x_pos = INIT_X_POS;

    InitChessboard();
}

/**
 * @fn void QChessBoard::InitChessboard
 * @brief Create chessboard
 * @param void
 * @return void
 */
void QChessBoard::InitChessboard()
{
    int square_size = 80;
    int square_color = 0xFF;

    for(int i = 0; i < 64; i++)
    {
        squares[i] = new QFrame(parent_window);

        if(i % 8 == 0)
        {
            if(i != 0)
            {
                y_pos += square_size;       // NEXT LINE
                x_pos = INIT_X_POS;         // RESTART COLUMN
            }
        }
        else
        {
            x_pos += square_size;        // NEXT COLUMN
            square_color ^= 0xFF;
        }
        squares[i]->setGeometry(x_pos, y_pos, square_size, square_size);

        QPalette palette = squares[i]->palette();

        palette.setColor(squares[i]->backgroundRole(), QColor(square_color, square_color, square_color));


        squares[i]->setLineWidth(0);
        squares[i]->setPalette(palette);
        squares[i]->setAutoFillBackground(true);
        squares[i]->show();
        squares[i]->setFrameShape(QFrame::StyledPanel);
        squares[i]->setFrameShadow(QFrame::Raised);
    }
}
