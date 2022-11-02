#include "editshape.h"
#include "ui_editshape.h"

editshape::editshape(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editshape)
{
    ui->setupUi(this);
    polyScreen = new EditPoly();
    textScreen = new EditText();
}

editshape::~editshape()
{
    delete ui;
}

void editshape::setShape(ShapeType shapeEnum)
{
    ui->shape->setCurrentIndex(shapeEnum - 1);
    on_shape_activated(shapeEnum - 1);
}

void editshape::on_shape_activated(int index)
{
    ui->length->setDisabled(true);
    ui->width->setDisabled(true);
    ui->minorAxis->setDisabled(true);
    ui->majorAxis->setDisabled(true);
    ui->radius->setDisabled(true);
    ui->endX->setDisabled(true);
    ui->endY->setDisabled(true);
    switch(index+1)
    {
    case ShapeType::line:
    {
        ui->endX->setEnabled(true);
        ui->endY->setEnabled(true);
        break;
    }
    case ShapeType::polyline:
    {
        break;
    }
    case ShapeType::polygon:
    {

        break;
    }
    case ShapeType::rectangle:
    {
        ui->length->setEnabled(true);
        ui->width->setEnabled(true);

        break;
    }
    case ShapeType::square:
    {
        ui->length->setEnabled(true);

        break;
    }
    case ShapeType::ellipse:
    {
        ui->minorAxis->setEnabled(true);
        ui->majorAxis->setEnabled(true);

        break;
    }
    case ShapeType::circle:
    {
        ui->radius->setEnabled(true);

        break;
    }
    case ShapeType::text:
    {
        ui->length->setEnabled(true);
        ui->width->setEnabled(true);

        break;
    }
    }
}

