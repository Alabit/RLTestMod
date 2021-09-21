#include "pch.h"
#include "alabitmod.h"

 //Plugin Settings Window code here
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

	if (ImGui::Button("Ball On Top")) {
		gameWrapper->Execute([this](GameWrapper* gw) {
			cvarManager->executeCommand("CoolerBallOnTop");
			});
	}
	if (ImGui::IsItemHovered()) {
		ImGui::SetTooltip("Activate Ball On Top");
	}

	CVarWrapper enableCvar = cvarManager->getCvar("cool_enabled");
	if (!enableCvar) { return; }
	bool enabled = enableCvar.getBoolValue();
	if (ImGui::Checkbox("Enable plugin", &enabled)) {
		enableCvar.setValue(enabled);
	}
	if (ImGui::IsItemHovered()) {
		ImGui::SetTooltip("Toggle Cool Plugin");
	}

	CVarWrapper distanceCvar = cvarManager->getCvar("cool_distance");
	if (!distanceCvar) { return; }
	float distance = distanceCvar.getFloatValue();
	if (ImGui::SliderFloat("Distance", &distance, 0.0, 500.0)) {
		distanceCvar.setValue(distance);
	}
	if (ImGui::IsItemHovered()) {
		std::string hoverText = "distance is " + std::to_string(distance);
		ImGui::SetTooltip(hoverText.c_str());
	}
}


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
