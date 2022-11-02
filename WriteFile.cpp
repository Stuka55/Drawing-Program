#include"WriteFile.h"

WriteFile::WriteFile(){}

void WriteFile::write(string shapesFile, const myStd::vector<Shape*>& vShape)
{
	ofstream fout;
    string Writetypes[] = {"NoShape", "Line", "Polyline", "Polygon", "Rectangle", "Square", "Ellipse", "Circle", "Text"};

	//Open the shapes.txt file
    fout.open(QCoreApplication::applicationDirPath().toStdString() + "/" + shapesFile);
    cout << QCoreApplication::applicationDirPath().toStdString() + "/" + shapesFile << endl;

    //Only try and read from the file if it is open
    if(fout.is_open())
    {
        if (vShape.size() > 0)
        for (const auto& p_shape: vShape)
        {
            int    id = 0;
            string shape = "";
            vector<int> dimensions;
            string pColor = "";
            int pWidth = 0;
            string pStyle = "";
            string pCapStyle = "";
            string pJoinStyle = "";
            string bColor = "";
            string bStyle = "";

            string tString = "";
            string tColor = "";
            string tAlignment = "";
            int tPointSize = 0;
            string tFamily = "";
            string tFontStyle = "";
            string tFontWeight = "";
            //deal with case besides text
            id = p_shape->getID();
            shape = Writetypes[p_shape->getShape()];
                            //get pen->get color->convert color to qstring-> convert to string
            if (shape != "Text")
            {
                switch(p_shape->getShape())
                {
                case line:
                {
                    dimensions.push_back(p_shape->getInitialPoint().x());
                    dimensions.push_back(p_shape->getInitialPoint().y());
                    dimensions.push_back(static_cast<Line*>(p_shape)->getEndPoint().x());
                    dimensions.push_back(static_cast<Line*>(p_shape)->getEndPoint().y());
                    break;
                }
                case polyline:
                {
                    for(int i = 0; i < (static_cast<Polyline*>(p_shape)->getPoints().size()); i++)
                    {
                        dimensions.push_back(static_cast<Polyline*>(p_shape)->getPoints()[i].x());
                        dimensions.push_back(static_cast<Polyline*>(p_shape)->getPoints()[i].y());
                    }
                    break;
                }
                case polygon:
                {
                    for(int i = 0; i < (static_cast<Polyline*>(p_shape)->getPoints().size()); i++)
                    {
                        dimensions.push_back(static_cast<Polyline*>(p_shape)->getPoints()[i].x());
                        dimensions.push_back(static_cast<Polyline*>(p_shape)->getPoints()[i].y());
                    }
                    break;
                }
                case rectangle:
                {
                    dimensions.push_back(p_shape->getInitialPoint().x());
                    dimensions.push_back(p_shape->getInitialPoint().y());
                    dimensions.push_back(static_cast<Rectangle*>(p_shape)->getLength());
                    dimensions.push_back(static_cast<Rectangle*>(p_shape)->getWidth());
                    break;
                }
                case square:
                {
                    dimensions.push_back(p_shape->getInitialPoint().x());
                    dimensions.push_back(p_shape->getInitialPoint().y());
                    dimensions.push_back(static_cast<Square*>(p_shape)->getLength());
                    break;
                }
                case ellipse:
                {
                    dimensions.push_back(p_shape->getInitialPoint().x());
                    dimensions.push_back(p_shape->getInitialPoint().y());
                    dimensions.push_back(static_cast<Ellipse*>(p_shape)->getMajorAxis());
                    dimensions.push_back(static_cast<Ellipse*>(p_shape)->getMinorAxis());
                    break;
                }
                case circle:
                {
                    dimensions.push_back(p_shape->getInitialPoint().x());
                    dimensions.push_back(p_shape->getInitialPoint().y());
                    dimensions.push_back(static_cast<Circle*>(p_shape)->getRadius());
                    break;
                }
                default:
                    break;
                }

                QColor pc = p_shape->getPen().color();
                {//Compare color since cannot use switch for non int type
                    if  (pc == QColor(Qt::white))
                        pColor = "white";
                    else if (pc == QColor(Qt::black))
                        pColor = "black";
                    else if (pc == QColor(Qt::red))
                        pColor = "red";
                    else if (pc == QColor("Green") || (pc == QColor(Qt::green)))
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



                pWidth = p_shape->getPen().width();
                switch(p_shape->getPen().style())
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

                switch(p_shape->getPen().capStyle())
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
                switch(p_shape->getPen().joinStyle())
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

                QColor bc = p_shape->getBrush().color();
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

                switch(p_shape->getBrush().style())
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

                fout << "ShapeId: " << id << endl;
                fout << "ShapeType: " << shape << endl;
                fout << "ShapeDimensions:";
                for (int i = 0; i < dimensions.size() - 1; i++)
                        fout << " " << dimensions[i] << ",";
                fout << " " << dimensions[dimensions.size()-1] << endl;
                fout << "PenColor: " << pColor << endl;
                fout << "PenWidth: " << pWidth << endl;
                fout << "PenStyle: " << pStyle << endl;
                fout << "PenCapStyle: " << pCapStyle << endl;
                fout << "PenJoinStyle: " << pJoinStyle << endl;
                if (p_shape->getBrush() != QBrush())
                {
                    fout << "BrushColor: " << bColor << endl;
                    fout << "BrushStyle: " << bStyle << endl;
                }

            }
            else
            {
                dimensions.push_back(p_shape->getInitialPoint().x());
                dimensions.push_back(p_shape->getInitialPoint().y());
                dimensions.push_back(static_cast<Text*>(p_shape)->getLength());
                dimensions.push_back(static_cast<Text*>(p_shape)->getWidth());

                tString = static_cast<Text*>(p_shape)->getString().toStdString();

                QColor tc = static_cast<Text*>(p_shape)->getColor();
                {//Compare color since cannot use switch for non int type
                    if  (tc == QColor(Qt::white))
                        tColor = "white";
                    else if (tc == QColor(Qt::black))
                        tColor = "black";
                    else if (tc == QColor(Qt::red))
                        tColor = "red";
                    else if (tc == QColor("Green") || (tc == QColor(Qt::green)))
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
                switch(static_cast<Text*>(p_shape)->getAlignment())
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

                tPointSize = static_cast<Text*>(p_shape)->getPointSize();

                tFamily = static_cast<Text*>(p_shape)->getFamily().toStdString();

                switch(static_cast<Text*>(p_shape)->getStyle())
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

                switch(static_cast<Text*>(p_shape)->getWeight())
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

                fout << "ShapeId: " << id << endl;
                fout << "ShapeType: " << shape << endl;
                fout << "ShapeDimensions:";
                for (int i = 0; i < dimensions.size() - 1; i++)
                        fout << " " << dimensions[i] << ",";
                fout << " " << dimensions[dimensions.size()-1] << endl;
                fout << "TextString: " << tString << endl;
                fout << "TextColor: " << tColor << endl;
                fout << "TextAlignment: " << tAlignment << endl;
                fout << "TextPointSize: " << tPointSize << endl;
                fout << "TextFontFamily: " << tFamily << endl;
                fout << "TextFontStyle: " << tFontStyle << endl;
                fout << "TextFontWeight: " << tFontWeight << endl;
            }//if shape == text

            fout << endl;
        }
    }

}

