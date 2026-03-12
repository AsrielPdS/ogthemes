#pragma once
#include <imgui.h>

namespace editor {
  void SetDarkTheme() {
    // Fork of Rounded Visual Studio style from ImThemes
    auto& st = ImGui::GetStyle();

    ImVec4 hoveredColor(.19f, .37f, .55f, 1.00f);
    ImVec4 activeColor(.06f, .53f, .98f, 1.00f);

    st.Colors[ImGuiCol_Text] = { 1.00f, 1.00f, 1.00f, 1.00f };
    st.Colors[ImGuiCol_TextDisabled] = { .50f, .50f, .50f, 1.00f };
    st.Colors[ImGuiCol_WindowBg] = { .17f, .17f, .18f, 1.f };
    st.Colors[ImGuiCol_ChildBg] = { .17f, .17f, .18f, .00f };
    st.Colors[ImGuiCol_PopupBg] = { .14f, .14f, .16f, 1.f };
    st.Colors[ImGuiCol_Border] = { .15f, .16f, .17f, 1.00f };
    st.Colors[ImGuiCol_BorderShadow] = { .10f, .11f, .11f, 1.00f };
    st.Colors[ImGuiCol_FrameBg] = { .10f, .11f, .11f, 1.00f };
    st.Colors[ImGuiCol_FrameBgHovered] = hoveredColor;
    st.Colors[ImGuiCol_FrameBgActive] = { .10f, .11f, .11f, 1.00f };
    st.Colors[ImGuiCol_TitleBg] = { .08f, .08f, .09f, 1.00f };
    st.Colors[ImGuiCol_TitleBgActive] = { .08f, .08f, .09f, 1.00f };
    st.Colors[ImGuiCol_TitleBgCollapsed] = { .08f, .08f, .09f, 1.00f };
    st.Colors[ImGuiCol_MenuBarBg] = { .08f, .08f, .09f, 1.00f };
    st.Colors[ImGuiCol_ScrollbarBg] = { .10f, .11f, .11f, 1.00f };
    st.Colors[ImGuiCol_ScrollbarGrab] = { .31f, .31f, .31f, 1.00f };
    st.Colors[ImGuiCol_ScrollbarGrabHovered] = hoveredColor;
    st.Colors[ImGuiCol_ScrollbarGrabActive] = activeColor;
    st.Colors[ImGuiCol_CheckMark] = { .26f, .59f, .98f, 1.00f };
    st.Colors[ImGuiCol_SliderGrab] = { .24f, .24f, .25f, 1.00f };
    st.Colors[ImGuiCol_SliderGrabActive] = activeColor;
    st.Colors[ImGuiCol_Button] = { .24f, .24f, .25f, 1.00f };
    st.Colors[ImGuiCol_ButtonHovered] = hoveredColor;
    st.Colors[ImGuiCol_ButtonActive] = activeColor;
    st.Colors[ImGuiCol_Header] = { .10f, .11f, .11f, 1.00f };
    st.Colors[ImGuiCol_HeaderHovered] = hoveredColor;
    st.Colors[ImGuiCol_HeaderActive] = activeColor;
    st.Colors[ImGuiCol_Separator] = { .43f, .43f, .50f, .50f };
    st.Colors[ImGuiCol_SeparatorHovered] = hoveredColor;
    st.Colors[ImGuiCol_SeparatorActive] = activeColor;
    st.Colors[ImGuiCol_ResizeGrip] = { .26f, .59f, .98f, .20f };
    st.Colors[ImGuiCol_ResizeGripHovered] = hoveredColor;
    st.Colors[ImGuiCol_ResizeGripActive] = activeColor;
    st.Colors[ImGuiCol_Tab] = { .08f, .08f, .09f, 1.00f };
    st.Colors[ImGuiCol_TabHovered] = hoveredColor;
    st.Colors[ImGuiCol_TabSelected] = activeColor;// { .17f, .17f, .18f, 1.00f };
    st.Colors[ImGuiCol_TabDimmed] = { .08f, .08f, .09f, 1.00f };
    st.Colors[ImGuiCol_TabDimmedSelected] = { .17f, .17f, .18f, 1.00f };
    st.Colors[ImGuiCol_DockingPreview] = { .26f, .59f, .98f, .70f };
    st.Colors[ImGuiCol_DockingEmptyBg] = { .20f, .20f, .20f, 1.00f };
    st.Colors[ImGuiCol_PlotLines] = { .61f, .61f, .61f, 1.00f };
    st.Colors[ImGuiCol_PlotLinesHovered] = hoveredColor;
    st.Colors[ImGuiCol_PlotHistogram] = { .90f, .70f, .00f, 1.00f };
    st.Colors[ImGuiCol_PlotHistogramHovered] = hoveredColor;
    st.Colors[ImGuiCol_TableHeaderBg] = { .19f, .19f, .20f, 1.00f };
    st.Colors[ImGuiCol_TableBorderStrong] = { .31f, .31f, .35f, 1.00f };
    st.Colors[ImGuiCol_TableBorderLight] = { .23f, .23f, .25f, 1.00f };
    st.Colors[ImGuiCol_TableRowBg] = { .00f, .00f, .00f, .00f };
    st.Colors[ImGuiCol_TableRowBgAlt] = { 1.00f, 1.00f, 1.00f, .06f };
    st.Colors[ImGuiCol_TextSelectedBg] = { .26f, .59f, .98f, .35f };
    st.Colors[ImGuiCol_DragDropTarget] = { 1.00f, 1.00f, .00f, .90f };
    st.Colors[ImGuiCol_NavCursor] = { .26f, .59f, .98f, 1.00f };
    st.Colors[ImGuiCol_NavWindowingHighlight] = { 1.00f, 1.00f, 1.00f, .70f };
    st.Colors[ImGuiCol_NavWindowingDimBg] = { .80f, .80f, .80f, .20f };
    st.Colors[ImGuiCol_ModalWindowDimBg] = { .1f, .1f, .1f, .5f }; //{.80f, .80f, .80f, .35f};

    st.PopupBorderSize = 1.f;
    st.WindowPadding = { 3.0f, 3.0f };
    st.FramePadding = { 4.0f, 2.0f };
    st.CellPadding = { 4.0f, 2.0f };
    st.ItemSpacing = { 4.0f, 3.0f };
    st.ItemInnerSpacing = { 4.0f, 4.0f };
    st.IndentSpacing = 19.0f;
    st.ScrollbarSize = 14.0f;
    st.GrabMinSize = 12.f;

    st.WindowBorderSize = .0f;
    st.ChildBorderSize = 1.0f;
    st.PopupBorderSize = .0f;
    st.FrameBorderSize = .0f;
    st.TabBorderSize = .0f;

    st.WindowRounding = 3.0f;
    st.ChildRounding = 3.0f;
    st.PopupRounding = 2.0f;
    st.FrameRounding = 3.0f;
    st.GrabRounding = 6.0f;
    st.TabRounding = 3.0f;
    st.ScrollbarRounding = 6.0f;

    st.Alpha = 1.0f;
    st.DisabledAlpha = .5f;
    st.WindowMinSize = { 32.0f, 32.0f };
    st.WindowTitleAlign = { .5f, .5f };
    st.WindowMenuButtonPosition = ImGuiDir_None;
    st.ColumnsMinSpacing = 6.0f;
    //st.TabMinWidthForCloseButton = .0f;
    //st.ColorButtonPosition = ImGuiDir_Right;
    // Causes assert failure on macOS
    //st.ButtonTextAlign = {.5f, .5f};
    st.SelectableTextAlign = { .0f, .0f };
  }
}