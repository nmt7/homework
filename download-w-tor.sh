#!/bin/bash

mkupgdscr(){
	echo "Making 'upgd' script."
	cat > "/home/kali/.local/bin/upgd" << EndOS
#!/bin/bash
sudo apt update && sudo apt full-upgrade -y
sudo apt dist-upgrade
sudo apt autoremove && sudo apt autoclean
EndOS
	chmod +x "/home/kali/.local/bin/upgd"
}

if test ! -f "/home/kali/.local/bin/upgd"
then
	mkupgdscr
fi


exedltorbr(){
	sh -c '"/home/kali/tor-browser/Browser/start-tor-browser" --detach || ([ !  -x "/home/kali/tor-browser/Browser/start-tor-browser" ] && "$(dirname "$*")"/Browser/start-tor-browser --detach)' dummy %k
	read -p "Press Enter after Tor has been opened..." </dev/tty
	yt-dlp --verbose --proxy socks5://localhost:9150 "$url1"
}

exedl(){
	yt-dlp --verbose "$url1"
}



regex='^(https?|ftp|file)://[-A-Za-z0-9\+&@#/%?=~_|!:,.;]*[-A-Za-z0-9\+&@#/%=~_|]$'
echo "Link:"
read url1

if [[ $url1 =~ $regex ]]
then
	echo "Link valid."
	read -p "Press Enter to continue..." </dev/tty
	
	echo "Download with Tor? (y/N)"
	read sttor
	case "$sttor" in
		"Y") exedltorbr;;
		"y") exedltorbr;;
		"yes") exedltorbr;;
		"Yes") exedltorbr;;
		"YES") exedltorbr;;
		*) exedl;;
	esac
else
	echo "Link not valid"

fi


echo "Do you want to clear history? (y/N)"
read clrc1

case "$clrc" in
	"Y") exec rm "$HISTFILE";;
	"y") exec rm "$HISTFILE";;
	"yes") exec rm "$HISTFILE";;
	"Yes") exec rm "$HISTFILE";;
	"YES") exec rm "$HISTFILE";;
esac


echo "Full-uppgrade? (y/N)"
read choice1

case "$choice1" in
	"Y") upgd;;
	"y") upgd;;
	"yes") upgd;;
	"Yes") upgd;;
	"YES") upgd;;
esac
