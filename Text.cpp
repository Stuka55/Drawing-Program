#include "Text.h"

Text::Text(int id, ShapeType sh, Qt::GlobalColor bColor, Qt::BrushStyle bStyle, Qt::GlobalColor pColor, int width,
	Qt::PenStyle pStyle, Qt::PenCapStyle pCapStyle, Qt::PenJoinStyle pJoinStyle, int x, int y, int l, int w)
     	: Shape(id, sh, bColor, bStyle, pColor,width,pStyle,pCapStyle,pJoinStyle,x,y)
{
	width 	= w;
	length 	= l;
    	setShape(ShapeType::text);
}

void Text::draw()
{

    	getQPainter().setPen(getPen());
        getQPainter().setPen(color);
    	getQPainter().setBrush(getBrush());
    	QFont font(family,pointSize);
    	font.setStyle(style);
    	font.setWeight(weight);
    	getQPainter().setFont(font);
        getQPainter().drawText(getInitialPoint().x(), getInitialPoint().y(), length, width, align, string);
}

float Text::perimeter()const
{	
    	return 2 * (width + length);
}

float Text::area()const
{
   	 return width * length;
}

void Text::move(int x, int y)
{
    setInitialPoint(x,y);
}

void Text::shapeDimensions(const vector<int> &source)
{
    	Shape::shapeDimensions(source);
    	setRect(source[2],source[3]);
}

void Text::print()
{
    	cout << "Text:" << endl;
    	Shape::print();
    	cout << "\tLength: " << length << endl;
    	cout << "\tLength: " << width << endl;
    	cout << "\tString: " << string.toStdString() << endl;
}

void Text::setRect(int l, int w)
{
    	length = l;
    	width = w;
}

void Text::setAlignment(Qt::AlignmentFlag source)
{
    	align = source;
}

void Text::setString(const QString &source)
{
    	string = source;
}

void Text::setColor(QColor source)
{
    	color = source;
}

void Text::setFamily(const QString &source)
{
    	family = source;
}

void Text::setPointSize(const int & size)
{
    	pointSize = size;
}

void Text::setStyle(QFont::Style source)
{
    	style = source;
}

void Text::setWeight(QFont::Weight source)
{
    	weight = source;
}

int Text::getLength()const
{
    return length;
}

int Text::getWidth()const
{
    return width;
}

Qt::AlignmentFlag Text::getAlignment() const
{
    return align;
}

QString Text::getString()const
{
    return string;
}

QColor Text::getColor() const
{
    return color;
}

QString Text::getFamily() const
{
    return family;
}

int Text::getPointSize() const
{
    return pointSize;
}

QFont::Style Text::getStyle() const
{
    return style;
}

QFont::Weight Text::getWeight()const
{
    return weight;
}
