#!/bin/bash

semiautoricer(){

	cat > "/home/$USER/Documents/semiricer.sh" << EOS
#!/bin/bash

sudo apt update && sudo apt full-upgrade && sudo apt dist-upgrade && sudo apt autoremove && sudo apt autoclean


# upgd
mkupgdscr(){
	echo "Making 'upgd' script."
	cat > "/home/kali/.local/bin/upgd" << Sen
#!/bin/bash
sudo apt update && sudo apt full-upgrade -y
sudo apt dist-upgrade
sudo apt autoremove && sudo apt autoclean
Sen
	chmod +x "/home/kali/.local/bin/upgd"
}
mkupgdscr


# xfce4 theming files
engrampa -h "/home/$USER/Archive/xfce4-theming-files/themes-and-icons-main.zip"


engrampa -h "/home/$USER/Archive/xfce4-theming-files/themes-and-icons-main/Nordic-cursors.tar.xz"

sudo mv "/home/$USER/Archive/xfce4-theming-files/themes-and-icons-main/Nordic-cursors" "/usr/share/icons/"


engrampa -h "/home/$USER/Archive/xfce4-theming-files/themes-and-icons-main/Tokyo-Night-Linux-master.zip"

sudo mv "/home/$USER/Archive/xfce4-theming-files/themes-and-icons-main/Tokyo-Night-Linux-master/usr/share/themes/TokyoNight/" "/usr/share/themes/"


engrampa -h "/home/$USER/Archive/xfce4-theming-files/themes-and-icons-main/Tela-circle-icon-theme-master.zip"
sudo "/home/$USER/Archive/xfce4-theming-files/themes-and-icons-main/Tela-circle-icon-theme-master/install.sh"


# Xtreme download manager
engrampa -h "/home/$USER/Archive/download-managers/xdm-setup-7.2.11.tar.xz"
"/home/$USER/Archive/download-managers/xdm-setup-7.2.11/install.sh"


# localsend_app
sudo apt install "/home/$USER/Archive/localsend-app/LocalSend-1.17.0-linux-x86-64.deb"


# neofetch config
mv "/home/$USER/Archive/neofetch-config/config.conf" "/home/$USER/.config/neofetch/"


# vscodium (from package manager)
wget -qO - https://gitlab.com/paulcarroty/vscodium-deb-rpm-repo/raw/master/pub.gpg \
    | gpg --dearmor \
    | sudo dd of=/usr/share/keyrings/vscodium-archive-keyring.gpg
echo 'deb [arch=amd64,arm64 signed-by=/usr/share/keyrings/vscodium-archive-keyring.gpg] https://download.vscodium.com/debs vscodium main' \
    | sudo tee /etc/apt/sources.list.d/vscodium.list
sudo apt update && sudo apt install codium


# powerlevel10k (zsh theme)
#git clone --depth=1 https://github.com/romkatv/powerlevel10k.git /home/$USER/powerlevel10k/
echo 'source ~/powerlevel10k/powerlevel10k.zsh-theme' >>~/.zshrc
cd "/home/$USER/powerlevel10k/" && sudo make install
cd ./$USER/


echo "Remember to change Window Manager, XFCE's theme and icons."
echo "Add your hostname '127.0.0.1       localhost kali [Your desired hostname]' in /etc/hosts, run command 'sudo hostnamectl set-hostname [Your desired hostname]'"
read -p "Press Enter to continue..." </dev/tty

EOS
	chmod +x "/home/$USER/Documents/semiricer.sh"
	"/home/$USER/Documents/semiricer.sh" > "/home/$USER/semi-rice-updater.log"
}
