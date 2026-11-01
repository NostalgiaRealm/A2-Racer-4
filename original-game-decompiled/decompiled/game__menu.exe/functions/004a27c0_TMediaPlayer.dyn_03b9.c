
/* ==== TMediaPlayer.dyn_03b9 @ 004a27c0 ==== 
 * signature: undefined TMediaPlayer.dyn_03b9(void)
 * body: 004a27c0-004a285e
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TMediaPlayer_dyn_03b9(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar3;
  
  iVar3 = param_2;
  if (((char)param_1[0xc1] != '\0') &&
     (cVar2 = FUN_004a3b58((int)param_1), param_3 = extraout_ECX, iVar3 = extraout_EDX,
     cVar2 == '\x01')) {
    if (*(char *)((int)param_1 + 0x2cb) != '\0') {
      *(ushort *)((int)param_1 + 0x28e) = *(ushort *)((int)param_1 + 0x28e) | 1;
    }
    if (*(char *)((int)param_1 + 0x2ce) != '\0') {
      *(ushort *)((int)param_1 + 0x28e) = *(ushort *)((int)param_1 + 0x28e) | 0x80;
    }
    *(ushort *)((int)param_1 + 0x28e) = *(ushort *)((int)param_1 + 0x28e) & 0xfff9;
    FUN_004a1ca0(param_1);
    param_3 = extraout_ECX_00;
    iVar3 = extraout_EDX_00;
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0xbc) = 0;
  }
  else if (iVar1 == 2) {
    *(undefined1 *)(param_1 + 0xbc) = 1;
  }
  else if (iVar1 == 4) {
    *(undefined1 *)(param_1 + 0xbc) = 2;
  }
  else if (iVar1 == 8) {
    *(undefined1 *)(param_1 + 0xbc) = 3;
  }
  FUN_00403178(param_1,iVar3,param_3);
  return;
}


