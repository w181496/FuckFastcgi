# FuckFastCGI

## Description

This is a php script to exploit fastcgi protocol to bypass `open_basedir` and `disable_functions`.

It will help you to bypass strict `disable_functions` to RCE by loading the malicious extension.

## Usage

- set the config of `index.php`
    - unix socket path / tcp host
    - port
    - extension dir path
    - extension name
    - prepend file
    - ...
- upload this script and your malicious extension
- enjoy it!

