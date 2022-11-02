#include "mainmenu.h"
#include "ui_mainmenu.h"
#include<QKeyEvent>
#include"Vector.h"

string mainmenuShape[] = {"NoShape", "Line", "Polyline", "Polygon", "Rectangle", "Square", "Ellipse", "Circle", "Text"};

mainmenu::mainmenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainmenu)
{
    ui->setupUi(this);
    pEdit = new EditScreen();
    pEditShape = new editshape();
    pEditText = new EditText();
    pTestimonial = new Testimonials();
    pContact = new Contact();
}

mainmenu::~mainmenu()
{
    delete ui;
}
void mainmenu::loadShape(myStd::vector<Shape *> &source)
{
    menuShape = &source;
    ui->Canvas->loadShape(source);
    pEditShape->loadShape(source);
}

void mainmenu::setSelected(int i)
{
    selected = i;
    update();

}

void mainmenu::loadTreeWidget(myStd::vector<Shape *> &source, int index)
{
   ui->treeWidget->clear();
   if (source.size() > 0)
   {
       QTreeWidgetItem* pTopItem = new QTreeWidgetItem(ui->treeWidget);
       QString insertedString = "ID: " + QString::fromStdString(std::to_string(source[index]->getID()));
       insertedString += ", Type: ";
       insertedString += QString::fromStdString(mainmenuShape[source[index]->getShape()]);
       pTopItem->setText(0,insertedString);



       QString positionString = "(" + QString::number(source[index]->getInitialPoint().x()) + "," + QString::number(source[index]->getInitialPoint().y()) + ")";
       QTreeWidgetItem* pPosition = new QTreeWidgetItem(pTopItem,QStringList() << "Position" << positionString);

       QTreeWidgetItem* pX = new QTreeWidgetItem(pPosition, QStringList() << "X" << QString::number(source[index]->getInitialPoint().x()));
       QTreeWidgetItem* py = new QTreeWidgetItem(pPosition, QStringList() << "Y" << QString::number(source[index]->getInitialPoint().y()));

       QTreeWidgetItem* pShape = new QTreeWidgetItem(pTopItem,QStringList() << QString::fromStdString(mainmenuShape[source[index]->getShape()]));

       switch(source[index]->getShape())
       {
       case line:
       {
           QTreeWidgetItem* pEndPointX = new QTreeWidgetItem(pShape, QStringList() << "X" << QString::number(static_cast<Line*>(source[index])->getEndPoint().x()));
           QTreeWidgetItem* pEndPointY = new QTreeWidgetItem(pShape, QStringList() << "Y" << QString::number(static_cast<Line*>(source[index])->getEndPoint().y()));
           break;
       }
       case polyline:
       {
           for (int i = 0; i < static_cast<Polyline*>(source[index])->getPoints().size();i++)
           {
               QString xOfi = "X[" + QString::number(i) + "]";
               QString yOfi = "Y[" + QString::number(i) + "]";

               QTreeWidgetItem* pXPoints = new QTreeWidgetItem(pShape, QStringList() << xOfi  << QString::number(static_cast<Polyline*>(source[index])->getPoints()[i].x()));
               QTreeWidgetItem* pYPoints = new QTreeWidgetItem(pShape, QStringList() << yOfi << QString::number(static_cast<Polyline*>(source[index])->getPoints()[i].y()));
           }
           break;
       }
       case polygon:
       {
           for (int i = 0; i < static_cast<Polygon*>(source[index])->getPoints().size();i++)
           {
               QString xOfi = "X[" + QString::number(i) + "]";
               QString yOfi = "Y[" + QString::number(i) + "]";

               QTreeWidgetItem* pXPoints = new QTreeWidgetItem(pShape, QStringList() << xOfi  << QString::number(static_cast<Polygon*>(source[index])->getPoints()[i].x()));
               QTreeWidgetItem* pYPoints = new QTreeWidgetItem(pShape, QStringList() << yOfi << QString::number(static_cast<Polygon*>(source[index])->getPoints()[i].y()));
           }
           break;
       }
       case rectangle:
       {
           QTreeWidgetItem* pLength = new QTreeWidgetItem(pShape, QStringList() << "Length" << QString::number(static_cast<Rectangle*>(source[index])->getLength()));
           QTreeWidgetItem* pWidth = new QTreeWidgetItem(pShape, QStringList() << "Width" << QString::number(static_cast<Rectangle*>(source[index])->getWidth()));
           break;
       }
       case square:
       {
           QTreeWidgetItem* pLength = new QTreeWidgetItem(pShape, QStringList() << "Length" << QString::number(static_cast<Square*>(source[index])->getLength()));
           break;
       }
       case ellipse:
       {
           QTreeWidgetItem* pMajor = new QTreeWidgetItem(pShape, QStringList() << "Major Axis" << QString::number(static_cast<Ellipse*>(source[index])->getMajorAxis()));
           QTreeWidgetItem* pMinor = new QTreeWidgetItem(pShape, QStringList() << "Minor Axis" << QString::number(static_cast<Ellipse*>(source[index])->getMinorAxis()));
           break;
       }
       case circle:
       {
           QTreeWidgetItem* pRadius = new QTreeWidgetItem(pShape, QStringList() << "Radius" << QString::number(static_cast<Circle*>(source[index])->getRadius()));
           break;
       }
        case text:
       {
           QTreeWidgetItem* pLength = new QTreeWidgetItem(pShape, QStringList() << "Length" << QString::number(static_cast<Text*>(source[index])->getLength()));
           QTreeWidgetItem* pWidth = new QTreeWidgetItem(pShape, QStringList() << "Width" << QString::number(static_cast<Text*>(source[index])->getWidth()));
           QTreeWidgetItem* pString = new QTreeWidgetItem(pShape, QStringList() << "String" << static_cast<Text*>(source[index])->getString());

           QColor tc = static_cast<Text*>(source[index])->getColor();
           QString tColor;
           {//Compare color since cannot use switch for non int type
               if  (tc == QColor(Qt::white))
                   tColor = "white";
               else if (tc == QColor(Qt::black))
                   tColor = "black";
               else if (tc == QColor(Qt::red))
                   tColor = "red";
               else if (tc == QColor("Green")|| (tc == QColor(Qt::green)))
                   tColor = "green";
               else if (tc == QColor(Qt::blue))
                   tColor = "blue";
               else if (tc == QColor(Qt::cyan))
                   tColor = "cyan";
               else if (tc == QColor(Qt::magenta))
                   tColor = "magenta";
               else if (tc == QColor(Qt::yellow))
                   tColor = "yellow";
               else if (tc == QColor(Qt::gray))
                   tColor = "gray";
           }
           QTreeWidgetItem* pTextColor = new QTreeWidgetItem(pShape, QStringList() << "Color" << tColor);

           QString tAlignment;
           switch(static_cast<Text*>(source[index])->getAlignment())
           {
               case Qt::AlignLeft:
               {
                   tAlignment = "AlignLeft";
                   break;
               }
               case Qt::AlignRight:
               {
                   tAlignment = "AlignRight";
                   break;
               }
               case Qt::AlignTop:
               {
                   tAlignment = "AlignTop";
                   break;
               }
               case Qt::AlignBottom:
               {
                   tAlignment = "AlignBottom";
                   break;
               }
               case Qt::AlignCenter:
               {
                   tAlignment = "AlignCenter";
                   break;
               }

               default:
                   break;
           }
           QTreeWidgetItem* pAlign = new QTreeWidgetItem(pShape, QStringList() << "Alignment" << tAlignment);
           QTreeWidgetItem* pPointSize = new QTreeWidgetItem(pShape, QStringList() << "Point Size" << QString::number(static_cast<Text*>(source[index])->getPointSize()));
           QTreeWidgetItem* pFamily = new QTreeWidgetItem(pShape, QStringList() << "Font Family" << static_cast<Text*>(source[index])->getFamily());

           QString tFontStyle;
           switch(static_cast<Text*>(source[index])->getStyle())
           {
               case QFont::StyleNormal:
               {
                   tFontStyle = "StyleNormal";
                   break;
               }
               case QFont::StyleItalic:
               {
                   tFontStyle = "StyleItalic";
                   break;
               }
               case QFont::StyleOblique:
               {
                   tFontStyle = "StyleOblique";
                   break;
               }
               default:
                   break;
           }
           QTreeWidgetItem* pFontStyle = new QTreeWidgetItem(pShape, QStringList() << "Font Style" << tFontStyle);

           QString tFontWeight;
           switch(static_cast<Text*>(source[index])->getWeight())
           {
               case QFont::Thin:
               {
                   tFontWeight = "Thin";
                   break;
               }
               case QFont::Light:
               {
                   tFontWeight = "Light";
                   break;
               }
               case QFont::Normal:
               {
                   tFontWeight = "Normal";
                   break;
               }
               case QFont::Bold:
               {
                   tFontWeight = "Bold";
                   break;
               }
               default:
                   break;
           }
           QTreeWidgetItem* pFontWeight = new QTreeWidgetItem(pShape, QStringList() << "Font Weight" << tFontWeight);

            break;
       }
       default:
           break;
       }

       {//Pen block
           QTreeWidgetItem* pPen = new QTreeWidgetItem(pTopItem, QStringList() << "Pen");
           QString pColor;
           QColor pc = source[index]->getPen().color();
           {//Compare color since cannot use switch for non int type
               if  (pc == QColor(Qt::white))
                   pColor = "white";
               else if (pc == QColor(Qt::black))
                   pColor = "black";
               else if (pc == QColor(Qt::red))
                   pColor = "red";
               else if (pc == QColor("Green")|| (pc == QColor(Qt::green)))
                   pColor = "green";
               else if (pc == QColor(Qt::blue))
                   pColor = "blue";
               else if (pc == QColor(Qt::cyan))
                   pColor = "cyan";
               else if (pc == QColor(Qt::magenta))
                   pColor = "magenta";
               else if (pc == QColor(Qt::yellow))
                   pColor = "yellow";
               else if (pc == QColor(Qt::gray))
                   pColor = "gray";
           }
           QTreeWidgetItem* pPenColor = new QTreeWidgetItem(pPen, QStringList() << "Color" << pColor);
           QTreeWidgetItem* pPenWidth = new QTreeWidgetItem(pPen, QStringList() << "Width" << QString::number(source[index]->getPen().width()));

           QString pStyle;
           switch(source[index]->getPen().style())
           {
               case Qt::NoPen:
               {
                   pStyle = "NoPen";
                   break;
               }
               case Qt::SolidLine:
               {
                   pStyle = "SolidLine";
                   break;
               }
               case Qt::DashLine:
               {
                   pStyle = "DashLine";
                   break;
               }
               case Qt::DotLine:
               {
                   pStyle = "DotLine";
                   break;
               }
               case Qt::DashDotLine:
               {
                   pStyle = "DashDotLine";
                   break;
               }
               case Qt::DashDotDotLine:
               {
                   pStyle = "DashDotDotLine";
                   break;
               }
               default:
                   break;
           }
           QTreeWidgetItem* pPenStyle = new QTreeWidgetItem(pPen, QStringList() << "Style" << pStyle);

           QString pCapStyle;
           switch(source[index]->getPen().capStyle())
           {
               case Qt::FlatCap:
               {
                   pCapStyle = "FlatCap";
                   break;
               }
               case Qt::SquareCap:
               {
                   pCapStyle = "SquareCap";
                   break;
               }
               case Qt::RoundCap:
               {
                   pCapStyle = "RoundCap";
                   break;
               }
               default:
                   break;
           }
           QTreeWidgetItem* pPenCap = new QTreeWidgetItem(pPen, QStringList() << "Cap Style" << pCapStyle);

           QString pJoinStyle;
           switch(source[index]->getPen().joinStyle())
           {
               case Qt::MiterJoin:
               {
                   pJoinStyle = "MiterJoin";
                   break;
               }
               case Qt::BevelJoin:
               {
                   pJoinStyle = "BelvelJoin";
                   break;
               }
               case Qt::RoundJoin:
               {
                   pJoinStyle = "RoundJoin";
                   break;
               }
               default:
                   break;
           }
           QTreeWidgetItem* pPenJoin = new QTreeWidgetItem(pPen, QStringList() << "Join Style" << pJoinStyle);

        }//end pen block

        {//brush block

            QTreeWidgetItem* pBrush = new QTreeWidgetItem(pTopItem, QStringList() << "Brush");
            QString bColor;
            QColor bc = source[index]->getBrush().color();
            {//Compare color since cannot use switch for non int type
                if  (bc == QColor(Qt::white))
                    bColor = "white";
                else if (bc == QColor(Qt::black))
                    bColor = "black";
                else if (bc == QColor(Qt::red))
                    bColor = "red";
                else if (bc == QColor("Green") || (bc == QColor(Qt::green)))
                    bColor = "green";
                else if (bc == QColor(Qt::blue))
                    bColor = "blue";
                else if (bc == QColor(Qt::cyan))
                    bColor = "cyan";
                else if (bc == QColor(Qt::magenta))
                    bColor = "magenta";
                else if (bc == QColor(Qt::yellow))
                    bColor = "yellow";
                else if (bc == QColor(Qt::gray))
                    bColor = "gray";
            }
            QTreeWidgetItem* pBrushColor = new QTreeWidgetItem(pBrush, QStringList() << "Color" << bColor);

            QString bStyle;
            switch(source[index]->getBrush().style())
            {
                case Qt::SolidPattern:
                {
                    bStyle = "SolidPattern";
                    break;
                }
                case Qt::HorPattern:
                {
                    bStyle = "HorPattern";
                    break;
                }
                case Qt::VerPattern:
                {
                    bStyle = "VerPattern";
                    break;
                }
                case Qt::NoBrush:
                {
                    bStyle = "NoBrush";
                    break;
                }
                default:
                    break;
            }
            QTreeWidgetItem* pBrushStyle = new QTreeWidgetItem(pBrush, QStringList() << "Style" << bStyle);
        }//end brush block

        ui->treeWidget->expandAll();
        ui->treeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        QTreeWidgetItemIterator it(ui->treeWidget);
        while(*it)
        {
           (*it)->setFlags(Qt::ItemIsEditable|Qt::ItemIsEnabled);
            ++it;
        }
    }

}

