# GXToast
![garyxuan-logo](http://a3.qpic.cn/psb?/V13cefHz22OeKo/zqOQVQhPTW8866VOdMoB37E5*550rDtDUtxy7ZX2WDo!/b/dNoAAAAAAAAA&bo=fQBbAAAAAAADBwQ!&rf=viewer_4)
------
##how to use

- Copy GXArchiver,NSObject+GXArchiver,NSObject+GXProperties to your project,best to create a new group named GXArchiver
- Import  NSObject+GXArchiver.h or GXArchiver.h(additional functionality) to file if you want to use it

##desc
移动端的数据持久化存储方法有很多种:fmdb、coredata、realm(很强大)、archive(归档)等等...
众所周知，sql系列只能存储基本数据类型，不支持直接存储Object对象类型。realm虽然支持存储Object对象，但是对于已经在使用sql系列的项目来说替换成本还是挺高的。
所以我觉得当你使用sql类型来存储数据但是又想存储少量的Object对象，或者App仅仅需要少量的数据存储的时候是完全可以使用归档来满足你的需求的。
所以GXArchiver可以用来无脑归、解档。如果你有更好的做法或者意见欢迎联系交流!。
GXArchiver已实现功能:

- 基本数据的自动归、解档。
- 自定义对象（可包含自定义子对象）的归档解档
- 归档清除

-------

##contact
> garyxuan@163.com




