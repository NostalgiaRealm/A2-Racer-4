# Hosting

The game is live at <https://games.nostalgiarealm.com/a2racer4/>. It is a static site: the server only hands out files, and the game runs in the player's browser. It needs no game server, database or running Node.js.

## On the server

| Item | Value |
|---|---|
| Server | `Debian` in `~/.ssh/config`, Nginx |
| Web folder | `/var/www/games.nostalgiarealm.com/a2racer4`, owned by `rick`, so updates need no sudo |
| Nginx site | `/etc/nginx/sites-available/games.nostalgiarealm.com`, locations `/a2racer4` and `/a2racer4/`. The certificate and DNS name are the site's own |

The game asks only for files relative to its page, so the address must end in `/`. Nginx redirects `/a2racer4` to it.

What the game needs from the server:

- Byte ranges on `assets/game/rcs.img` and `rc.img`. The race reads pieces of them.
- `application/wasm` for `game/spel.wasm`. Debian's `mime.types` has it. With another type the game falls back to a slower compile.
- `.wav` as `audio/wav`, from the site's own `types` block.
- Keep gzip off `application/octet-stream` in this location: `rcs.img` and `rc.img` have that type.
- HTTPS. Browsers allow the gamepad API only on a secure page.

## Update

```bash
tools/deploy-website.sh --dry-run
```

```bash
tools/deploy-website.sh
```

It builds `dist/`, sends what changed with rsync and compares the live `index.html`, `src/main.js` and `game/spel.wasm` with the build. A browser keeps a player's saves per host name, in the origin `games.nostalgiarealm.com`, so moving the game to another name would leave them behind. Moving to another folder on this host would not.

## First setup

Done once, on 2026-11-01. It needs root, and it is safe to repeat. Upload a build to a folder ending in `/a2racer4`, copy the script over, and run it on the server:

```bash
A2R4_DEPLOY_PATH=/home/rick/a2racer4-upload/a2racer4 A2R4_DEPLOY_URL= tools/deploy-website.sh
```

```bash
scp tools/server-setup-website.sh Debian:a2racer4-upload/
```

```bash
ssh -t Debian 'sudo bash /home/rick/a2racer4-upload/server-setup-website.sh --from /home/rick/a2racer4-upload/a2racer4'
```

`tools/server-setup-website.sh` creates the web folder, moves the build into it and adds the locations to the site with a backup, `games.nostalgiarealm.com.bak-<date>-a2racer4`. If `nginx -t` refuses the result it restores the backup and does not reload.

To remove the game: restore that backup or delete the `a2racer4` locations, reload Nginx, and delete the web folder.

## Other hosts

Any static host works, with the same needs: build `dist/` from the repository or the source archive with `npm ci` and `npm run build`, and serve its files. It does not run from `file://`.
