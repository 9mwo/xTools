#include "xComponent.h"

void cWeaponComponent::setComponentName(std::string_view _componentName) {
    componentName = _componentName;
}

void cWeaponComponent::setComponentTemplate(std::string_view _componentTemplate) {
    componentTemplate = _componentTemplate;
}

void cWeaponComponent::setModelName(std::string_view _modelName) {
    modelName = _modelName;
}

void cWeaponComponent::setClipSize(int _clipSize) noexcept {
    clipSize = _clipSize;
}

void cWeaponComponent::setModelLOD(int _modelLOD) noexcept {
    modelLOD = _modelLOD;
}

void cWeaponComponent::setAmmoInfo(std::string_view _ammoInfo) {
    ammoInfo = (_ammoInfo == "Default Ammo") ? "" : std::string(_ammoInfo);
}

void cWeaponComponent::setComponentEnabled(bool _enabled) noexcept {
    enabled = _enabled;
}

const std::string& cWeaponComponent::getComponentTemplate() const noexcept {
    return componentTemplate;
}

const std::string& cWeaponComponent::getComponentName() const noexcept {
    return componentName;
}

const std::string& cWeaponComponent::getModelName() const noexcept {
    return modelName;
}

int cWeaponComponent::getClipSize() const noexcept {
    return clipSize;
}

int cWeaponComponent::getModelLOD() const noexcept {
    return modelLOD;
}

const std::string& cWeaponComponent::getAmmoInfo() const noexcept {
    return ammoInfo;
}

bool cWeaponComponent::isComponentEnabled() const noexcept {
    return enabled;
}