#ifndef TEXT_H
#define TEXT_H

#include "Punkt.h"
#include <string>
#include "Grafik.h"

class Text : public Grafik
{
private:
    string mText;
public:
    // Konstruktoren
    Text();
    Text(string sText);
	// Kopierkonstruktor
    Text(const Text&);
	// Zuweisungsoperator
    Text& operator=(const Text& rhs);
    // Destruktor
    ~Text();
    // Zugriffsfunktionen
    string Inhalt() const;
    void SetzeInhalt(string sText);
    // virtual
    virtual void Zeichne() const;
};

#endif // Text_H
