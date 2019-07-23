#include "Text.h"
#include <iostream>
#include <string>
using namespace std;

// Konstruktoren
Text::Text() : mText("undefined")
{
}

Text::Text(string sText) : mText(sText)
{
}

// Kopierkonstruktor
Text::Text(const Text& rhs) : mText(rhs.Inhalt())
{
}

// Zuweisungsoperator
Text& Text::operator=(const Text& rhs)
{
    if (this==&rhs)
	{
        return *this;
	}
    else
        {
        mText=rhs.Inhalt();
        return *this;
    }
	return *this;
}

// Destruktor
Text::~Text()
{
}

// Zugriffsfunktionen
string Text::Inhalt() const
{
    return mText;
}

void Text::SetzeInhalt(string sText)
{
    mText=sText;
}

// virtual
void Text::Zeichne() const
{
    cout << "Text:" << Inhalt() << endl;
}
