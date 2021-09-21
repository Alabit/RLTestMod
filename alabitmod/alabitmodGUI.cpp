#include "pch.h"
#include "alabitmod.h"

/* Plugin Settings Window code here
std::string alabitmod::GetPluginName() {
	return "alabitmod";
}

void alabitmod::SetImGuiContext(uintptr_t ctx) {
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Render the plugin settings here
// This will show up in bakkesmod when the plugin is loaded at
//  f2 -> plugins -> alabitmod
void alabitmod::RenderSettings() {
	ImGui::TextUnformatted("alabitmod plugin settings");
}
*/

/*
// Do ImGui rendering here
void alabitmod::Render()
{
	if (!ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_, ImGuiWindowFlags_None))
	{
		// Early out if the window is collapsed, as an optimization.
		ImGui::End();
		return;
	}

	ImGui::End();

	if (!isWindowOpen_)
	{
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

// Name of the menu that is used to toggle the window.
std::string alabitmod::GetMenuName()
{
	return "alabitmod";
}

// Title to give the menu
std::string alabitmod::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void alabitmod::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Should events such as mouse clicks/key inputs be blocked so they won't reach the game
bool alabitmod::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

// Return true if window should be interactive
bool alabitmod::IsActiveOverlay()
{
	return true;
}

// Called when window is opened
void alabitmod::OnOpen()
{
	isWindowOpen_ = true;
}

// Called when window is closed
void alabitmod::OnClose()
{
	isWindowOpen_ = false;
}
*/
