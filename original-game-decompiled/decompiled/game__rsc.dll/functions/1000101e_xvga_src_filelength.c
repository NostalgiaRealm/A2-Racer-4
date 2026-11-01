
/* ==== xvga_src_filelength @ 1000101e ==== 
 * signature: undefined __cdecl xvga_src_filelength(int param_1)
 * body: 1000101e-10001022
 * thunk to: FUN_100016a0
 */

void __cdecl xvga_src_filelength(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_4c [16];
  uint uStack_c;
  uint uStack_8;
  
                    /* 0x101e  11  xvga_src_filelength */
  puVar3 = auStack_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == 0) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  if (DAT_10031408 == 0) {
    uStack_8 = FUN_10015690(param_1);
    FUN_100155d0(uStack_8);
  }
  else {
    iVar2 = FUN_10015690(param_1);
    iVar1 = FUN_10015690(DAT_100313f8);
    if (iVar2 == iVar1) {
      if (DAT_10031408 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
    }
    else {
      uStack_c = FUN_10015690(param_1);
      FUN_100155d0(uStack_c);
    }
  }
  uStack_8 = 0x1000177c;
  __chkesp();
  return;
}


