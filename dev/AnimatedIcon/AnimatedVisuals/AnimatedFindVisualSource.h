﻿#pragma once
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//       LottieGen version:
//           7.0.0-build.101+g12769c43d3
//       
//       Command:
//           LottieGen -Language Cppwinrt -WinUIVersion 2.4 -InputFile AnimatedFindVisualSource.json
//       
//       Input file:
//           AnimatedFindVisualSource.json (23604 bytes created 11:16-08:00 Mar 5 2021)
//       
//       LottieGen source:
//           http://aka.ms/Lottie
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "common.h"
#include "AnimatedVisuals\AnimatedFindVisualSource.g.h"

// Name:        Controls_05_Search
// Frame rate:  60 fps
// Frame count: 80
// Duration:    1333.3 mS
// _____________________________________________________________________________________________
// |           Marker           |           Constant           | Frame |   mS   |   Progress   |
// |____________________________|______________________________|_______|________|______________|
// | NormalToPointerOver_Start  | M_NormalToPointerOver_Start  |     0 |    0.0 | 0.0F         |
// | NormalToPointerOver_End    | M_NormalToPointerOver_End    |     9 |  150.0 | 0.113124996F |
// | NormalToPressed_Start      | M_NormalToPressed_Start      |    10 |  166.7 | 0.125624999F |
// | NormalToPressed_End        | M_NormalToPressed_End        |    19 |  316.7 | 0.238124996F |
// | PointerOverToNormal_Start  | M_PointerOverToNormal_Start  |    20 |  333.3 | 0.250625014F |
// | PointerOverToNormal_End    | M_PointerOverToNormal_End    |    29 |  483.3 | 0.363124996F |
// | PointerOverToPressed_Start | M_PointerOverToPressed_Start |    30 |  500.0 | 0.375625014F |
// | PointerOverToPressed_End   | M_PointerOverToPressed_End   |    39 |  650.0 | 0.488124996F |
// | PressedToNormal_Start      | M_PressedToNormal_Start      |    40 |  666.7 | 0.500625014F |
// | PressedToNormal_End        | M_PressedToNormal_End        |    59 |  983.3 | 0.738125026F |
// | PressedToPointerOver_Start | M_PressedToPointerOver_Start |    60 | 1000.0 | 0.750625014F |
// | PressedToPointerOver_End   | M_PressedToPointerOver_End   |    79 | 1316.7 | 0.988125026F |
// ---------------------------------------------------------------------------------------------
// _________________________________________________________
// | Theme property |  Accessor  | Type  |  Default value  |
// |________________|____________|_______|_________________|
// | Foreground     | Foreground | Color | #FF000000 Black |
// ---------------------------------------------------------
class AnimatedFindVisualSource
    : public winrt::implementation::AnimatedFindVisualSourceT<AnimatedFindVisualSource>
{
    winrt::Windows::UI::Composition::CompositionPropertySet _themeProperties{ nullptr };
    winrt::Windows::UI::Color _themeForeground{ 0xFF, 0x00, 0x00, 0x00 };
    winrt::Windows::UI::Composition::CompositionPropertySet EnsureThemeProperties(winrt::Windows::UI::Composition::Compositor compositor);

    static winrt::Windows::Foundation::Numerics::float4 ColorAsVector4(winrt::Windows::UI::Color color);
public:
    // Animation duration: 1.333 seconds.
    static constexpr int64_t c_durationTicks{ 13333333L };

    // Marker: NormalToPointerOver_Start.
    static constexpr float M_NormalToPointerOver_Start{ 0.0F };

    // Marker: NormalToPointerOver_End.
    static constexpr float M_NormalToPointerOver_End{ 0.113124996F };

    // Marker: NormalToPressed_Start.
    static constexpr float M_NormalToPressed_Start{ 0.125624999F };

    // Marker: NormalToPressed_End.
    static constexpr float M_NormalToPressed_End{ 0.238124996F };

    // Marker: PointerOverToNormal_Start.
    static constexpr float M_PointerOverToNormal_Start{ 0.250625014F };

    // Marker: PointerOverToNormal_End.
    static constexpr float M_PointerOverToNormal_End{ 0.363124996F };

    // Marker: PointerOverToPressed_Start.
    static constexpr float M_PointerOverToPressed_Start{ 0.375625014F };

    // Marker: PointerOverToPressed_End.
    static constexpr float M_PointerOverToPressed_End{ 0.488124996F };

    // Marker: PressedToNormal_Start.
    static constexpr float M_PressedToNormal_Start{ 0.500625014F };

    // Marker: PressedToNormal_End.
    static constexpr float M_PressedToNormal_End{ 0.738125026F };

    // Marker: PressedToPointerOver_Start.
    static constexpr float M_PressedToPointerOver_Start{ 0.750625014F };

    // Marker: PressedToPointerOver_End.
    static constexpr float M_PressedToPointerOver_End{ 0.988125026F };

    // Theme property: Foreground.
    static inline const winrt::Windows::UI::Color c_themeForeground{ 0xFF, 0x00, 0x00, 0x00 };


    winrt::Windows::UI::Color Foreground();
    void Foreground(winrt::Windows::UI::Color value);

    winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual TryCreateAnimatedVisual(
        winrt::Windows::UI::Composition::Compositor const& compositor);

    winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual TryCreateAnimatedVisual(
        winrt::Windows::UI::Composition::Compositor const& compositor,
        winrt::Windows::Foundation::IInspectable& diagnostics);

    // Gets the number of frames in the animation.
    double FrameCount();

    // Gets the framerate of the animation.
    double Framerate();

    // Gets the duration of the animation.
    winrt::Windows::Foundation::TimeSpan Duration();

    // Converts a zero-based frame number to the corresponding progress value denoting the
    // start of the frame.
    double FrameToProgress(double frameNumber);

    // Returns a map from marker names to corresponding progress values.
    winrt::Windows::Foundation::Collections::IMapView<hstring, double> Markers();

    // Sets the color property with the given name, or does nothing if no such property
    // exists.
    void SetColorProperty(hstring const& propertyName, winrt::Windows::UI::Color value);

    // Sets the scalar property with the given name, or does nothing if no such property
    // exists.
    void SetScalarProperty(hstring const& propertyName, double value);
};
