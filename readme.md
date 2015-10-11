# WxWidgets example Visual Studio project

A very simple WxWidgets example application. 

Features:

 * A window showing "Hello world!"
 * The binary is statically linked and only ~3MB of size
     * Can be easily crunched to ~1MB with [UPX](http://upx.sourceforge.net/)
 * The binary uses only ~1MB of memory when executed

## Prerequisites

* Visual Studio 2015

* WxWidgets 3.0.2 built
    * See WxWidgets ticket [#16854](http://trac.wxwidgets.org/ticket/16854) for more details if you are having difficulties to compile with Visual Studio 2015

* Environment variable ``WX_ROOT`` pointing to your WxWidgets root