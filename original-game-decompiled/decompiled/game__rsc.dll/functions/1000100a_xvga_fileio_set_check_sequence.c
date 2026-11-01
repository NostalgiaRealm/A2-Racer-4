
/* ==== xvga_fileio_set_check_sequence @ 1000100a ==== 
 * signature: undefined __cdecl xvga_fileio_set_check_sequence(int param_1)
 * body: 1000100a-1000100e
 * thunk to: FUN_100013f0
 */

void __cdecl xvga_fileio_set_check_sequence(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [16];
  int iStack_8;
  
                    /* 0x100a  3  xvga_fileio_set_check_sequence */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  iStack_8 = param_1;
  if ((param_1 < 0) || (1 < param_1)) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  else {
    DAT_1003140c = param_1;
  }
  iStack_8 = 0x10001451;
  __chkesp();
  return;
}


