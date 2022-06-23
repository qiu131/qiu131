# 基本概念

- 工作区：仓库的目录。工作区是独立于各个分支的。
- 暂存区：数据暂时存放的区域，类似于工作区写入版本库前的缓存区。暂存区是独立于各个分支的。
- 版本库：存放所有已经提交到本地仓库的代码版本

# 常用命令

几个常用的命令：

1、初始化一个Git仓库，使用git init命令。

初始化前，可以设置全局变量：

git config --global user.name xxx：设置全局用户名，信息记录在~/.gitconfig文件中
git config --global user.email xxx@xxx.com：设置全局邮箱地址，信息记录在~/.gitconfig文件中

2、添加文件到Git仓库，分两步：

使用命令git add <file>，注意，可反复多次使用，添加多个文件；（git add .：将所有待加入暂存区的文件加入暂存区）

使用命令git commit -m <message>，完成。

3、查看工作区的状态

要随时掌握工作区的状态，使用git status命令。

如果git status告诉你有文件被修改过，用git diff可以查看XX文件相对于暂存区修改了哪些内容

4、版本回退

HEAD指向的版本就是当前版本，因此，Git允许我们在版本的历史之间穿梭，使用命令git reset --hard commit_id。

穿梭前，用git log可以查看提交历史，以便确定要回退到哪个版本。

要重返未来，用git reflog查看命令历史，以便确定要回到未来的哪个版本。

# 全部命令

- git config --global user.name xxx：设置全局用户名，信息记录在~/.gitconfig文件中
- git config --global user.email xxx@xxx.com：设置全局邮箱地址，信息记录在~/.gitconfig文件中
- git init：将当前目录配置成git仓库，信息记录在隐藏的.git文件夹中
- git add XX：将XX文件添加到暂存区
  - git add .：将所有待加入暂存区的文件加入暂存区
- git rm --cached XX：将文件从仓库索引目录中删掉
- git commit -m "给自己看的备注信息"：将暂存区的内容提交到当前分支
- git status：查看仓库状态
- git diff XX：查看XX文件相对于暂存区修改了哪些内容
- git log：查看当前分支的所有版本
- git reflog：查看HEAD指针的移动历史（包括被回滚的版本）
- git reset --hard HEAD^ 或 git reset --hard HEAD~：将代码库回滚到上一个版本
  - git reset --hard HEAD^^：往上回滚两次，以此类推
  - git reset --hard HEAD~100：往上回滚100个版本
  - git reset --hard 版本号：回滚到某一特定版本
- git checkout — XX或git restore XX：将XX文件尚未加入暂存区的修改全部撤销
- git remote add origin git@git.acwing.com:xxx/XXX.git：将本地仓库关联到远程仓库
- git push -u (第一次需要-u以后不需要)：将当前分支推送到远程仓库
  - git push origin branch_name：将本地的某个分支推送到远程仓库
- git clone git@git.acwing.com:xxx/XXX.git：将远程仓库XXX下载到当前目录下
- git checkout -b branch_name：创建并切换到branch_name这个分支
- git branch：查看所有分支和当前所处分支
- git checkout branch_name：切换到branch_name这个分支
- git merge branch_name：将分支branch_name合并到当前分支上
- git branch -d branch_name：删除本地仓库的branch_name分支
- git branch branch_name：创建新分支
- git push --set-upstream origin branch_name：设置本地的branch_name分支对应远程仓库的branch_name分支
- git push -d origin branch_name：删除远程仓库的branch_name分支
- git pull：将远程仓库的当前分支与本地仓库的当前分支合并
  - git pull origin branch_name：将远程仓库的branch_name分支与本地仓库的当前分支合并
- git branch --set-upstream-to=origin/branch_name1 branch_name2：将远程的branch_name1分支与本地的branch_name2分支对应
- git checkout -t origin/branch_name 将远程的branch_name分支拉取到本地
- git stash：将工作区和暂存区中尚未提交的修改存入栈中
- git stash apply：将栈顶存储的修改恢复到当前分支，但不删除栈顶元素
- git stash drop：删除栈顶存储的修改
- git stash pop：将栈顶存储的修改恢复到当前分支，同时删除栈顶元素
- git stash list：查看栈中所有元素


