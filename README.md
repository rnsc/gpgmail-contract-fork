# kivikakk/GPGMail: GPGMail, minus annoying dialog, plus working build instructions

I love open source. Let's go.

For general information, see the [upstream README](https://github.com/GPGTools/GPGMail/blob/mojave/README.md).

## Build

* Install GPG. [Homebrew](https://brew.sh) makes this easy: `brew install gnupg`
* Make sure you have submodules cloned. `git submodule update --init --recursive`
* Build and install Libmacgpg. `(cd Dependencies/Libmacgpg && make && mkdir -p ~/Library/Frameworks && cp -r build/Release/Libmacgpg.framework ~/Library/Frameworks/)`
* Build, sign and install GPGTools. `make && codesign -s - --deep --force build/Release/GPGMail.mailbundle && mkdir -p ~/Library/Mail/Bundles && cp -r build/Release/GPGMail.mailbundle ~/Library/Mail/Bundles`
* Open Mail.app, open its Preferences, click "Manage Plugins..." at the bottom of the General pane, check the box next to "GPGMail.mailbundle", click "Apply and Restart Mail".
* Baby, you've got yourself a stew.

If these steps don't work for you, [open an issue](https://github.com/kivikakk/GPGMail/issues/new) and let's work it out.
