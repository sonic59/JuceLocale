/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  3 May 2012 6:56:07pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_WINDOWCOMPONENT_WINDOWCOMPONENT_444E7F35__
#define __JUCER_HEADER_WINDOWCOMPONENT_WINDOWCOMPONENT_444E7F35__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class WindowComponent  : public Component,
                         public ButtonListener
{
public:
    //==============================================================================
    WindowComponent ();
    ~WindowComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);



    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    TextButton* textButton;
    Label* label;


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    WindowComponent (const WindowComponent&);
    const WindowComponent& operator= (const WindowComponent&);
};


#endif   // __JUCER_HEADER_WINDOWCOMPONENT_WINDOWCOMPONENT_444E7F35__
