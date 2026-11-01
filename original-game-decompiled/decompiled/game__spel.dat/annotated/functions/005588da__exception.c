
/* ==== exception::~exception @ 005588da ==== 
 * signature: void __thiscall ~exception(exception * this)
 * body: 005588da-005588ef
 * note: Library Function - Single Match  public: virtual __thiscall exception::~exception(void)  Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = &PTR_FUN_005795d8;
  if (*(int *)(this + 8) != 0) {
    FUN_0054b339(*(LPVOID *)(this + 4));
  }
  return;
}