void mainmenu::loadPropertyBar(myStd::vector<Shape *> &source)
{
    ui->comboBox->clear();
    for (int i = 0; i < source.size(); i++)
    {
        QString insertedString = "ID: " + QString::fromStdString(std::to_string(source[i]->getID()));
        insertedString += ", Type: ";
        insertedString += QString::fromStdString(mainmenuShape[source[i]->getShape()]);
        ui->comboBox->insertItem(i, insertedString);
    }
}


void mainmenu::on_comboBox_activated(int index)
{
    loadTreeWidget(*menuShape, index);
}

bool mainmenu::isEditable(int column)
{
    if (column == 1)
        return true;
    return false;
}

void mainmenu::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    bool found = false;
    if (item->parent() != nullptr)
    {
        for (int i = 0; i < menuShape->size();i++)
        {
            if (item->parent()->text(0).toStdString() == mainmenuShape[i])
            {
                found = true;
                break;
            }
        }
        if (isEditable(column))
        {
            if ((item->parent()->text(0) == "Position") || found)
                ui->treeWidget->editItem(item, column);

        }
    }
    else
        return;
}

/*void mainmenu::on_treeWidget_itemChanged(QTreeWidgetItem *item, int column)
{
     char indexChar(item->parent()->parent()->text(0).toStdString()[4]);
    int index = indexChar;

    if (item->parent()->text(0) == "Position")
    {
        if (item->text(0) == "X")
            menuShape[index]->setInitialPoint(std::stoi(item->text(1).toStdString()),menuShape[index]->getInitialPoint().y());
        else
            menuShape[index]->setInitialPoint(menuShape[index]->getInitialPoint().x(),std::stoi(item->text(1).toStdString()));
    }
    loadTreeWidget(menuShape,index);

}*/

