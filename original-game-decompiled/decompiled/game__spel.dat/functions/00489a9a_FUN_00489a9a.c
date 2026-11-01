
/* ==== FUN_00489a9a @ 00489a9a ==== 
 * signature: undefined __stdcall FUN_00489a9a(void)
 * body: 00489a9a-00489a9b
 */

void FUN_00489a9a(void)

{
  int in_EAX;
  void *this;
  char unaff_BL;
  undefined2 uVar1;
  
  *(char *)(in_EAX >> 0x1f) = *(char *)(in_EAX >> 0x1f) + unaff_BL;
  uVar1 = 0x48;
  func_0x9a3a0048();
  func_0x9a7a0048(uVar1);
  *(undefined4 *)((int)this + 0x37c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x398) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3b4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x278) = 0xffffffff;
  *(undefined4 *)((int)this + 0x27c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x370) = 1;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined1 *)((int)this + 0x38c) = 1;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined1 *)((int)this + 0x3a8) = 1;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  FUN_00489df0((undefined4 *)((int)this + 0x364),'\0');
  FUN_00489df0((undefined4 *)((int)this + 0x380),'\0');
  FUN_00489df0((undefined4 *)((int)this + 0x39c),'\0');
  *(undefined1 *)((int)this + 0x238) = 1;
  FUN_0048f090(this,0);
  return;
}


