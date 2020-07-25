# 42tokyo_sep_study_group

## study GitHub

## Contributing

### Forkする
GitHub上でforkする

### Forkしたリポジトリをローカルへcloneする

```
$ git clone https://github.com/mochikichi/42tokyo_sep_study_group.git
```

### ローカルでのgit設定

```
$ cd 42tokyo_sep_study_group
$ git init
$ git config --global user.name "ユーザー名"
$ git config --global user.email メールアドレス
$ git remote add upstream https://github.com/mochikichi/42tokyo_sep_study_group.git
```

### ブランチ作成

```
$ git checkout -b {ブランチ名}
```

### 編集してpushする

- 任意のファイルを編集/作成する

```
$ git add .
$ git commit -m "コミットメッセージ"
$ git push origin {ブランチ名}
```

### プルリクエスト作成
GitHub上でプルリクエスト作成
Compare & pull requestボタン → Create pull requestボタン

### マージ（リポジトリオーナ）
プルリクエストを確認してリポジトリオーナがmasterへmergeする
