Forked by:
Portions Copyright (c) 2018, The Intense Coin developers 
Copyright (c) 2014-2017, The Monero Project Portions 
Copyright (c) 2012-2013, The Cryptonote developers
Copyright (c) 2018, The SPES developers
Copyright (c) 2018, The B2Bcoin developers


-= Building B2Bcoin QT GUI Wallet =-

On *nix:



```bash
$ apt-get update
$ apt-get upgrade
$ apt-get install qtbase5-dev libssl-dev cmake git libboost1.58-all-dev build-essential g++
$ git clone https://github.com/oliviersinnaeve/B2Bcoin-QT-GUI-Wallet
$ cd B2Bcoin-QT-GUI-Wallet/
$ cmake CMakeLists.txt
$ make -j 8

#### On Windows

Dependencies: MSVC 2015 or later, CMake 2.8.6 or later, Boost 1.59 or later and QT 5.10 or later.

You may download them from:

* http://www.microsoft.com/
* http://www.cmake.org/
* http://www.boost.org/
* https://www.qt.io/

To build, change to a directory where this file is located, and run these commands:
```
mkdir build
cd build
cmake -G "Visual Studio 15 Win64" ..
```

If you are building on an older processor without AVX support, add the following options to cmake:
```
-DPORTABLE=1 -DWITH_AVX2=0
```

You may find it helpful to explicitly include Boostand QT paths:
```
cmake.exe -DPORTABLE=1 -Wno-dev -DBOOST_ROOT=C:\boost_1_67_0 -DBOOST_LIBRARYDIR=C:\boost_1_67_0\libs\ -DCMAKE_PREFIX_PATH=C:\Qt\5.10.0\msvc2015_64 -G "Visual Studio 15 2017 Win64" ..
```

And then build from within MSVC.




## Resources
* [Oficial website](https://b2bcoin.xyz/)
* [Pool Oficial](http://pool.b2bcoin.ml)

## Social
* [Facebook](https://www.facebook.com/b2beyond)
* [Twitter](https://twitter.com/coinB2B)
* [Discord](https://discord.gg/QwhhqPY )
* [Telegram](https://t.me/joinchat/Fxlb2Qw8ivAta7iYgM0Wiw)

## Exchanges
* [STEX](https://app.stex.com/en/basic-trade/pair/BTC/B2B/1D)
* [MapleChange](https://maplechange.com/markets/b2bbtc?markets=all&column=name&order=asc&unit=volume&pinned=true&ref=1346)
* [FirstCryptoBank](https://fcbaccount.com)

## License
GNU General Public License v3.0
