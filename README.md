# linux-kmod-template

Initialize this module with a name by executing:

```shell
name=<module's name> ./init.sh
```

After this, you can compile your module by:

```shell
make
```

Load this module by:

```shell
make load
```

Unload this module by:

```shell
make unload
```

If you use `clangd`, you can generate the json file by:

```shell
make clangd # Requires an active installation of bear (v3)
```
