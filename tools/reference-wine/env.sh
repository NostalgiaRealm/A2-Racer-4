# Sourced by the other scripts. Sets the isolated environment for the reference run: a throwaway
# Wine prefix, no route to the owner's screen or sound server, nothing written to his home.
# REFWINE is the working folder. It must stay outside the project and outside ~/.wine. Delete it when
# done. The measurement in evidence/reference-wine used a folder on tmpfs; set REFWINE for that.
: "${REFWINE:=$HOME/.cache/a2r4-refwine}"
export REFWINE
: "${REFWINE_DISPLAY:=:173}"

case "$REFWINE" in
  ""|/|"$HOME"|"$HOME/.wine"*) echo "refusing REFWINE=$REFWINE" >&2; exit 2 ;;
esac

export WINEPREFIX="$REFWINE/prefix"
export WINEARCH=win64
export WINEDEBUG=-all
export WINEDLLOVERRIDES="mscoree,mshtml=;winemenubuilder.exe=d"

# Display: only our own Xvfb. No Wayland, no route to the desktop session.
export DISPLAY="$REFWINE_DISPLAY"
unset WAYLAND_DISPLAY WAYLAND_SOCKET XAUTHORITY DBUS_SESSION_BUS_ADDRESS

# Sound: a private ALSA configuration with only a null device, and no route to the sound server.
export ALSA_CONFIG_PATH="$REFWINE/alsa-null.conf"
export PULSE_SERVER="unix:$REFWINE/no-such-pulse"
export PIPEWIRE_REMOTE="$REFWINE/no-such-pipewire"
export PULSE_RUNTIME_PATH="$REFWINE/no-such-pulse-dir"

# Nothing goes to the real home: shell folders, font cache, shader cache, menu entries.
export HOME="$REFWINE/home"
export XDG_RUNTIME_DIR="$REFWINE/xdg-run"
export XDG_CACHE_HOME="$REFWINE/home/.cache"
export XDG_CONFIG_HOME="$REFWINE/home/.config"
export XDG_DATA_HOME="$REFWINE/home/.local/share"

# Software OpenGL through Xvfb's GLX.
export LIBGL_ALWAYS_SOFTWARE=1
export GALLIUM_DRIVER=llvmpipe
