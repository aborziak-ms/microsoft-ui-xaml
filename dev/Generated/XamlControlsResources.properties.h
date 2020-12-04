// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class XamlControlsResourcesProperties
{
public:
    XamlControlsResourcesProperties();

    void UseCompactResources(bool value);
    bool UseCompactResources();

    void Version(winrt::StylesVersion const& value);
    winrt::StylesVersion Version();

    static winrt::DependencyProperty UseCompactResourcesProperty() { return s_UseCompactResourcesProperty; }
    static winrt::DependencyProperty VersionProperty() { return s_VersionProperty; }

    static GlobalDependencyProperty s_UseCompactResourcesProperty;
    static GlobalDependencyProperty s_VersionProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnUseCompactResourcesPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnVersionPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
