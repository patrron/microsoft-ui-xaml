// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class RadialGradientBrushProperties
{
public:
    RadialGradientBrushProperties();

    void Center(winrt::Point const& value);
    winrt::Point Center();

    void GradientOrigin(winrt::Point const& value);
    winrt::Point GradientOrigin();

    void InterpolationSpace(winrt::CompositionColorSpace const& value);
    winrt::CompositionColorSpace InterpolationSpace();

    void MappingMode(winrt::BrushMappingMode const& value);
    winrt::BrushMappingMode MappingMode();

    void RadiusX(double value);
    double RadiusX();

    void RadiusY(double value);
    double RadiusY();

    void SpreadMethod(winrt::GradientSpreadMethod const& value);
    winrt::GradientSpreadMethod SpreadMethod();

    static winrt::DependencyProperty CenterProperty() { return s_CenterProperty; }
    static winrt::DependencyProperty GradientOriginProperty() { return s_GradientOriginProperty; }
    static winrt::DependencyProperty InterpolationSpaceProperty() { return s_InterpolationSpaceProperty; }
    static winrt::DependencyProperty MappingModeProperty() { return s_MappingModeProperty; }
    static winrt::DependencyProperty RadiusXProperty() { return s_RadiusXProperty; }
    static winrt::DependencyProperty RadiusYProperty() { return s_RadiusYProperty; }
    static winrt::DependencyProperty SpreadMethodProperty() { return s_SpreadMethodProperty; }

    static GlobalDependencyProperty s_CenterProperty;
    static GlobalDependencyProperty s_GradientOriginProperty;
    static GlobalDependencyProperty s_InterpolationSpaceProperty;
    static GlobalDependencyProperty s_MappingModeProperty;
    static GlobalDependencyProperty s_RadiusXProperty;
    static GlobalDependencyProperty s_RadiusYProperty;
    static GlobalDependencyProperty s_SpreadMethodProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnCenterPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnGradientOriginPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnInterpolationSpacePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnMappingModePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnRadiusXPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnRadiusYPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSpreadMethodPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};