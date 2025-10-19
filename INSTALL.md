# INSTALL.md (Deutsch, gekürzt)

## Anleitung

Diese Anleitung erklärt, wie du die Tools einrichtest, um **pokeemerald** zu bauen.  
Das Projekt übersetzt die Quellcodes in eine funktionierende GBA-ROM.

Wenn du auf Probleme stößt, kannst du auf [Discord oder IRC](README.md) um Hilfe bitten.

---

## 🪟 Windows

### Option 1: msys2 (empfohlen)

1. Lade den [devkitPro-Installer](https://github.com/devkitPro/installer/releases) herunter.  
   - Bei der Installation nur **GBA Development** auswählen.  
   - Standardpfad: `C:\devkitPro`.

2. Öffne **msys2** über `C:\devkitPro\msys2\msys2_shell.bat`.

3. Installiere die benötigten Pakete:
   ```bash
   pacman -Sy msys2-keyring
   pacman -S make gcc zlib-devel git
   ```

4. Lade [libpng](https://sourceforge.net/projects/libpng/files/libpng16/1.6.37/libpng-1.6.37.tar.xz/download) herunter und installiere es:
   ```bash
   tar xf libpng-1.6.37.tar.xz
   cd libpng-1.6.37
   ./configure --prefix=/usr
   make check
   make install
   cd
   ```

5. Erstelle einen Ordner, z. B. `C:\Users\<user>\Desktop\decomps`, und wechsle dorthin:
   ```bash
   cd Desktop/decomps
   ```

---

### Option 2: Cygwin

1. Lade [Cygwin](https://cygwin.com/install.html) herunter und installiere folgende Pakete:
   - `make`
   - `git`
   - `gcc-core`
   - `gcc-g++`
   - `libpng-devel`

2. Konfiguriere **devkitARM**:
   ```bash
   export DEVKITPRO=/cygdrive/c/devkitpro
   export DEVKITARM=$DEVKITPRO/devkitARM
   echo "export DEVKITPRO=$DEVKITPRO" >> ~/.bashrc
   echo "export DEVKITARM=$DEVKITARM" >> ~/.bashrc
   ```

3. Wechsle in deinen Projektordner:
   ```bash
   cd c:/Users/<user>/Desktop/decomps
   ```

---

## 🍎 macOS

1. Installiere die **Xcode Command Line Tools**:
   ```bash
   xcode-select --install
   ```

2. Installiere **Homebrew** (https://brew.sh) und dann libpng:
   ```bash
   brew install libpng
   ```

3. Installiere **devkitARM**:
   ```bash
   sudo dkp-pacman -Sy
   sudo dkp-pacman -S gba-dev devkitarm-rules
   ```

4. Setze die Umgebungsvariablen:
   ```bash
   export DEVKITPRO=/opt/devkitpro
   export DEVKITARM=$DEVKITPRO/devkitARM
   echo "export DEVKITPRO=$DEVKITPRO" >> ~/.bashrc
   echo "export DEVKITARM=$DEVKITARM" >> ~/.bashrc
   ```

---

## 🐧 Linux

### Debian/Ubuntu

```bash
sudo apt install build-essential binutils-arm-none-eabi git libpng-dev
```

### Arch Linux

```bash
sudo pacman -S base-devel arm-none-eabi-binutils git libpng
```

### NixOS

```bash
nix-shell -p pkgsCross.arm-embedded.stdenv.cc git pkg-config libpng
```

### OpenBSD

```bash
pkg_add gmake bash arm-none-eabi-binutils clang git
git clone https://github.com/jhelb1993/pokeemerald-german
git clone https://github.com/jhelb1993/agbcc
cd agbcc && ./build.sh && ./install.sh ../pokeemerald-german
cd ../pokeemerald-german && gmake
```

---

## 📦 Installation

1. Lade das Repository herunter:
   ```bash
   git clone https://github.com/jhelb1993/pokeemerald-german
   ```

2. Lade und installiere agbcc:
   ```bash
   git clone https://github.com/pret/agbcc
   cd agbcc
   ./build.sh
   ./install.sh ../pokeemerald-german
   cd ..
   ```

---

## 🏗️ Build

1. Wechsle ins pokeemerald-Verzeichnis:
   ```bash
   cd pokeemerald-german
   ```

2. Baue die ROM:
   ```bash
   make
   ```

   Das Ergebnis ist `pokeemerald.gba`.

3. Optional: schneller bauen mit mehreren Kernen:
   ```bash
   make -j$(nproc)
   ```

4. Vergleiche mit dem Original:
   ```bash
   make compare
   ```

   Wenn alles passt:
   ```
   pokeemerald.gba: OK
   ```

---

## 🔧 devkitARM manuell installieren (Linux)

Falls nicht vorhanden:

```bash
sudo apt install gdebi-core
wget https://github.com/devkitPro/pacman/releases/download/v1.0.2/devkitpro-pacman.amd64.deb
sudo gdebi devkitpro-pacman.amd64.deb
sudo dkp-pacman -Sy
sudo dkp-pacman -S gba-dev
source /etc/profile.d/devkit-env.sh
```

---

## 🧰 Nützliche Zusatztools

* [porymap](https://github.com/huderlem/porymap) – Karteneditor  
* [poryscript](https://github.com/huderlem/poryscript) – Skriptwerkzeug ([VS Code-Erweiterung](https://marketplace.visualstudio.com/items?itemName=karathan.poryscript))  
* [Tilemap Studio](https://github.com/Rangi42/tilemap-studio) – Tileset- und Tilemap-Editor  
