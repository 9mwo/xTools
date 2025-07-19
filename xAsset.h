#pragma once
#include <string>
#include <filesystem>

class cWeaponAsset
{
public:
    cWeaponAsset() = default;
    cWeaponAsset(std::string_view name, std::filesystem::path path);

    std::string assetName;
    std::filesystem::path assetAbsolutePath;
};