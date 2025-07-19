#pragma once
#include <string>
#include <optional>

class cWeaponComponent
{
public:
    cWeaponComponent() = default;

    void setComponentName(std::string_view _componentName);
    void setComponentTemplate(std::string_view _componentTemplate);
    void setModelName(std::string_view _modelName);
    void setClipSize(int _clipSize) noexcept;
    void setModelLOD(int _modelLOD) noexcept;
    void setAmmoInfo(std::string_view _ammoInfo);
    void setComponentEnabled(bool _enabled) noexcept;

    [[nodiscard]] const std::string& getComponentTemplate() const noexcept;
    [[nodiscard]] const std::string& getComponentName() const noexcept;
    [[nodiscard]] const std::string& getModelName() const noexcept;
    [[nodiscard]] int getClipSize() const noexcept;
    [[nodiscard]] int getModelLOD() const noexcept;
    [[nodiscard]] const std::string& getAmmoInfo() const noexcept;
    [[nodiscard]] bool isComponentEnabled() const noexcept;

private:
    std::string componentTemplate;
    std::string componentName;
    std::string modelName;
    int clipSize = 0;
    int modelLOD = 300;
    std::string ammoInfo;
    bool enabled = true;
};