/*void mainmenu::keyPressEvent(QKeyEvent *keyEvent)
{
    if (keyEvent->key() == Qt::Key_Enter)
    {
        ui->treeWidget->
        keyEvent->accept();
    }
}*/

void mainmenu::EditShape(const QString& x, const QString& y)
{
    if (menuShape->size() > 0)
    {
        int xValue = 0;
        int yValue = 0;
        if (x == "" || stoi(x.toStdString()) < 0 || stoi(x.toStdString()) > 950)
            xValue = (*menuShape)[ui->comboBox->currentIndex()]->getInitialPoint().x();
        else
            xValue = stoi(x.toStdString());
        if (y == "" || stoi(y.toStdString()) < 0 || stoi(y.toStdString()) > 950)
            yValue = (*menuShape)[ui->comboBox->currentIndex()]->getInitialPoint().y();
        else
            yValue = stoi(y.toStdString());

        (*menuShape)[ui->comboBox->currentIndex()]->move(xValue,yValue);
        loadPropertyBar(*menuShape);
        loadTreeWidget(*menuShape,ui->comboBox->currentIndex());
        ui->Canvas->loadShape(*menuShape);
        ui->Canvas->update();
    }
}




void mainmenu::on_Remove_clicked()
{
    if ((*menuShape).size() > 0)
        RemoveShape();
    else
        return;
}

