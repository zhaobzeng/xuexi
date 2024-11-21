/*https://www.cnblogs.com/theseventhson/p/15657518.html
文件系统结构框图
*/
文件需要让人易于读写，并避免名字冲突
文件需要易于查找，整理归类
操作系统需要有文档记录功能一遍管理

文件系统特性：
采取树形结构、文件夹设计
对热点文件进行缓存，便于读写
采用索引结构，便于查找分类
维护一套数据结构用于记录哪些文档正在被那些任务使用

硬盘中我们以块为存储单元,而在文件系统中,我们需要一个存储块信息的基本结构体,这就是文件系统的基石inode
