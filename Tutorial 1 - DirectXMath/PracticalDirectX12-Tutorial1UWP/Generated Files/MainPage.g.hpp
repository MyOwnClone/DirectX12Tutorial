﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "MainPage.xaml.h"

void ::PracticalDirectX12_Tutorial1UWP::MainPage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///MainPage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::PracticalDirectX12_Tutorial1UWP::MainPage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 1:
            {
                this->HeaderPanel = safe_cast<::Windows::UI::Xaml::Controls::StackPanel^>(__target);
            }
            break;
        case 2:
            {
                this->anglePath = safe_cast<::Windows::UI::Xaml::Shapes::Path^>(__target);
            }
            break;
        case 3:
            {
                this->v1Line = safe_cast<::Windows::UI::Xaml::Shapes::Line^>(__target);
            }
            break;
        case 4:
            {
                this->v2Line = safe_cast<::Windows::UI::Xaml::Shapes::Line^>(__target);
            }
            break;
        case 5:
            {
                this->v3Line = safe_cast<::Windows::UI::Xaml::Shapes::Line^>(__target);
            }
            break;
        case 6:
            {
                this->v1Text = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 7:
            {
                this->v2Text = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 8:
            {
                this->v3Text = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 9:
            {
                this->CalculationsText = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 10:
            {
                this->inkCanvas = safe_cast<::Windows::UI::Xaml::Controls::InkCanvas^>(__target);
            }
            break;
        case 11:
            {
                this->Header = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::PracticalDirectX12_Tutorial1UWP::MainPage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}

