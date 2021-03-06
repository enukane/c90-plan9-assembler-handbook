= はじめに

本書をお手に取って頂いてありがとうございます.
本書は Plan9 のアセンブラの解説書です.

Plan 9 のプログラミング環境といえば, ミドルボタンが必要なエディタ Acme
からはじまり stdio.h を include しない Hello World のC言語コンパイラ 8c,
このご時世に動的リンクが存在しないライブラリ環境 e.t.c. と特異なことを
ご存じの方もいるでしょう.
その例に漏れず, 同じアセンブラといえど Plan 9 のアセンブラは gas や NASM と
異なる文化を持っています.

Plan 9 のマシン依存部, pbs(PC Partition Boot Selector) や 9load などの
古式ゆかしきx86向けブートローダ, 9front に最近入った UEFI 対応のローダなど
様々な低レイヤの面白い箇所にこのアセンブラは登場します.

本書ではいわゆる x86 32bit (i386) 向けの 8a, x86 64bit (amd64) 向けの
6a をメインにこのアセンブラの独特の文法や作法などを紹介します.
底本として Rob Pike 著 A Manual for the Plan 9 assembler を引きつつ
実際のコードを提示してこれを解説します.
x86/64 自体の命令セット・アーキテクチャについては本書では触れません.

6a は昨今 Go 言語のコンパイラを含むビルドシステムにて用いられており,
この解説文章として「Goアセンブラ入門」( http://golang-jp.org/doc/asm )が
日本語で読める資料として存在します. またその他にも @oraccha さんの Plan 9日記
( http://d.hatena.ne.jp/oraccha/ )にもいくつか記事が存在します.
併せてこのあたりをご参照いただくと良いかと思います.

