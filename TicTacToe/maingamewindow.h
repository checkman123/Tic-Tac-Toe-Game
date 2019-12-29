#ifndef MAINGAMEWINDOW_H
#define MAINGAMEWINDOW_H

#include <QMainWindow>
#include <gamemodel.h>

namespace Ui {
class MainGameWindow;
}

class MainGameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainGameWindow(QWidget *parent = nullptr);
    ~MainGameWindow();




private slots:
    void on_exitPushButton_clicked();

    void on_board00_clicked();

    void on_board01_clicked();

    void on_board02_clicked();

    void on_board10_clicked();

    void on_board11_clicked();

    void on_board12_clicked();

    void on_board20_clicked();

    void on_board21_clicked();

    void on_board22_clicked();

    void on_resetPushButton_clicked();

private:
    Ui::MainGameWindow *ui;
    GameModel *gameModel;

    void updateScreen();
};

#endif // MAINGAMEWINDOW_H
