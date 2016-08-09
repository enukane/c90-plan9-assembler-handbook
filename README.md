c90-plan9-assembler-handbook
============================

## なんだこれは

C90, 2016 夏コミックマーケット 西34 F-49a "glenda9" にて頒布した
「Plan 9 Assembler Handbook」の文章データになります.

印刷に使った完成原稿(pdf)は含まれていません. ReVIEW のソースからコンパイルして
生成してください. なお印刷した完成原稿は OS X El Capitan 10.11.6, MacTex-2016,
review 2.0.0 の環境でビルドしました.

## ビルドに必要なもの

- Ruby (2.2.2以上)
- [Re:VIEW](https://github.com/kmuto/review)
- TeX環境 (uplatex, dvipdfmxなど. またPATHが通っていること)

## ReVIEW へのパッチ

デフォルトのRe:VIEWで生成したpdfでは, 目次の文字色が赤くなってしまうため本書の
生成にあたっては以下の様なパッチを適用しました.

- Change TOC color from red to black (${REVIEWPATH}/templates/latex/layout.tex.erb)
```diff
@@ -267,6 +267,8 @@
 %% preface
 <%= @input_files["PREDEF"] %>

+\hypersetup{ linkcolor=black }
+
 <%- if @config["toc"] -%>
 \setcounter{tocdepth}{<%= @config["toclevel"] %>}
 \tableofcontents
```

## ビルド方法

このソースにあるディレクトリでmakeコマンドをたたけば ```c90book.pdf``` が
できあがるはず!

## 印刷向け Tips

印刷所に出すA5トンボ付き原稿を作成する際の手順 on Mac OS.
Re:VIEW で生成したPDFをそのまま印刷所にぶん投げたいときの手はず.
正しくは InDesign に流し込むのが正道.

 1. 本リポジトリにて pdf を生成する
 2. Preview.app で開いて4の倍数ページにする
   2.1 目次ページの後などページ番号が崩れない場所推奨, 場合によっては本文見直し
   2.2 中綴じ本で表紙を含める場合はここで結合すること
 3. A4 to A5 変換 by Preview.app
   3.1 「ファイル」「PDFとして書き出す」のポップアップウィンドウ下部の「詳細」にて用紙サイズを "A5" にする
 4. Adobe Acrobat Pro でトンボを付ける
   4.1 A5変換されたpdfを開く
   4.2 「ツール」にて「印刷工程」を追加する
   4.3 右メニューにて「印刷工程」を選択
   4.4 「ページボックスを設定」を選ぶ
     4.4.1 「余白の制御」「適用先」を「裁ち落としサイズ」にする
     4.4.2 「ページサイズを変更」にて「固定サイズ」を「ISOB5」にする (A5原稿をB5の紙に埋め込む)
     4.4.3 「ページ範囲」を「すべて」に
     4.4.4 OKを押す
   4.5 「トンボを追加」を選ぶ
     4.5.1 「トンボ」にて「全てのマーク」のチェックボックスを入れる
     4.5.2 「ページ範囲」にて「全て」を選択
     4.5.3 OKを押す
 5. 保存


## TeX 備忘録
毎季忘れるのでメモ

- http://osksn2.hep.sci.osaka-u.ac.jp/~taku/osx/install_ptex.html
- http://osksn2.hep.sci.osaka-u.ac.jp/~taku/osx/embed_hiragino.html
- http://tex.stackexchange.com/questions/88315/font-problem-errors-returned