void mainmenu::RemoveShape()
{
    if ((*menuShape).size() > 1)
    {
        Shape** deleted = menuShape->begin() + ui->comboBox->currentIndex();
        menuShape->erase(deleted);
        loadPropertyBar(*menuShape);
        loadTreeWidget(*menuShape,ui->comboBox->currentIndex());
        ui->Canvas->loadShape(*menuShape);
        ui->Canvas->update();
    }
    else
    {
        ui->comboBox->clear();
        ui->treeWidget->clear();
        menuShape->erase(menuShape->begin());
        ui->Canvas->loadShape(*menuShape);
        ui->Canvas->update();
    }
}


void mainmenu::on_Text_clicked()
{
    pEditShape->setShape(ShapeType::text);
    pEditShape->exec();
    loadPropertyBar(*menuShape);
    loadTreeWidget(*menuShape,ui->comboBox->currentIndex());
    ui->Canvas->loadShape(*menuShape);
    ui->Canvas->update();
}

void mainmenu::on_actionNew_triggered()
{
    pEditShape ->exec();
}

void mainmenu::on_contactButton_clicked()
{
    pContact->exec();
}

void mainmenu::on_Circle_clicked()
{
    pEditShape->setShape(ShapeType::circle);
    pEditShape->exec();
    loadPropertyBar(*menuShape);
    loadTreeWidget(*menuShape,ui->comboBox->currentIndex());
    ui->Canvas->loadShape(*menuShape);
    ui->Canvas->update();
}

