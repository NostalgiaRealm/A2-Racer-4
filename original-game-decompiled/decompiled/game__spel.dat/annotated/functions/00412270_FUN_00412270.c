
/* ==== FUN_00412270 @ 00412270 ==== 
 * signature: undefined __cdecl FUN_00412270(int param_1, undefined4 param_2)
 * body: 00412270-00412399
 */

void __cdecl FUN_00412270(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_006fb8fc;
  iVar2 = param_1 * 0x294;
  iVar3 = (&DAT_005ce9e8)[param_1 * 0xa5];
  switch(param_2) {
  case 4:
    (&DAT_005cea78)[param_1 * 0xa5] = DAT_005d1b3c;
    return;
  case 5:
    (&DAT_005cea78)[param_1 * 0xa5] = DAT_005d1b40;
    return;
  case 6:
    (&DAT_005cea78)[param_1 * 0xa5] = DAT_005d1b44;
    return;
  default:
    return;
  case 8:
    (&DAT_005cea78)[param_1 * 0xa5] = DAT_005d1b48;
    return;
  case 0xe:
    break;
  case 0xf:
    *(undefined4 *)(&DAT_005cea74 + iVar2) = 0xf;
    return;
  }
  if ((&DAT_006fa58c)[DAT_006fb898 * 0x25] == 0) {
    (&DAT_005973d0)[param_1 * 0x16] = 1;
  }
  else {
    if ((*(int *)(&DAT_005cea74 + iVar2) != 0xf) ||
       (*(int *)(iVar3 * 0xf0 + 0x34 + DAT_00715e50) <= *(int *)(&DAT_005cea70 + iVar2))) {
      *(undefined4 *)(&DAT_005cea74 + iVar2) = 0xe;
      return;
    }
    *(int *)(&DAT_005cea3c + iVar2) = *(int *)(&DAT_005cea3c + iVar2) + 1;
    *(undefined4 *)(&DAT_005cea74 + iVar2) = 0xe;
    if (*(int *)(&DAT_005cea3c + iVar2) < iVar1) {
      return;
    }
    iVar3 = (&DAT_005ce9e8)[param_1 * 0xa5];
    (&DAT_005973d0)[param_1 * 0x16] = 1;
  }
  FUN_0042e340(iVar3);
  (&DAT_005ce9ec)[param_1 * 0xa5] = 9;
  return;
}


