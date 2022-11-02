#include "mainwindow.h"
#include "TextParser.cpp"
#include "WriteFile.h"

int main(int argc, char *argv[])
{
    TextParser parser;
    QApplication a(argc, argv);
    myStd::vector<Shape*> mainShape;
    mainShape = parser.parse("shapes.txt");

    MainWindow w;
    w.loadShape(mainShape);
    w.show();

    a.exec();
    WriteFile writer;
    if (mainShape.size() > 1)
        selectionSort(mainShape.begin(),mainShape.end(),Cmp_by_id());
    writer.write("shapes.txt", mainShape);
    return 0;
}
