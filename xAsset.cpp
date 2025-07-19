#include "xAsset.h"


cWeaponAsset::cWeaponAsset(std::string_view name, std::filesystem::path path)
    : assetName(name), assetAbsolutePath(std::move(path))
{
}