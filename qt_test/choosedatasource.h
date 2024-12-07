#ifndef CHOOSEDATASOURCE_H
#define CHOOSEDATASOURCE_H
#include <QListWidget>
#include <QDialog>
#include <QVBoxLayout>
#include <QWidget>
#include "enternumberofbooks.h"
#include "choosesortingmethod.h"
#include "QuickSort.h"
//#include "MergeSorter.h"
#include "BubbleSort.h"
#include "HeapSort.h"
#include "sorteddatadisplay.h"
#include <QFileDialog>
//#include "persongenerator.h"
#include "Book.h"
#include "Generator.h"

namespace Ui {
class ChooseDataSource;
}

class ChooseDataSource : public QDialog
{
    Q_OBJECT
public:
    explicit ChooseDataSource(QWidget *parent = nullptr);
    ~ChooseDataSource();
    void updateDataDisplay(ArraySequence<BookCard>* seq);
private slots:
    void on_randomDataButton_clicked();
    void on_readFromFileButton_clicked();

private:
    Ui::ChooseDataSource *ui;
    EnterNumberOfPeople *enterNumberOfPeopleWindow;
    ArraySequence<BookCard> loadPeopleFromFile(const std::string& filename);
};

#endif // CHOOSEDATASOURCE_H
