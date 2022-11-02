#include "TextParser.h"

TextParser::TextParser(){
    id = 0;
}

myStd::vector<Shape *> TextParser::parse(string shapesFile){
    ifstream shapes;
    string nextLine;
    //Declare a vector of shape pointers to hold the different shapes in shapes.txt
    myStd::vector<Shape *> objects;
    //vector<string> objects;
    //Which index the shape type was in types[]
    int type = 0;
    //dimensions of the current object
    vector<int> dimensions;

    //Open the shapes.txt file
    shapes.open(QCoreApplication::applicationDirPath().toStdString() + "/" + shapesFile);
    cout << QCoreApplication::applicationDirPath().toStdString() + "/" + shapesFile << endl;

    //Only try and read from the file if it is open
    try
    {
        if(!shapes.is_open()){
            bool check = shapes.is_open();
            throw check;
        }
    }
    catch (bool check)
    {
    cerr << "Exception opening/reading file" << endl;
    }
    
    if(shapes.is_open())
    {
        //Parse the file line by line
        while(getline(shapes, nextLine))
        {
            //Which shape id is currently being read
            //Check each attribute to the line
            for(int i = 0; i < sizeof(attributes)/sizeof(attributes[0]); i++)
            {
                if(nextLine.find(attributes[i]) == 0)
                {
                    int distToVal = nextLine.find_first_of(":") + 1;
                    //cout << line.substr(distToVal, line.length() - distToVal + 1) << endl;
                    string value = nextLine.substr(distToVal + 1, nextLine.length() - distToVal + 1);
                    switch(i)
                    {
                        case ShapeId:
                        {
                            id = stoi(value);
                            break;
                        }
                        case ShapeType:
                        {
                            //Find which shape type is a match from types[]
                            for(int j = 0; j < sizeof(types)/sizeof(types[0]); j++)
                            {
                                    if(nextLine.find(types[j]) != string::npos)
                                    {
                                        type = j;
                                        break;
                                    }
                            }
                            //Push the default shape to the vector
                            switch(type)
                            {
                                case noShape:
                                    break;

                                case line:
                                {
                                    currentShape = new Line(nullptr,id);
                                    objects.push_back(currentShape);
                                    break;
                                }
                                case polyline:
                                {
                                    currentShape = new Polyline();
                                    objects.push_back(currentShape);

                                    break;
                                }
                                case polygon:
                                {
                                    currentShape = new Polygon();
                                    objects.push_back(currentShape);

                                    break;
                                }
                                case rectangle:
                                {
                                    currentShape = new Rectangle();
                                    objects.push_back(currentShape);

                                    break;
                                }
                                case square:
                                {
                                    currentShape = new Square();
                                    objects.push_back(currentShape);

                                    break;
                                }
                                case ellipse:
                                {
                                    currentShape = new Ellipse();
                                    objects.push_back(currentShape);

                                    break;
                                }
                                case circle:
                                {
                                    currentShape = new Circle();
                                    objects.push_back(currentShape);

                                    break;
                                }
                                case text:
                                {
                                    currentShape = new Text();
                                    objects.push_back(currentShape);
                                    break;
                                }
                                default:
                                    break;
                            }
                            //Assign the shape id
                            currentShape->setID(id);
                            break;
                        }
                        case ShapeDimensions:
                        {
                            // Splitting the value string into individual ints and adding them to a vector
                            while(value.find(", ") != string::npos)
                            {
                                dimensions.push_back(stof(value.substr(0, value.find(", "))));
                                value = value.substr(value.find(", ") + 2, value.length() - 1);
                            }
                            dimensions.push_back(stoi(value));
                            currentShape->shapeDimensions(dimensions);

                            dimensions = *(new vector<int>);
                            break;
                        }
                        case PenColor:
                        {
                            if (value != "green")
                            {
                                QColor color = (QString::fromStdString(value));
                                currentShape->setPenColor(color);
                            }
                            else
                                currentShape->setPenColor(QColor(Qt::green));

                            break;
                        }

                        case PenWidth:
                        {
                            currentShape->setPenWidth(stof(value));

                            break;
                        }

                        case PenStyle:
                        {
                            string style = value;
                            int a = 0;
                            Qt::PenStyle ps;
                            for ( a = 0; a < sizeof(penStyle)/sizeof(penStyle[0]); a++)
                            {
                                if (style == penStyle[a])
                                    break;
                            }
                            switch(a)
                            {
                                case penstyle::NoPen:
                                {
                                    ps = Qt::NoPen;
                                    break;
                                }
                                case penstyle::SolidLine:
                                {
                                    ps = Qt::SolidLine;
                                    break;
                                }
                                case penstyle::DashLine:
                                {
                                    ps = Qt::DashLine;
                                    break;
                                }
                                case penstyle::DotLine:
                                {
                                    ps = Qt::DotLine;
                                    break;
                                }
                                case penstyle::DashDotLine:
                                {
                                    ps = Qt::DashDotLine;
                                    break;
                                }
                                case penstyle::DashDotDotLine:
                                {
                                    ps = Qt::DashDotDotLine;
                                    break;
                                }
                            }
                            currentShape->setPenStyle(ps);

                            break;
                        }

                        case PenCapStyle:
                        {
                            string capStyle = value;
                            Qt::PenCapStyle pcs;
                            int a = 0;
                            for (a = 0; a < sizeof(penCapStyle)/sizeof(penCapStyle[0]); a++)
                            {
                                if (capStyle == penCapStyle[a])
                                    break;
                            }
                            switch(a)
                            {
                                case FlatCap:
                                {
                                    pcs = Qt::FlatCap;
                                    break;
                                }
                                case SquareCap:
                                {
                                    pcs = Qt::SquareCap;
                                    break;
                                }
                                case RoundCap:
                                {
                                    pcs = Qt::RoundCap;
                                    break;
                                }
                            }
                            currentShape->setPenCapStyle(pcs);

                            break;
                        }

                        case PenJoinStyle:
                        {
                            string joinStyle = value;
                            int a = 0;
                            Qt::PenJoinStyle pjs;
                            for (a = 0; a < sizeof(penJoinStyle)/sizeof(penJoinStyle[0]); a++)
                            {
                                if (joinStyle.find(penJoinStyle[a]) != string::npos)
                                    break;
                            }
                            switch(a)
                            {
                                case MiterJoin:
                                {
                                    pjs = Qt::MiterJoin;
                                    break;
                                }
                                case BevelJoin:
                                {
                                    pjs = Qt::BevelJoin;
                                    break;
                                }
                                case RoundJoin:
                                {
                                    pjs = Qt::RoundJoin;
                                    break;
                                }
                            }
                            currentShape->setPenJoinStyle(pjs);

                            break;
                        }

                        case BrushColor:
                        {
                            if (value != "green")
                            {
                                QColor bColor = (QString::fromStdString(value));
                                currentShape->setBrushColor(bColor);
                            }
                            else
                                currentShape->setBrushColor(QColor(Qt::green));

                            break;
                        }
                        case BrushStyle:
                        {
                            string bStyle = value;
                            int a = 0;
                            Qt::BrushStyle bs;
                            for (a = 0; a < sizeof(brushStyle)/sizeof(brushStyle[0]); a++)
                            {
                                if (bStyle.find(brushStyle[a]) != string::npos)
                                    break;
                            }
                            switch(a)
                            {
                                case SolidPattern:
                                {
                                    bs = Qt::SolidPattern;
                                    break;
                                }
                                case HorPattern:
                                {
                                    bs = Qt::HorPattern;
                                    break;
                                }
                                case VerPattern:
                                {
                                    bs = Qt::VerPattern;
                                    break;
                                }
                                case NoBrush:
                                {
                                    bs = Qt::NoBrush;
                                    break;
                                }
                            }
                            currentShape->setBrushStyle(bs);

                            break;
                        }
                        case TextString:
                        {
                            dynamic_cast<Text*>(currentShape)->setString(QString::fromStdString(value));
                            break;
                        }

                        case TextColor:
                        {
                            if (value != "green")
                                dynamic_cast<Text*>(currentShape)->setColor(QColor(QString::fromStdString(value)));
                            else
                                dynamic_cast<Text*>(currentShape)->setColor(QColor(Qt::green));
                            break;
                        }
                        case TextAlignment:
                        {
                            string align = value;
                            int a = 0;
                            Qt::AlignmentFlag af;
                            for (a = 0; a < sizeof(textAlignment)/sizeof(textAlignment[0]); a++)
                            {
                                if (align.find(textAlignment[a]) != string::npos)
                                    break;
                            }
                            switch(a)
                            {
                                case AlignLeft:
                                {
                                    af = Qt::AlignLeft;
                                    break;
                                }
                                case AlignRight:
                                {
                                    af = Qt::AlignRight;
                                    break;
                                }
                                case AlignTop:
                                {
                                    af = Qt::AlignTop;
                                    break;
                                }
                                case AlignBottom:
                                {
                                    af = Qt::AlignBottom;
                                    break;
                                }
                                case AlignCenter:
                                {
                                    af = Qt::AlignCenter;
                                    break;
                                }
                            }
                            dynamic_cast<Text*>(currentShape)->setAlignment(af);

                            break;
                        }
                        case TextPointSize:
                        {
                            dynamic_cast<Text*>(currentShape)->setPointSize(stof(value));
                            break;
                        }
                        case TextFontFamily:
                        {
                            dynamic_cast<Text*>(currentShape)->setFamily(QString::fromStdString(value));
                            break;
                        }
                        case TextFontStyle:
                        {
                            string fontStyle = value;
                            int a = 0;
                            QFont::Style fs;
                            for (a = 0; a < sizeof(textFontStyle)/sizeof(textFontStyle[0]); a++)
                            {
                                if (fontStyle.find(textFontStyle[a]) != string::npos)
                                    break;
                            }
                            switch(a)
                            {
                                case StyleNormal:
                                {
                                    fs = QFont::StyleNormal;
                                    break;
                                }
                                case StyleItalic:
                                {
                                    fs = QFont::StyleItalic;
                                    break;
                                }
                                case StyleOblique:
                                {
                                    fs = QFont::StyleOblique;
                                    break;
                                }
                            }
                            dynamic_cast<Text*>(currentShape)->setStyle(fs);
                            break;
                        }
                        case TextFontWeight:
                        {
                            string fontWeight = value;
                            QFont::Weight fw;
                            int a = 0;
                            for (a = 0; a < sizeof(textFontWeight)/sizeof(textFontWeight[0]); a++)
                            {
                                if (fontWeight.find(textFontWeight[a]) != string::npos)
                                    break;
                            }
                            switch(a)
                            {
                                case Thin:
                                {
                                    fw = QFont::Thin;
                                    break;
                                }
                                case Light:
                                {
                                    fw = QFont::Light;
                                    break;
                                }
                                case Normal:
                                {
                                    fw = QFont::Normal;
                                    break;
                                }
                                case Bold:
                                {
                                    fw = QFont::Bold;
                                    break;
                               }
                            }
                            dynamic_cast<Text*>(currentShape)->setWeight(fw);
                            break;
                        }
                        default:
                            break;
                    }
                }
            }

        }//while loop for each shape
        //Close the shapes.txt file
        shapes.close();
    }else{
        cout << "Unable to open shapes.txt." << endl;
    }
   /* for(int i = 0; i < objects.size(); i++){
        objects[i]->print();
    }*/
    return objects;
}
