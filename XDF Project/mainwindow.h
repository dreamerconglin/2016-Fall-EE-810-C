#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QString>
#include <QMainWindow>
#include <string>

#include "image.h"
#include "pdfview.h"
#include "epubview.h"

static const int NoOpenFile = 1;
static const int HaveOpenFile = 2;
static const int NoState = 0;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QString s2q(const std::string &s);

    std::string q2s(const QString &s);
private slots:

    void on_actionOpen_file_triggered();

    void on_actionSave_as_triggered();

    void on_actionSave_file_triggered();

    void on_actionNew_file_triggered();

    void on_actionFont_triggered();

    void on_actionColor_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionImport_image_triggered();

    void on_actionDigital_signature_triggered();

    void on_actionExport_PDF_triggered();

    void on_actionPrint_triggered();

    void on_actionImage_triggered();

    //void on_pushButton_testfor_image_clicked();

    void on_actionImport_PDF_triggered();

    void on_actionImport_ePUB_triggered();

private:

    Ui::MainWindow *ui;
    QString fileName;
    QString imageName;
    QString PDFName;
    QString copy;
    int exist_Signture=0;
    std::string Signture[10][2];
    static int fileState;

    //test
    int row=0;
    int pos=0;

};
#endif // MAINWINDOW_H
