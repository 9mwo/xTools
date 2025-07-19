# xTools

Updated version of vWeaponsToolkit v1.0.5 from 2022 with better code under the hood. Same features, just improved/modernized.

## What's Better Now

### Under the Hood
- No more manual memory management (now using smart pointers)
- Better file handling (std::filesystem instead of Windows-specific code)
- Faster string operations (string_view where it makes sense)
- Some optimizations (move semantics, better loops)

### So Why?
- Less likely to crash
- Easier to work with
- Runs smoother
- Simpler to modify

### How to Build
1. Open `xTools.sln` in Visual Studio
2. Hit Build
3. Run it

### Build Not Working ?
1. Copy the icon.ico into the `x64 > Release` folder
2. Copy the `export` & `templates` folders into the `x64 > Release` folder

## Coming Soon

### Changes Planned:
- **GUI Change**: Switching from wxWidgets to IMGUI for better a more modern look
- **Addon Ammo Creation**: Implementing the ammo creation system that was in vWeaponsToolkit's TODO list
- **Single Player Support**: Adding proper single player compatibility that was in vWeaponsToolkit's TODO list

### Potential Updates:
- More modding templates such as DLC weapons and custom weapons.
- Model viewer allowing you to view finished exported weapons before importing.

---

*Note: This keeps all the original features - just modernized the code base, if you run into any issues at all create a issue or email me @ support@niggas.rip, and if you feel as if you could add to the project please feel free to create a PR.*