void mainmenu::on_Ellipse_clicked()
{
    pEditShape->setShape(ShapeType::ellipse);
    pEditShape->exec();
    loadPropertyBar(*menuShape);
    loadTreeWidget(*menuShape,ui->comboBox->currentIndex());
    ui->Canvas->loadShape(*menuShape);
    ui->Canvas->update();
}

void mainmenu::on_Polygon_clicked()
{
    pEditShape->setShape(ShapeType::polygon);
    pEditShape->exec();
    loadPropertyBar(*menuShape);
    loadTreeWidget(*menuShape,ui->comboBox->currentIndex());
    ui->Canvas->loadShape(*menuShape);
    ui->Canvas->update();
}

void mainmenu::on_Move_clicked()
{
    if (menuShape->size() > 0)
    {
        pEdit->exec();

       if (pEdit->getClicked() == true)
       {
           EditShape(pEdit->getX(), pEdit->getY());
       }
       pEdit->setClicked();
    }
}

void mainmenu::on_Square_clicked()
{
    pEditShape->setShape(ShapeType::square);
    pEditShape->exec();
    loadPropertyBar(*menuShape);
    loadTreeWidget(*menuShape,ui->comboBox->currentIndex());
    ui->Canvas->loadShape(*menuShape);
    ui->Canvas->update();
}

void mainmenu::on_Line_clicked()
{
    pEditShape->setShape(ShapeType::line);
    pEditShape->exec();
    loadPropertyBar(*menuShape);
    loadTreeWidget(*menuShape,ui->comboBox->currentIndex());
    ui->Canvas->loadShape(*menuShape);
    ui->Canvas->update();
}

void mainmenu::on_Rect_clicked()
{
    pEditShape->setShape(ShapeType::rectangle);
    pEditShape->exec();
    loadPropertyBar(*menuShape);
    loadTreeWidget(*menuShape,ui->comboBox->currentIndex());
    ui->Canvas->loadShape(*menuShape);
    ui->Canvas->update();
}

void mainmenu::on_Polyline_clicked()
{
    pEditShape->setShape(ShapeType::polyline);
    pEditShape->exec();
    loadPropertyBar(*menuShape);
    loadTreeWidget(*menuShape,ui->comboBox->currentIndex());
    ui->Canvas->loadShape(*menuShape);
    ui->Canvas->update();
}

void mainmenu::on_Testimonials_clicked()
{
    pTestimonial->show();
}

void mainmenu::visitorView()
{
    ui->Line->setDisabled(true);
    ui->Polyline->setDisabled(true);
    ui->Polygon->setDisabled(true);
    ui->Rect->setDisabled(true);
    ui->Square->setDisabled(true);
    ui->Ellipse->setDisabled(true);
    ui->Circle->setDisabled(true);
    ui->Text->setDisabled(true);
    ui->actionNew->setDisabled(true);
    ui->Move->setDisabled(true);
    ui->Remove->setDisabled(true);




}