void editshape::on_buttonBox_accepted()
{
    int id = 0;
    Shape* addedShape;
    Qt::GlobalColor pColor;
    int pWidth = 0;
    Qt::PenStyle pStyle;
    Qt::PenCapStyle pCapStyle;
    Qt::PenJoinStyle pJoinStyle;
    Qt::GlobalColor bColor;
    Qt::BrushStyle bStyle;

    vector<Qt::GlobalColor> colorVec = {Qt::white, Qt::black, Qt::red, Qt::green, Qt::blue, Qt::cyan, Qt::magenta, Qt::yellow, Qt::gray};
    vector<Qt::PenStyle> penStyleVec = {Qt::SolidLine, Qt::DashLine, Qt::DotLine, Qt::DashDotLine, Qt::DashDotDotLine};
    vector<Qt::PenCapStyle> penCapVec = {Qt::FlatCap, Qt::SquareCap, Qt::RoundCap};
    vector<Qt::PenJoinStyle> penJoinVec = {Qt::MiterJoin, Qt::BevelJoin, Qt::RoundJoin};
    vector<Qt::BrushStyle> brushStyleVec = {Qt::SolidPattern, Qt::HorPattern, Qt::VerPattern, Qt::NoBrush};

    pColor = colorVec[ui->PenColor->currentIndex()];
    pWidth = ui->Penwidth->value();
    pStyle = penStyleVec[ui->PenStyle->currentIndex()];
    pCapStyle = penCapVec[ui->Pencap->currentIndex()];
    pJoinStyle = penJoinVec[ui->Penjoin->currentIndex()];
    bColor = colorVec[ui->BrushColor->currentIndex()];
    bStyle = brushStyleVec[ui->Brushstyle->currentIndex()];

    if (pEditVec->size() > 0)
    {
        id = (*pEditVec)[pEditVec->size() - 1]->getID() + 1;
    }
    else
        id = 1;

    int xVal = ui->initialX->value();
    int yVal = ui->initialY->value();

    switch(ui->shape->currentIndex() + 1)
    {
    case ShapeType::line:
    {
        addedShape = new Line();
        addedShape->setID(id);
        addedShape->setShape(line);
        addedShape->setPen(pColor, pWidth, pStyle, pCapStyle, pJoinStyle);
        addedShape->setBrush(bColor,bStyle);
        addedShape->setInitialPoint(xVal,yVal);
        static_cast<Line*>(addedShape)->setEndPoint(ui->endX->value(),ui->endY->value());
        //addedShape->set
        break;
    }
    case ShapeType::polyline:
    {
        addedShape = new Polyline();
        addedShape->setID(id);
        addedShape->setShape(polyline);
        addedShape->setPen(pColor, pWidth, pStyle, pCapStyle, pJoinStyle);
        addedShape->setBrush(bColor,bStyle);
        static_cast<Polyline*>(addedShape)->addPoint(QPoint(xVal,yVal));
        polyScreen->exec();

        if (polyScreen->getVec().size() == 0)
            static_cast<Polyline*>(addedShape)->addPoint(QPoint(0,0));
        else
        {
            for (int i = 0; i < polyScreen->getVec().size();i++)
            {
                static_cast<Polyline*>(addedShape)->addPoint(polyScreen->getVec()[i]);
            }
        }
        polyScreen->getVec() = myStd::vector<QPoint>();
        break;
    }
    case ShapeType::polygon:
    {
        addedShape = new Polygon();
        addedShape->setID(id);
        addedShape->setShape(polygon);
        addedShape->setPen(pColor, pWidth, pStyle, pCapStyle, pJoinStyle);
        addedShape->setBrush(bColor,bStyle);
        static_cast<Polygon*>(addedShape)->addPoint(QPoint(xVal,yVal));
        polyScreen->exec();
        if (polyScreen->getVec().size() == 0)
            static_cast<Polyline*>(addedShape)->addPoint(QPoint(0,0));
        else
        {
            for (int i = 0; i < polyScreen->getVec().size();i++)
            {
                static_cast<Polygon*>(addedShape)->addPoint(polyScreen->getVec()[i]);
            }
        }
        polyScreen->getVec() = myStd::vector<QPoint>();
        break;
    }
    case ShapeType::rectangle:
    {
        addedShape = new Rectangle();
        addedShape->setID(id);
        addedShape->setShape(rectangle);
        addedShape->setPen(pColor, pWidth, pStyle, pCapStyle, pJoinStyle);
        addedShape->setBrush(bColor,bStyle);
        addedShape->setInitialPoint(xVal,yVal);
        static_cast<Rectangle*>(addedShape)->setRect(ui->length->value(),ui->width->value());
        break;
    }
    case ShapeType::square:
    {
        addedShape = new Square();
        addedShape->setID(id);
        addedShape->setShape(square);
        addedShape->setPen(pColor, pWidth, pStyle, pCapStyle, pJoinStyle);
        addedShape->setBrush(bColor,bStyle);
        addedShape->setInitialPoint(xVal,yVal);
        static_cast<Square*>(addedShape)->setLength(ui->length->value());
        break;
    }
    case ShapeType::ellipse:
    {
        addedShape = new Ellipse();
        addedShape->setID(id);
        addedShape->setShape(ellipse);
        addedShape->setPen(pColor, pWidth, pStyle, pCapStyle, pJoinStyle);
        addedShape->setBrush(bColor,bStyle);
        addedShape->setInitialPoint(xVal,yVal);
        static_cast<Ellipse*>(addedShape)->setAxises(ui->majorAxis->value(),ui->minorAxis->value());
        break;
    }
    case ShapeType::circle:
    {
        addedShape = new Circle();
        addedShape->setID(id);
        addedShape->setShape(circle);
        addedShape->setPen(pColor, pWidth, pStyle, pCapStyle, pJoinStyle);
        addedShape->setBrush(bColor,bStyle);
        addedShape->setInitialPoint(xVal,yVal);
        static_cast<Circle*>(addedShape)->setRadius(ui->radius->value());
        break;
    }
    case ShapeType::text:
    {
        addedShape = new Text();
        addedShape->setID(id);
        addedShape->setShape(text);
        addedShape->setPen(pColor, pWidth, pStyle, pCapStyle, pJoinStyle);
        addedShape->setBrush(bColor,bStyle);
        addedShape->setInitialPoint(xVal,yVal);
        static_cast<Text*>(addedShape)->setRect(ui->length->value(),ui->width->value());
        textScreen->exec();
        static_cast<Text*>(addedShape)->setString(textScreen->getTextData().textString);
        static_cast<Text*>(addedShape)->setColor(textScreen->getTextData().textColor);
        static_cast<Text*>(addedShape)->setAlignment(textScreen->getTextData().textFlag);
        static_cast<Text*>(addedShape)->setPointSize(textScreen->getTextData().pointSize);
        static_cast<Text*>(addedShape)->setFamily(textScreen->getTextData().textFamily);
        static_cast<Text*>(addedShape)->setStyle(textScreen->getTextData().textFontStyle);
        static_cast<Text*>(addedShape)->setWeight(textScreen->getTextData().textFontWeight);

        break;
    }
    }
    pEditVec->push_back(addedShape);
}

void editshape::loadShape(myStd::vector<Shape *> &source)
{
    pEditVec = &source;
}
