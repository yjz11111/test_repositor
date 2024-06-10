# GITHUB
## 关键字查询
1. awesome   去此标签类别中查询项目
2. tutorial  查询书籍  资料  文档
3. sample  查询对应的技术样例

## GitHub三要素
* Repository  仓库
* 仓库是github项目管理储存的基本单位
* 一个仓库存储一个项目  一个用户可以拥有多个仓库  一般仓库分为public  private
* Commit  提交
* 程序员在整个开发周期  有大量的对代码资源的迭代和修改  都可以通过commit的方式来进行记录  便于程序员回溯代码  即使这些代码被删除提交便于使用者观察整个工程的开发流程以及设计流程
* Branch  分支
* 在仓库中可以包含多个分支  分支才是代码文件的第一存储单位  默认的仓库主分支为  master / main
* 不仅可以管理代码存储  还可以多人协作开发

## 仓库内容
* Code  资源存储  代码资源  二进制  项目管理脚本  许可证等
* issues  使用时遇到的bug 或 问题进行提交  等待反馈
* README  使用markdown语言  工程自述文件  开发进度  版本更新  使用介绍等
* LICENSE  许可证  GPL 2.0  3.0    Apahce 2.0   Mit  这些许可证  给使用者最大使用权限以及最少的限制

## git软件分布式版本控制系统
* 仓库管理软件  使用git管理私人代码或企业代码

## 设备认证
1. 如何让网站的账户与设备绑定  后续完成代码的管理  上传下载
    	* git init  //创建本地仓库  后续对仓库的操作  都要在仓库位置(master)
	* git config --list //查看git配置文件
	* git config --global user.email "邮箱"
	* git config --global user.name "名字"
	* ssh-keygen -t -rsa -C "注册邮箱"  //创建本地密文
	* 去对应目录查找密文文件
	* rsa.pub 复制密文,粘贴 settings -> SSH key and GPG -> new ssh key -> 粘贴
	* ssh -T git@github.com//测试关联是否成功
2. 为目标仓库起别名  定位目标仓库  后续上传

	* git remote add orgin "ssh地址"  //为ssh仓库地址创建别名为orgin
	* git remote remove orgin //删除orgin别名
	* git remote add orgin "ssh地址"  ///为ssh仓库地址创建别名为orgin
3. 本地设备与云端仓库的交互逻辑
   * git add code.c  将code.c 到git缓冲区
   * git commit "提交说明" 到本地仓库
   * git push origin master  到云端仓库
   * git add //添加内容
   * git rm  //删除本地文件并删除库数据
   * git restroe  //恢复被删除(仓库存在)

## 代码更新的依赖关系被破坏
* 本地内容要比云端新  完成更新替换  但是如果直接修改云端内容  导致本地内容无法再次提交
* 先拉取git pull 云端内容  与本地内容合并或操作 而后再次推即可
* gti pull --rebase origin master
* git rebase --skip "忽略本地内容  保留云端内容"
* git rebase --abort "忽略云端内容  保留本地内容"
* git rebase --continue"双端 git都保留"

## 下载开源代码
* git clone "http仓库地址" //下载开源项目code资源

## 分支Branch
关于分支的相关命令，创建分支、选择分支、合并分支等等

# MARKDOWN，文本修饰语言，用特殊符号修饰正文效果

# 文本修饰符(一级标题)
## 二级标题
### 三级标题
#### 四级标题
##### 五级标题

## 正文内容
输入正文，换行使用\<br\>
突出`关键字`,用\`关键字\`
## 修饰正文
*文本修饰*<br>
**文本修饰**<br>
***文本修饰***<br>
~~文本修饰~~

## 分割线用\-\-\-
---

## 引用使用\>
> 一级引用
>> 二级
>>> 三级引用
>>>> 四级

## 无序列表用\*
* 一级
  * 二级
    * 三级
* 一级

## 有序列表 1\.
1. 一级
   1. 二级
   2. 二级
      1. 三级
2. 一级

## 混合列表
* 一级
  1. 二级
     * 三级

## 表格
名字|坤能|战力
--|:--:|--:
刘能|瘸子|58554
武磊|右脚|99999

## 代码块用\`\`\`
```c
  #include<stdio.h>
  int main()
  {
	return 0;
  }	
```
```cpp
	#include<iostream>
	using namespace std;
	int main()
	{
		raturn 0;
	}
```
## 超链接技术
[Github](https://www.github.com "点击访问")


