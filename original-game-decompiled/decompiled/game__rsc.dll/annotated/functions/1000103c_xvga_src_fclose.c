
/* ==== xvga_src_fclose @ 1000103c ==== 
 * signature: undefined __cdecl xvga_src_fclose(undefined * * param_1)
 * body: 1000103c-10001040
 * thunk to: xvga_src_fclose_impl
 */

void __cdecl xvga_src_fclose(undefined **param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_44 [15];
  undefined4 uStack_8;
  
                    /* 0x103c  10  xvga_src_fclose */
  puVar3 = auStack_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == (undefined **)0x0) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  else if (DAT_10031408 == 0) {
    FUN_10001d70(param_1);
  }
  else {
    iVar2 = FUN_10015690((int)param_1);
    iVar1 = FUN_10015690(DAT_100313f8);
    if (iVar2 == iVar1) {
      if (DAT_10031408 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
    }
    else {
      FUN_10001d70(param_1);
    }
  }
  uStack_8 = 0x100019f8;
  __chkesp();
  return;
}


