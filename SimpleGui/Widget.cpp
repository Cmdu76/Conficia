#include "Widget.hpp"

namespace SGUI
{

////////////////////////////////////////////////////////////
Widget::Widget() : mEnabled(true), mVisible(true)
{
}

////////////////////////////////////////////////////////////
bool Widget::isEnabled() const
{
    return mEnabled;
}

////////////////////////////////////////////////////////////
void Widget::enable()
{
    mEnabled = true;
}

////////////////////////////////////////////////////////////
void Widget::disable()
{
    mEnabled = false;
}

////////////////////////////////////////////////////////////
bool Widget::isVisible() const
{
    return mVisible;
}

////////////////////////////////////////////////////////////
void Widget::show()
{
    mVisible = true;
}

////////////////////////////////////////////////////////////
void Widget::hide()
{
    mVisible = false;
}

////////////////////////////////////////////////////////////
void Widget::update()
{
    //Used by TextBox
}

////////////////////////////////////////////////////////////
sf::Vector2f Widget::getSize() const
{
    return sf::Vector2f(0,0);
}

////////////////////////////////////////////////////////////
void Widget::setSize(sf::Vector2f newSize)
{
}

////////////////////////////////////////////////////////////
void Widget::setSize(float x, float y)
{
}

} // namespace SGUI

