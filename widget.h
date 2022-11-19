#ifndef WIDGET_H
#define WIDGET_H

#include "QWidget"
#include "QtWidgets/qwidget.h"
#include "scene.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QScreen>
#include <QGraphicsPixmapItem>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void startGame();
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_startGameButton_clicked();

private:
    Ui::Widget *ui;
 Scene * scene{};
    void buildScene();
};
#endif // WIDGET_H
